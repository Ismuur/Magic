/*
** my_putnbr_oct.c for my_printf in /home/lambol_a//Cprog/Sem1/Systeme_UNIX/my_printf
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Tue Nov 13 14:18:04 2012 aymeric lambolez
** Last update Fri Mar 29 09:34:08 2013 aymeric lambolez
*/

#include "my.h"

int	my_convert_oct(int nb)
{
  char	result[5];
  int	i;

  i = 0;
  result[0] = '\\';
  result[4] = '\0';
  while (nb != 0)
    {
      result[3 - i] = (nb % 8) + 48;
      nb /= 8;
      i++;
    }
  while (3 - i != 0)
    {
      result[3 - i] = '0';
      i++;
    }
  my_putstr(result);
  return (4);
}

int	my_putstr_oct(char *str)
{
  int	i;
  int	compteur;

  i = 0;
  compteur = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] < 127)
	{
	  my_putchar(str[i]);
	  compteur++;
	}
      else
	compteur += my_convert_oct(str[i]);
      i++;
    }
  return (compteur);
}

int	my_putstr_oct_e(char *str)
{
  int	i;
  int	compteur;

  i = 0;
  compteur = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] < 127)
	{
	  my_putchar_count_e(str[i]);
	  compteur++;
	}
      else
	compteur += my_convert_oct(str[i]);
      i++;
    }
  return (compteur);
}

int	my_putnbr_oct(int nb)
{
  int	result;
  int	compteur;
  int	mult;

  result = 0;
  compteur = 0;
  mult = 1;
  while (nb != 0)
    {
      result += mult * (nb % 8);
      mult *= 10;
      nb /= 8;
      compteur++;
    }
  my_putnbr(result);
  return (compteur);
}

int	my_putnbr_oct_e(int nb)
{
  int	result;
  int	compteur;
  int	mult;

  result = 0;
  compteur = 0;
  mult = 1;
  while (nb != 0)
    {
      result += mult * (nb % 8);
      mult *= 10;
      nb /= 8;
      compteur++;
    }
  my_putnbr_count_e(result);
  return (compteur);
}
