##
## Makefile for allum1 in /home/lambol_a//Cprog/Sem2/C_Elem/alum1
## 
## Made by aymeric lambolez
## Login   <lambol_a@epitech.net>
## 
## Started on  Mon Feb  4 13:36:43 2013 aymeric lambolez
## Last update Wed Apr 24 10:17:42 2013 aymeric lambolez
##

SRC	=	main.c\
		init.c\
		event.c\
		draw.c\
		map.c

OBJ	=	$(SRC:.c=.o)

NAME	=	test

RM	=	rm -f

CC	=	gcc

CFLAG	=	-Wall -Werror -Wextra -ansi -pedantic

LIBS	=	libmy.a -lSDL -lSDLmain

all:		$(NAME)

$(NAME):	$(OBJ)
	cd my_lib && $(MAKE) re
	$(CC) -o $(NAME) $(OBJ) $(LIBS) $(CFLAG)

libclean:
	cd my_lib && $(MAKE) clean

libfclean:
	cd my_lib && $(MAKE) fclean

lib:	
	cd my_lib && $(MAKE)

libre:	
	cd my_lib && $(MAKE) re

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re