/*
** my_getnbrtest.c for str in /home/lambol_a//Cprog/Jour_04
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Tue Oct  9 09:35:47 2012 aymeric lambolez
** Last update Mon Dec  3 12:20:53 2012 aymeric lambolez
*/

int		overflow(double nb)
{
  if (nb <= 2147483647 && nb >= -2147483648)
    {
      return ((int) nb);
    }
  return (0);
}

int		my_getnbr(char *str)
{
  int		i;
  int		nb;
  int		mult;
  double	x;

  i = my_strlen(str) - 1;
  nb = 0;
  mult = 1;
  if (str[0] == 48)
    return (0);
  while (i >= 0 && str[i] >= 48 && str[i] <= 57)
    {
      nb = nb + ((str[i] - 48) * mult );
      mult = mult * 10;
      i = i - 1;
    }
  x = nb * signe(str);
  return (overflow(x));
}

int		signe(char *str)
{
  int		i;
  int		signe;

  i = 0;
  signe = 1;
  while (str[i] == 43 || str[i] == 45)
    {
      if (str[i] == 45)
	{
	  signe = signe * -1;
	}
      i = i + 1;
    }
  return (signe);
}
