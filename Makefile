##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Task01 of CPool Day10
##

SRC		=		main.c				\
				map.c				\
				server.c			\
				client.c			\
				game.c				\
				exchanges.c			\
				create_map.c		\
				display_map.c		\
				put_ship.c			\
				tools.c				\
				check_map.c			\
				check_size_ship.c	\
				win.c				\
				read_stock_ship.c

OBJ		=		$(SRC:.c=.o)

NAME	=		navy

all:	$(NAME) clean

$(NAME):	$(OBJ)
		(cd ./lib/my/ && make)
		gcc -o $(NAME) $(OBJ) -g3 -Llib/my/. -lmy

clean:
		@rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all clean

auteur:
		echo LuCas > Auteur
