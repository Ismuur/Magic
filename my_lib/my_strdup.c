/*
** my_strdup.c for str in /home/lambol_a//Cprog/Jour_08
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Wed Oct 10 09:27:18 2012 aymeric lambolez
** Last update Thu Jan 24 09:42:42 2013 aymeric lambolez
*/

#include <stdlib.h>

char	*my_strdup(char *str)
{
  char	*dup;
  int	i;

  i = 0;
  dup = malloc(my_strlen(str));
  while (str[i] != '\0')
    {
      dup[i] = str[i];
      i = i + 1;
    }
  dup[i] = '\0';
  return (dup);
}
