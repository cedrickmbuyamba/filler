# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/07 09:29:28 by cmbuyamb          #+#    #+#              #
#    Updated: 2018/08/07 09:29:34 by cmbuyamb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -c

FILES = ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strdup.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_strcat.c\
		ft_strncat.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strstr.c\
		ft_strnstr.c\
		ft_strcmp.c\
		ft_strncmp.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_atoi.c\
		ft_memmove.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putendl.c\
		ft_putnbr.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_itoa.c\
		ft_strsplit.c\
		ft_lstadd.c\
		ft_lstdel.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_lstnew.c\
		ft_max.c\
		ft_putnchr.c\
		ft_chrposition.c\
		ft_putnstr.c\
		ft_min.c\
		ft_cpyuntil.c\
		ft_strjoinchr.c\
		ft_countwords.c\
		get_next_line.c\

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME):
		gcc $(CFLAGS) $(FILES)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(OBJ)
	/bin/rm -f $(NAME)

re: fclean all
