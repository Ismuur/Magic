/*
** my_power_rec.c for exo4 in /home/lambol_a//Cprog/Jour_05
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Fri Oct  5 16:20:24 2012 aymeric lambolez
** Last update Mon Oct  8 08:25:10 2012 aymeric lambolez
*/

int	my_power_rec(int nb, int power)
{
  if (power > 1)
    {
      nb = nb * my_power_rec(nb, power - 1);
      return (nb);
    }
  if (power == 1)
    {
      return (nb);
    }
  if (power == 0)
    {
      return (1);
    }
}
