/*
** my_put_nbr.c for exo7 in /home/lambol_a//Cprog/Jour_03
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Thu Oct  4 20:12:02 2012 aymeric lambolez
** Last update Fri Mar 29 14:13:13 2013 aymeric lambolez
*/

#include "my.h"

int	my_putnbr_count(int nb)
{
  int	i;
  int	compteur;

  compteur = 0;
  i  = 1;
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  while ((nb / i) > 9)
    {
      i = i * 10;
    }
  while (i > 0)
    {
      my_putchar((nb / i) % 10 + 48);
      i = i / 10;
      compteur++;
    }
  return (compteur);
}

int	my_putnbr_count_e(int nb)
{
  int	i;
  int	compteur;

  compteur = 0;
  i  = 1;
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  while ((nb / i) > 9)
    {
      i = i * 10;
    }
  while (i > 0)
    {
      my_putchar_count_e((nb / i) % 10 + 48);
      i = i / 10;
      compteur++;
    }
  return (compteur);
}
