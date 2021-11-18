# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: mkhemakh <mkhemakh@student.42.fr>          +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/08/27 11:27:33 by mkhemakh          #+#    #+#             #
#   Updated: 2021/08/30 14:15:16 by mkhemakh         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME	= server

NAME2	= client

SRC		= server.c ft_straddc.c

SRC2	= client.c

OBJ		= $(SRC:.c=.o)

OBJ2	= $(SRC2:.c=.o)

FLAGS	= -Wall -Werror -Wextra

LIBFT	= libft/

LIBFT_H	= libft/

.PHONY: clean fclean re all

all: $(NAME) $(NAME2)

$(NAME): minitalk.h
	make -C $(LIBFT)
	gcc $(FLAGS) -c $(SRC) -I $(LIBFT)
	gcc -o $(NAME) $(OBJ) -L $(LIBFT_H) -lft -O3

$(NAME2): minitalk.h
	make -C $(LIBFT)
	gcc $(FLAGS) -c $(SRC2) -I $(LIBFT)
	gcc -o $(NAME2) $(OBJ2) -L $(LIBFT_H) -lft -O3

clean:
	@make -C $(LIBFT_H) clean
	rm -f $(OBJ)
	rm -f $(OBJ2)

fclean: clean
	@make -C $(LIBFT_H) fclean
	rm -f $(NAME)
	rm -f $(NAME2)

bonus: all

re: fclean all
