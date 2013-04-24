/*
** my_getnbr_base.c for getnbr_base in /home/lambol_a//Cprog/Sem1/Math/102chiffrement
**
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
**
** Started on  Fri Mar 29 14:09:26 2013 aymeric lambolez
** Last update Fri Mar 29 14:12:07 2013 aymeric lambolez
*/

#include <stdlib.h>
#include <unistd.h>

char             *my_getnbr_base(unsigned int nb, char *str)
{
  unsigned int  mult;
  int           size;
  int           compteur;
  unsigned int  result;
  char          *resultat;

  if (my_strlen(str) < 2)
    {
      my_printf("Erreur : Base non valide\n");
      exit(0);
    }
  if (nb < 0)
    nb *= -1;
  if ((double)nb > 2147483647)
    {
      my_printf("Erreur : Overflow\n");
      exit(0);
    }
  if (nb == 0)
    return (" ");
  mult = 1;
  compteur = 0;
  size = my_strlen(str);
  result = nb;
  while (mult <= nb)
    {
      mult *= size;
      compteur++;
    }
  resultat = malloc(compteur);
  if (resultat == NULL)
    return;
  mult /= size;
  compteur = 0;
  while (mult != 1)
    {
      result = nb;
      result /= mult;
      resultat[compteur] = str[result % size];
      mult /= size;
      compteur++;
    }
  resultat[compteur] = str[nb % size];
  return (resultat);
}
