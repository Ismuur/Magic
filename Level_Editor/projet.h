/*
** projet.h for perso in /home/lambol_a//PROJETS_PERSO/test_SDL
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Fri Apr 12 16:01:27 2013 aymeric lambolez
** Last update Wed Apr 24 10:35:28 2013 aymeric lambolez
*/

#ifndef PROJET_H_
# define PROJET_H_

# include <SDL/SDL.h>
# include <stdlib.h>

# define WIDTH 640
# define HEIGHT 480
# define BPP 32
# define TRANS_R 255
# define TRANS_G 0
# define TRANS_B 255
# define MAX_MAP_X 400
# define MAX_MAP_Y 300
# define TILE_SIZE 32

typedef struct	s_event
{
  int		up;
  int		down;
  int		left;
  int		right;
  int		space;
  int		attack;
  int		enter;
  int		erase;
  int		pause;
}		t_event;

typedef struct	s_all
{
  SDL_Surface	*screen;
}		t_all;

typedef struct	s_map
{
  SDL_Surface	*background;
  SDL_Surface	*tile_set;
  int		startX;
  int		startY;
  int		maxX;
  int		maxY;
  int		tile_tab[MAX_MAP_Y][MAX_MAP_X];
}		t_map;

t_event	ev;
t_all	game;
t_map	map;

void	my_exit(char *str);
void	init(char *title);
void	end();
int	main();
void	gere_key();
void	draw();
void	delay(unsigned int limit);
void	load_game();
void	draw_image(SDL_Surface *image, int x, int y);
SDL_Surface	*load_image(char *path);
void	load_map(char *);


#endif /* PROJET_H_  */
