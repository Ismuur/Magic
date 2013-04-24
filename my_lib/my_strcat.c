/*
** my_strcat.c for str in /home/lambol_a//Cprog/Jour_07
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Tue Oct  9 13:23:11 2012 aymeric lambolez
** Last update Tue Oct  9 18:11:47 2012 aymeric lambolez
*/
char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[j] = src[i];
      j = j + 1;
      i = i + 1;
    }
  return (dest);
}
