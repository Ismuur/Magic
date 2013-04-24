/*
** my_putchar_count.c for my_printf in /home/lambol_a//Cprog/Sem1/Systeme_UNIX/my_printf
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Thu Nov 15 14:30:34 2012 aymeric lambolez
** Last update Fri Mar 29 09:26:31 2013 aymeric lambolez
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"

int		my_putchar_count(char c)
{
  write(1, &c, 1);
  return (1);
}

int		my_putchar_count_e(char c)
{
  write(2, &c, 1);
  return (1);
}
