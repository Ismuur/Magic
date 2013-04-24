/*
** my_putnbr_baseb.c for my_printf in /home/lambol_a//Cprog/Sem1/Systeme_UNIX/my_printf
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Tue Nov 13 08:13:14 2012 aymeric lambolez
** Last update Fri Mar 29 09:27:40 2013 aymeric lambolez
*/

#include "my.h"

int	my_putnbr_bin(int nb)
{
  int	i;
  int	result;
  int	mult;

  mult = 1;
  i = 0;
  result = 0;
  while (nb != 0)
    {
      result += (nb % 2) * mult ;
      mult *= 10;
      nb /= 2;
      i++;
    }
  my_putnbr(result);
  return (i);
}

int	my_putnbr_bin_e(int nb)
{
  int	i;
  int	result;
  int	mult;

  mult = 1;
  i = 0;
  result = 0;
  while (nb != 0)
    {
      result += (nb % 2) * mult ;
      mult *= 10;
      nb /= 2;
      i++;
    }
  my_putnbr_count_e(result);
  return (i);
}
