/*
** event.c for projet in /home/lambol_a//PROJETS_PERSO/test_SDL
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Thu Apr 18 09:55:32 2013 aymeric lambolez
** Last update Thu Apr 25 15:58:37 2013 eric hu
*/

#include "projet.h"

void		gere_key()
{
  SDL_Event	event;

  while (SDL_PollEvent(&event))
    {
      switch (event.type)
	{
	case SDL_QUIT:
	  exit(EXIT_FAILURE);
	  break;
	case SDL_KEYDOWN:
	  switch (event.key.keysym.sym)
	    {
	    case SDLK_ESCAPE:
	      exit(EXIT_FAILURE);
	      break;
	    case SDLK_UP:
	      ev.up = 1;
	      break;
	    case SDLK_DOWN:
	      ev.down = 1;
	      break;
	    case SDLK_LEFT:
	      ev.left = 1;
	      break;
	    case SDLK_RIGHT:
	      ev.right = 1;
	      break;

	      /* Touche S : Sauvegarde */
	    case SDLK_s:
	      ev.save = 1;
	      break;

	      /* Touche L : Chargement de la map */
	    case SDLK_l:
	      ev.load = 1;
	      break;

	      /* Touche Suppr : Réinitialisation de la map */
	      /*case SDLK_DELETE:
	      ev.reinit = 1;
	      break;*/
	    default:
	      break;
	    }
	  break;
	case SDL_KEYUP:
	  switch (event.key.keysym.sym)
	    {
	    case SDLK_ESCAPE:
	      exit(EXIT_FAILURE);
	      break;
	    case SDLK_UP:
	      ev.up = 0;
	      break;
	    case SDLK_DOWN:
	      ev.down = 0;
	      break;
	    case SDLK_LEFT:
	      ev.left = 0;
	      break;
	    case SDLK_RIGHT:
	      ev.right = 0;
	      break;
	    case SDLK_SPACE:
	      ev.space = 0;
	      break;
	    default:
	      break;
	    }

	case SDL_MOUSEBUTTONDOWN:
	  switch (event.button.button)
	    {
	      /* Clic gauche souris : Ajout du tile en cours */
	    case SDL_BUTTON_LEFT:
	      ev.add = 1;
	      break;

	      /* Clic central souris : Efface la tile sélectionnée */
	    case SDL_BUTTON_MIDDLE:
	      ev.remove = 1;
	      break;

	      /* Clic droit : Copie la tile sélectionnée */
	      /*case SDL_BUTTON_RIGHT:
	      ev.copy = 1;
	      break;*/

	      /* Roue souris : Défilement des tiles */
	    case SDL_BUTTON_WHEELUP:
	      ev.next = 1;
	      break;
	    case SDL_BUTTON_WHEELDOWN:
	      ev.previous = 1;
	      break;
	    default:
	    break;
	    }
	  break;

	case SDL_MOUSEBUTTONUP:
	  switch (event.button.button)
	    {
	    case SDL_BUTTON_LEFT:
	      ev.add = 0;
	      break;
	    case SDL_BUTTON_MIDDLE:
	      ev.remove = 0;
	      break;
	    default:
	    break;
	    }
	  break;
	default:
	break;
	}
    }
  SDL_GetMouseState(&ev.mouseX, &ev.mouseY);

  ev.mouseX /= TILE_SIZE;
  ev.mouseY /= TILE_SIZE;

  ev.mouseX *= TILE_SIZE;
  ev.mouseY *= TILE_SIZE;
}

void	update()
{
  cursor.x = ev.mouseX;
  cursor.y = ev.mouseY;

  if (ev.left == 1)
    {
      map.startX -= TILE_SIZE;
      if (map.startX < 0)
	map.startX = 0;
    }
  else if (ev.right == 1)
    {
      map.startX += TILE_SIZE;
      if (map.startX + WIDTH >= map.maxX)
	map.startX = map.maxX - WIDTH;
    }
  if (ev.up == 1)
    {
      map.startY -= TILE_SIZE;
      if (map.startY < 0)
	map.startY = 0;
    }
  else if (ev.down == 1)
    {
      map.startY += TILE_SIZE;
      if (map.startY + HEIGHT >= map.maxY)
	map.startY = map.maxY - HEIGHT;
    }

  /*
  ** Gestion copie de tile :
  ** on retrouve les coordonnées de la tile pointée par la souris et on remplace
  ** sa valeur par celle de la tile sélectionnée dans le curseur
  */
  if (ev.add == 1)
    map.tile_tab[(map.startY + cursor.y) / TILE_SIZE][(map.startX + cursor.x) / TILE_SIZE] = cursor.tileID;

  /* Reinitialisation de la tile pointée par la valeur BLANK_TILE */
  else if (ev.remove == 1)
    {
      map.tile_tab[(map.startY + cursor.y) / TILE_SIZE][(map.startX + cursor.x) / TILE_SIZE] = BLANK_TILE;
      cursor.tileID = 0;
    }

  /* Défilement des tiles dans un sens ou l'autre */
  if (ev.previous == 1)
    {
      cursor.tileID--;
      if (cursor.tileID < 0)
	cursor.tileID = MAX_TILES - 1;
      else if (cursor.tileID > MAX_TILES)
	cursor.tileID = 0;
      ev.previous = 0;
    }
  if (ev.next == 1)
    {
      cursor.tileID++;
      if (cursor.tileID < 0)
	cursor.tileID = MAX_TILES - 1;
      else if (cursor.tileID > MAX_TILES)
	cursor.tileID = 0;
      ev.next = 0;
    }

  /* Copie la tile pointée par la souris  */

  if (ev.copy == 1)
    {
      cursor.tileID = map.tile_tab[(map.startY + cursor.y) / TILE_SIZE][(map.startX + cursor.x) / TILE_SIZE];
      ev.copy == 0;
    }

  /* Réinitialisation map : appel de fonction reinitMap puis reload  */
  if (ev.reinit == 1)
    {
      reinit_map("Map/map1.txt");
      load_map("Map/map1.txt");
      ev.reinit = 0;
    }

  /* Sauvegarde de la map */
  if (ev.save == 1)
    {
      save_map("Map/map1.txt");
      ev.save = 0;
    }

  /* Chargement de la map */
  if (ev.load == 1)
    {
      load_map("Map/map1.txt");
      ev.load = 0;
    }

  /* Delai entre 2 boucle pour le scrolling */
  if (ev.left == 1 || ev.right == 1 || ev.up == 1 || ev.down == 1)
    SDL_Delay(30);
}

