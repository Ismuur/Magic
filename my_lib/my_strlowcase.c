/*
** strlowercase.c for str in /home/lambol_a//Cprog/Jour_06/ex_08
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Oct  8 20:21:33 2012 aymeric lambolez
** Last update Tue Oct  9 20:20:57 2012 aymeric lambolez
*/

char	*my_strlowcase(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 90)
        {
          str[i] = str[i] + 32;
        }
      i = i + 1;
    }
  return (str);
}
