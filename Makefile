# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julin <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/16 16:34:39 by julin             #+#    #+#              #
#    Updated: 2017/12/23 10:29:28 by julin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = ft_check_block.c \
	  ft_check_format.c \
	  ft_convert.c \
	  ft_fillit.c \
	  ft_grow_all_shape.c \
	  ft_read.c \
	  ft_solve.c \
	  ft_insert_char.c \
	  ft_putstr.c \
	  ft_strcmp.c \
	  ft_strlen.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strcat.c
SRCS = $(addprefix srcs/,$(SRC))
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = @gcc


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
