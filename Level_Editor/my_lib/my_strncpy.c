/*
** my_strncpy.c for str in /home/lambol_a/Cprog/Jour_06
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Oct  8 09:54:38 2012 aymeric lambolez
** Last update Tue Oct  9 20:22:09 2012 aymeric lambolez
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  if (src[i] == '\0')
    {
      dest[i] = '\0';
    }
  return (dest);
}
