##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile solver
##

.PHONY	:	all clean fclean re

GEN				=	make -C generator
GEN_clean		=	make clean -C generator
GEN_fclean		=	make fclean -C generator

SOLVE			=	make -C solver
SOLVE_clean		=	make clean -C solver
SOLVE_fclean	=	make fclean -C solver

all:
	$(GEN)
	$(SOLVE)

clean:
	$(GEN_clean)
	$(SOLVE_clean)

fclean: clean
	$(GEN_fclean)
	$(SOLVE_fclean)
#	clear

re:	fclean all
