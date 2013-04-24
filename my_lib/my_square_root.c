/*
** my_square_root.c for square_root in /home/lambol_a//Cprog/divers
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Sun Oct  7 18:00:56 2012 aymeric lambolez
** Last update Tue Oct  9 20:14:09 2012 aymeric lambolez
*/

int	my_square_root(int nb)
{
  int	i = nb / 2;

  while (i >= 0)
    {
      if (nb == i * i)
	{
	  return (i);
	}
      else
      i = i - 1;
    }
  return (0);
}
