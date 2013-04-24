/*
** my_putnbr_base.c for my_printf in /home/lambol_a//Cprog/Sem1/Systeme_UNIX/my_printf
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Thu Nov 15 11:51:40 2012 aymeric lambolez
** Last update Fri Mar 29 09:30:28 2013 aymeric lambolez
*/

#include "my.h"

int		flag_p(unsigned int nb, char *str)
{
  if (nb == 0)
    {
      my_putstr("(nil)");
      return (3);
    }
  else
    return (my_putstr_count("0x") - 2 + my_putunnbr_base(nb, str));
}

int		check_zero(unsigned int nb)
{
  if (nb == 0)
    {
      my_putchar(48);
      return (0);
    }
  else
    return (1);
}

int		my_putunnbr_base(unsigned int nb, char *str)
{
  unsigned int	mult;
  int		size;
  int		compteur;
  unsigned int	result;

  if (check_zero(nb) == 0)
    return (1);
  mult = 1;
  compteur = 0;
  size = my_strlen(str);
  result = nb;
  while (mult <= nb)
    mult *= size;
  mult /= size;
  while (mult != 1)
    {
      result = nb;
      result /= mult;
      my_putchar(str[result % size]);
      mult /= size;
      compteur++;
    }
  my_putchar(str[nb % size]);
  return (compteur + 1);
}

int		my_putunnbr_base_e(unsigned int nb, char *str)
{
  unsigned int	mult;
  int		size;
  int		compteur;
  unsigned int	result;

  if (check_zero(nb) == 0)
    return (1);
  mult = 1;
  compteur = 0;
  size = my_strlen(str);
  result = nb;
  while (mult <= nb)
    mult *= size;
  mult /= size;
  while (mult != 1)
    {
      result = nb;
      result /= mult;
      my_putchar_count_e(str[result % size]);
      mult /= size;
      compteur++;
    }
  my_putchar_count_e(str[nb % size]);
  return (compteur + 1);
}
