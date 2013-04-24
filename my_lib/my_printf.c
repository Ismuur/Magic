/*
** var.c for var in /home/lambol_a//Cprog/Sem1/Systeme_UNIX/tp1
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Mon Nov 12 15:14:17 2012 aymeric lambolez
** Last update Fri Nov 16 18:29:31 2012 aymeric lambolez
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"

int	check_modif(char c)
{
  int	retour;

  retour = 0;
  if (c == 'd' || c == 'i' || c == 's' || c == 'c' || c == '\0')
    retour = 1;
  if (c == 'b' || c == '%' || c == 'S' || c == 'o' || c == 'x')
    retour = 1;
  if (c == 'X' || c == 'p')
    retour = 1;
  return (retour);
}

void		incr(int *i, int *compteur, const char *format)
{
  if (format[*i] >= 32 && format[*i] < 127)
    *compteur = *compteur + 1;
  my_putchar(format[*i]);
  *i = *i + 1;
}

int		recup_flag(char c, va_list ap, int compteur, char *base)
{
  if (c == 'd' || c == 'i')
    compteur = my_putnbr_count(va_arg(ap, int));
  else if (c == 's')
    compteur = my_putstr_count(va_arg(ap, char*));
  else if (c == 'c')
    compteur = my_putchar_count(va_arg(ap, int));
  else if (c == '\0')
    ;
  else if (c == 'b')
    compteur = my_putnbr_bin(va_arg(ap, int));
  else if (c == '%')
    compteur = my_putchar_count('%');
  else if (c == 'S')
    compteur = my_putstr_oct(va_arg(ap, char*));
  else if (c == 'o')
    compteur = my_putnbr_oct(va_arg(ap, int));
  else if (c == 'x')
    compteur = my_putunnbr_base(va_arg(ap, int), base);
  else if (c == 'X')
    compteur = my_putunnbr_base(va_arg(ap, int), "0123456789ABCDEF");
  else if (c == 'p')
    compteur = flag_p(va_arg(ap, unsigned int), base) + 2;
  return (compteur);
}

int		my_printf(const char *format, ...)
{
  int		i;
  va_list	ap;
  int		compt;

  i = 0;
  compt = 0;
  va_start(ap, format);
  while (format[i] != '\0')
    {
      if (format[i] != '%')
	incr(&i, &compt, format);
      else
	{
	  i++;
	  while (check_modif(format[i]) == 0)
	    i++;
	  compt = compt + recup_flag(format[i], ap, 0, "0123456789abcdef");
	  i += 1;
	}
    }
  va_end(ap);
  return (compt);
}
