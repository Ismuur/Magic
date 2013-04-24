/*
** my_str_isnum.c for str in /home/lambol_a//Cprog/Jour_06
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Oct  8 21:30:22 2012 aymeric lambolez
** Last update Fri Nov 30 11:54:50 2012 aymeric lambolez
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  if (str == 0)
    {
      return (1);
    }
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	  i++;
      else if (str[i] == '-' || str[i] == '+')
	i++;
      else
	return (0);
    }
  return (1);
}
