/*
** my_str_isprintable.c for str in /home/lambol_a//Cprog/Jour_06/ex_14
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Oct  8 22:00:29 2012 aymeric lambolez
** Last update Tue Oct  9 18:08:33 2012 aymeric lambolez
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  if (str == 0)
    {
      return (1);
    }
  while (str[i] != '\0')
    {
      if (str[i] < 127 || str[i] > 31)
        {
          return (1);
        }
      i = i + 1;
    }
  return (0);
}
