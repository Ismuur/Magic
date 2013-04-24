/*
** map.c for projet in /home/lambol_a//PROJETS_PERSO/test_SDL
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Wed Apr 24 09:51:04 2013 aymeric lambolez
** Last update Wed Apr 24 12:07:54 2013 aymeric lambolez
*/

#include "projet.h"

void	load_map(char *path)
{
  int	x;
  int	y;
  FILE	*fp;

  fp = fopen(path, "rb");
  if (!fp)
    {
      printf("Failed to open %s\n", path);
      exit(EXIT_FAILURE);
    }
  y = 0;
  map.maxX = 0;
  map.maxY = 0;
  while (y < MAX_MAP_Y)
    {
      x = 0;
      while (x < MAX_MAP_X)
	{
	  fscanf(fp, "%d", &map.tile_tab[y][x]);
	  if (map.tile_tab[y][x] > 0)
	    {
	      if (x > map.maxX)
		map.maxX = x;
	      if (y > map.maxY)
		map.maxY = y;
	    }
	  x++;
	}
      y++;
    }
  map.maxX = (map.maxX + 1) * TILE_SIZE;
  map.maxY = (map.maxY + 1) * TILE_SIZE;
  map.startX = 0;
  map.startY = 0;
  fclose(fp);
}

void	draw_map()
{
  int	x;
  int	y;
  int	x1;
  int	x2;
  int	mapX;
  int	y1;
  int	y2;
  int	mapY;
  int	xsource;
  int	ysource;
  int	a;

  mapX = map.startX / TILE_SIZE;
  x1 = (map.startX % TILE_SIZE) * -1;
  x2 = x1 + WIDTH + (x1 == 0 ? 0 : TILE_SIZE);
  mapY = map.startY / TILE_SIZE;
  y1 = (map.startY % TILE_SIZE) * -1;
  y2 = y2 + HEIGHT + (y1 == 0 ? 0 : TILE_SIZE);
  y = y1;
  while (y <= y2)
    {
      x = x1;
      mapX = map.startX / TILE_SIZE;
      while (x <= x2)
	{
	  a = map.tile_tab[mapY][mapX];
	  ysource = a / 10 * TILE_SIZE;
	  xsource = a % 10 * TILE_SIZE;
	  draw_tile(map.tile_set, x, y, xsource, ysource);
	  mapX++;
	  x+= TILE_SIZE;
	}
      mapY++;
      y += TILE_SIZE;
    }
}
