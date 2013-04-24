/*
** my_strcmp.c for string in /home/lambol_a//Cprog/Jour_06/ex_05
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Oct  8 17:12:24 2012 aymeric lambolez
** Last update Tue Dec 18 11:28:53 2012 aymeric lambolez
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	result;

  i = 0;
  result = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (result == 0)
	result += (s1[i] - s2[i]);
      i++;
    }
  return (result);
}
