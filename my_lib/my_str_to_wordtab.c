/*
** my_str_to_wordtab.c for str in /home/lambol_a//Cprog/Jour_08/ex_04
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Thu Oct 11 20:37:43 2012 aymeric lambolez
** Last update Fri Oct 12 09:27:13 2012 aymeric lambolez
*/

#include <stdlib.h>

void	incr(int *i, int *k)
{
  *i = *i + 1;
  *k = *k + 1;
}

char	**remplir_tab(char *tab[], char *t, int word, int k)
{
  int	i;
  int	j;

  i = 0;
  while (t[i] != '\0')
    {
      if (t[i] < 65 || t[i] > 90 && t[i] < 97 || t[i] > 122 || t[i + 1] == '\0')
	{
	  tab[word] = malloc(i - k);
	  j = 0;
	  if (t[i + 1] == '\0')
	    {
	      i = i + 1;
	    }
	  while (k != i)
	    {
	      tab[word][j] = t[k];
	      incr(&j, &k);
	    }
	  incr(&k, &word);
	}
      i = i + 1;
    }
  tab[word + 1] = 0;
  return (tab);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	i;
  int	nb_w;
  int	word;
  int k;

  k = 0;
  word = 0;
  nb_w = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
	{
	      nb_w = nb_w + 1;
	}
      i = i + 1;
    }
  tab = malloc(nb_w + 1);
  remplir_tab(tab, str, word, k);
}

int	main()
{
  char	c[] = "Je ne pense,pas*que!je vais_beaucoup-dormir";

  my_str_to_wordtab(c);
  return (0);
}
