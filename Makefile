##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile solver
##

GEN	=	make -C generator/Makefile

SOLVE	=	make -C solver/Makefile

all:	$(GEN) $(SOLVE)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f *~
	clear

re:	fclean all
