/*
** my_strcpy.c for str in /home/lambol_a//Cprog/Jour_06
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Oct  8 09:17:46 2012 aymeric lambolez
** Last update Mon Oct  8 09:50:14 2012 aymeric lambolez
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
