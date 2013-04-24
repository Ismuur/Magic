/*
** my_str_lower.c for str in /home/lambol_a//Cprog/Jour_06/ex_12
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Oct  8 21:44:01 2012 aymeric lambolez
** Last update Tue Oct  9 18:05:42 2012 aymeric lambolez
*/

int	my_str_islower(char *str)
{
  int   i;

  i = 0;
  if (str == 0)
    {
      return (1);
    }
  while (str[i] != '\0')
    {
      if (str[i] < 97 || str[i] > 122)
        {
          return (0);
        }
      i = i + 1;
    }
  return (1);
}
