/*
** my_strncmp.c for str in /home/lambol_a//Cprog/Jour_06/ex_07
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Oct  8 18:16:23 2012 aymeric lambolez
** Last update Thu Oct 18 18:52:36 2012 aymeric lambolez
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int   i;
  int   result;

  i = 0;
  result = 0;
  while (s1[i] != '\0' || s2[i] != '\0' || n > 0)
    {
      while (result == 0 && n > 0)
        {
          result = result + (s1[i] - s2[i]);
          i = i + 1;
	  n = n - 1;
        }
      i = i + 1;
    }
  return (result);
}
