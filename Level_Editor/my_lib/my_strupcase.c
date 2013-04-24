/*
** strupcase.c for str in /home/lambol_a//Cprog/Jour_06/ex_07
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Oct  8 18:35:39 2012 aymeric lambolez
** Last update Tue Oct  9 20:22:48 2012 aymeric lambolez
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 97)
	{
	  str[i] = str[i] - 32;
	}
      	  i = i + 1;
    }
  return (str);
}
