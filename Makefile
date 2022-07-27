##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## for BSQ
##

NAME	=	bsq

SRC	=	sources/*.c

OBJ	=	$(SRC:.c=.o)

all:
	gcc -o $(NAME) $(SRC)

clean :
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
