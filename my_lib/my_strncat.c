/*
** my_strcat.c for str in /home/lambol_a//Cprog/Jour_07
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Tue Oct  9 13:23:11 2012 aymeric lambolez
** Last update Tue Oct  9 18:12:19 2012 aymeric lambolez
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  i = 0;
  j = my_strlen(dest);
  while (src[i] != '\0' && nb > 0)
    {
      dest[j] = src[i];
      j = j + 1;
      i = i + 1;
      nb = nb - 1;
    }
  return (dest);
}
