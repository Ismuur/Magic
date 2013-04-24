/*
** my_put_nbr.c for exo7 in /home/lambol_a//Cprog/Jour_03
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Thu Oct  4 20:12:02 2012 aymeric lambolez
** Last update Sun Mar  3 15:55:23 2013 aymeric lambolez
*/

void	my_putnbr(int nb)
{
  int	i;

  i  = 1;
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  while ((nb / i) > 9)
    {
      i = i * 10;
    }
  while (i > 0)
    {
      my_putchar((nb / i) % 10 + 48);
      i = i / 10;
    }
}
