/*
** my_strcapitalize.c for str in /home/lambol_a//Cprog/Jour_06/ex_09
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Oct  8 20:30:38 2012 aymeric lambolez
** Last update Tue Oct  9 18:03:53 2012 aymeric lambolez
*/

char	*my_capitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 123 && str[i] > 96)
	{
	  if (str[i - 1] == 32 || str[i - 1] == 43 || str[i - 1] == 45)
	    {
	      str[i] = str[i] - 32;
	    }
	  if (i == 0)
	    {
	      str[i] = str[i] - 32;
	    }
	}
      i = i + 1;
    }
  return (str);
}
