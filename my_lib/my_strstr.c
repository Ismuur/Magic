/*
** my_strstr.c for str in /home/lambol_a//Cprog/Jour_06/ex_04
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Oct  8 10:59:01 2012 aymeric lambolez
** Last update Tue Oct  9 20:09:51 2012 aymeric lambolez
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[0])
	{
	  if (compare_str(str, to_find, i) == 1)
	    {
	      while (str[i] != '\0')
		{
		  str[j] = str[i];
		  j = j + 1;
		  i = i + 1;
		}
	      str[j] = '\0';
	      return (str);
	    }
	}
      i = i + 1;
    }
}

int	compare_str(char *str, char *to_find, int i)
{
  int	j;

  j = 0;
  while (str[i] != '\0' && to_find[j] == '\0')
    {
      if (str[i] =! to_find[j])
	{
	  return (0);
	}
      i = i + 1;
      j = j + 1;
    }
  return (1);
}
