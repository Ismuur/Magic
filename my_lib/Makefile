##
## Makefile for Makefile in /home/lambol_a//Cprog/my_lib
## 
## Made by aymeric lambolez
## Login   <lambol_a@epitech.net>
## 
## Started on  Mon Oct 22 10:17:29 2012 aymeric lambolez
## Last update Fri Mar 29 09:31:10 2013 aymeric lambolez
##

RM	=	rm -f

SRC	=	my_getnbr.c \
		my_isneg.c \
		my_power_rec.c \
		my_putchar.c \
		my_put_nbr.c \
		my_putstr.c \
		my_revstr.c \
		my_square_root.c \
		my_strcapitalize.c \
		my_strcat.c \
		my_strcmp.c \
		my_strcpy.c \
		my_str_isalpha.c \
		my_str_isnum.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_strlen.c \
		my_strlowcase.c \
		my_str_lower.c \
		my_strncat.c \
		my_strncmp.c \
		my_strncpy.c \
		my_strstr.c \
		my_strupcase.c \
		my_swap.c\
		my_printf.c\
		my_putchar_count.c\
		my_putnbr_base.c\
		my_putnbr_bin.c\
		my_putnbr_count.c\
		my_putnbr_oct.c\
		my_putstr_count.c\
		my_strdup.c\
		my_perror.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all
