/*
** my.h for lib in /home/lambol_a//Cprog/my_lib
** 
** Made by aymeric lambolez
** Login   <lambol_a@epitech.net>
** 
** Started on  Fri Oct 12 18:52:31 2012 aymeric lambolez
** Last update Thu Nov 22 08:28:03 2012 aymeric lambolez
*/

#ifndef MY_H_
# define MY_H_

int	my_isneg(int n);
int	my_power_rec(int nb, int power);
void	my_putchar(char c);
void	my_putnbr(int nb);
void	my_putstr(char *str);
char	*my_revstr(char *str);
int	my_square_root(int nb);
char	*my_capitalize(char *str);
char	*my_strcat(char *dest, char *src);
int	my_strcmp(char *s1, char *s2);
char	*my_strcpy(char *dest, char *src);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_isprintable(char *str);
int	my_str_islower(char *str);
int	my_strlen(char *str);
char	*my_strlowcase(char *str);
int	my_str_islower(char *str);
char	*my_strncat(char *dest, char *src, int nb);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strstr(char *str, char *to_find);
char	**my_str_to_wordtab(char *str);
char	*my_strupcase(char *str);
int	my_swap(int *a, int *b);
void	my_putchar(char);
int	my_convert_oct(int);
int	my_putstr_oct(char*);
int	my_putstr_count(char*);
int	my_putnbr_bin(int);
int	my_putnbr_count(int);
int	my_putnbr_oct(int);
int	my_putunnbr_base(unsigned int, char*);
int	my_putchar_count(char);
int	flag_p(unsigned int, char*);

#endif /* !MY_H_ */
