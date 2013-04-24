/*
** my_strlen.c for exo3 in /home/lambol_a//Cprog/Jour_04
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Thu Oct  4 11:15:52 2012 aymeric lambolez
** Last update Tue Oct  9 20:20:02 2012 aymeric lambolez
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
