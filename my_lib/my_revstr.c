/*
** my_evil_str.c for exo3bis in /home/lambol_a//Cprog/Jour_04
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Thu Oct  4 11:23:10 2012 aymeric lambolez
** Last update Tue Oct  9 17:55:39 2012 aymeric lambolez
*/

char	*my_revstr(char *str)
{
  int	i;

  i = 0;
  while (i < my_strlen(str) / 2)
    {
      my_swap(&str[i], &str[my_strlen(str) - 1 - i]);
      i = i + 1;
    }
  return (str);
}
