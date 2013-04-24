/*
** my_putstr.c for exo2 in /home/lambol_a//Cprog/Jour_04
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Thu Oct  4 10:20:57 2012 aymeric lambolez
** Last update Fri Mar 29 14:08:12 2013 aymeric lambolez
*/

#include "my.h"

int	my_putstr_count(char *str)
{
  int	i;

  i = 0;
  if (str == 0)
    {
      my_putstr("(null)");
      return (6);
    }
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (i);
}

int	my_putstr_count_e(char *str)
{
  int	i;

  i = 0;
  if (str == 0)
    {
      my_putstr_count_e("(null)");
      return (6);
    }
  while (str[i] != '\0')
    {
      my_putchar_count_e(str[i]);
      i = i + 1;
    }
  return (i);
}
