/*
** main.c for perso in /home/lambol_a//PROJETS_PERSO/test_SDL
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Fri Apr 12 11:03:17 2013 aymeric lambolez
** Last update Wed Apr 24 11:53:26 2013 aymeric lambolez
*/

#include "projet.h"

int		main()
{
  unsigned int	frame_limit;
  int		go;

  frame_limit = SDL_GetTicks() + 16;
  go = 1;
  init("Jeu test");
  load_game();
  atexit(end);
  while (go)
    {
      gere_key();
      update();
      draw();
      delay(frame_limit);
      frame_limit = SDL_GetTicks() + 16;
    }
  exit(EXIT_SUCCESS);
}
