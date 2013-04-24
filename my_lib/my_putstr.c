/*
** my_putstr.c for exo2 in /home/lambol_a//Cprog/Jour_04
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Thu Oct  4 10:20:57 2012 aymeric lambolez
** Last update Thu Nov  1 15:10:57 2012 aymeric lambolez
*/

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

void	my_putstrln(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  my_putchar('\n');
}
