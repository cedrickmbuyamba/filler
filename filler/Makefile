# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/09 12:12:37 by cmbuyamb          #+#    #+#              #
#    Updated: 2018/08/13 17:10:26 by cmbuyamb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler

SRC = filler.c\
	  game_algo.c\
	  get_game_board.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -Wall -Wextra -Werror $(OBJ) libft/libft.a -o $(NAME)

clean:
	/bin/rm -f $(OBJ)
	make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f libft/libft.a

re: fclean all
