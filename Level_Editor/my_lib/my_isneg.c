/*
** my_isneg.c for Exo4 in /home/lambol_a//Cprog/Jour_03
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Wed Oct  3 13:31:54 2012 aymeric lambolez
** Last update Wed Oct  3 20:20:19 2012 aymeric lambolez
*/

int	my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
  return (1);
}
