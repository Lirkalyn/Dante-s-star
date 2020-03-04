##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile solver
##

.PHONY	:	$(NAME) clean fclean re

SRC	=	main.c	\
		my_show_word_array.c \
		my_str_to_word_array.c \
		filler.c \
		pledge.c

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME) -Wall -Wextra

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f *~
#	clear

re:	fclean $(NAME)
