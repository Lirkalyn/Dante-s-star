##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile solver
##

.PHONY	:	$(NAME) clean fclean re

SRC	=	main.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME) -Wall -Wextra

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f *~
#	clear

re:	fclean $(NAME)
