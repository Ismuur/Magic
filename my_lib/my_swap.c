/*
** my_swap.c for exo1 in /home/lambol_a//Cprog/Jour_04
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Thu Oct  4 10:03:38 2012 aymeric lambolez
** Last update Tue Oct  9 20:23:19 2012 aymeric lambolez
*/

int	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
  return (1);
}
