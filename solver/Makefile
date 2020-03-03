##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile solver
##

SRC	=	main.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

all:	$(OBJ)
	ar rc libmy.a $(OBJ)
	gcc -o $(NAME) -L. -lmy -Wall -Wextra

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f libmy.a
	@rm -f *~
	clear

re:	fclean all
