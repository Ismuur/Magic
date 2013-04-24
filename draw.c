/*
** draw.c for projet in /home/lambol_a//PROJETS_PERSO/test_SDL
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Thu Apr 18 10:00:27 2013 aymeric lambolez
** Last update Wed Apr 24 11:14:30 2013 aymeric lambolez
*/

#include "projet.h"

void	draw()
{
  draw_image(map.background, 0, 0);
  draw_map();
  SDL_Flip(game.screen);
  SDL_Delay(1);
}

void		draw_image(SDL_Surface *image, int x, int y)
{
  SDL_Rect	dest;

  dest.x = x;
  dest.y = y;
  dest.w = image->w;
  dest.h = image->h;
  SDL_BlitSurface(image, NULL, game.screen, &dest);
}

void		draw_tile(SDL_Surface *image, int destx, int desty, int srcx, int srcy)
{
  SDL_Rect	dest;
  SDL_Rect	src;

  dest.x = destx;
  dest.y = desty;
  dest.w = TILE_SIZE;
  dest.h = TILE_SIZE;
  src.x = srcx;
  src.y = srcy;
  src.w = TILE_SIZE;
  src.h = TILE_SIZE;
  SDL_BlitSurface(image, &src, game.screen, &dest);
}

SDL_Surface	*load_image(char *path)
{
  SDL_Surface	*image;
  SDL_Surface	*temp;

  temp = SDL_LoadBMP(path);
  if (!temp)
    exit(EXIT_FAILURE);
  SDL_SetColorKey(temp, (SDL_SRCCOLORKEY | SDL_RLEACCEL), SDL_MapRGB(temp->format, TRANS_R, TRANS_G, TRANS_B));
  image = SDL_DisplayFormat(temp);
  SDL_FreeSurface(temp);
  if (!image)
    exit(EXIT_FAILURE);
  return (image);
}

void		delay(unsigned int limit)
{
  unsigned int	ticks;

  ticks = SDL_GetTicks();
  if (limit < ticks)
    return ;
  if (limit > ticks + 16)
    SDL_Delay(16);
  else
    SDL_Delay(limit - ticks);
}
