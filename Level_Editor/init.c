/*
** init.c for projet in /home/lambol_a//PROJETS_PERSO/test_SDL
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Thu Apr 18 09:56:08 2013 aymeric lambolez
** Last update Wed Apr 24 11:14:16 2013 aymeric lambolez
*/

#include "projet.h"

void	my_exit(char *str)
{
  my_printf(str);
  exit(EXIT_FAILURE);
}

void	init(char *title)
{
  if (SDL_Init(SDL_INIT_VIDEO) == -1)
    my_exit("SDL Init Error\n");
  if(!(game.screen = SDL_SetVideoMode(WIDTH, HEIGHT, BPP, SDL_HWSURFACE | SDL_RESIZABLE)))
    my_exit("SDL Set Video Mode Error\n");
  SDL_WM_SetCaption(title, NULL);
  SDL_ShowCursor(SDL_DISABLE);
}

void	load_game()
{
  map.background = load_image("Sprites/background.bmp");
  map.tile_set = load_image("Sprites/tileset.bmp");
  if (!map.background || !map.tile_set)
    {
      printf("Erreur dans le chargement\n");
      exit (EXIT_FAILURE);
    }
  load_map("Map/map1.txt");
}

void	end()
{
  if (map.background)
    SDL_FreeSurface(map.background);
  if (map.tile_set)
    SDL_FreeSurface(map.tile_set);
  SDL_Quit();
}
