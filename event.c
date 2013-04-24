/*
** event.c for projet in /home/lambol_a//PROJETS_PERSO/test_SDL
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Thu Apr 18 09:55:32 2013 aymeric lambolez
** Last update Wed Apr 24 12:07:34 2013 aymeric lambolez
*/

#include "projet.h"

void	gere_key()
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
	    case SDLK_SPACE:
	      ev.space = 1;
	      break;
	    case SDLK_c:
	      ev.attack = 1;
	      break;
	    case SDLK_BACKSPACE:
	      ev.erase = 1;
	      break;
	    case SDLK_p:
	      ev.pause = 1;
	      break;
	    case SDLK_RETURN:
	      ev.enter = 1;
	      break;
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
	    case SDLK_c:
	      ev.attack = 0;
	      break;
	    case SDLK_BACKSPACE:
	      ev.erase = 0;
	      break;
	    case SDLK_p:
	      ev.pause = 0;
	      break;
	    case SDLK_RETURN:
	      ev.enter = 0;
	      break;
	    default:
	      break;
	    }
	  break;
	default:
	  break;
	}
    }
}

void	update()
{
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
}

