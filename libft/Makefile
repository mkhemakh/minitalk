# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/16 16:44:25 by mkhemakh          #+#    #+#              #
#    Updated: 2019/12/31 18:01:59 by mkhemakh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c \
	ft_strlen.c ft_strdup.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
	ft_strlcpy.c ft_strncmp.c ft_atoi.c \
	ft_capitalize.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c \
	ft_strmapi.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_print_words.c ft_strrev.c ft_split_whitespaces.c ft_sort_table.c \
	ft_putnbr.c ft_strcpy.c ft_strmap.c ft_strnew.c \
	ft_striteri.c ft_strequ.c \
	ft_striter.c ft_putstr.c ft_putchar.c ft_strcat.c \
	ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c \
	ft_lstnew.c ft_lstmap.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

OPTION = -c

$(NAME) : ${OBJ} 
	@gcc $(FLAGS) $(OPTION) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all : ${NAME}

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all bonus
