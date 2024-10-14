# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 11:06:34 by pyarova           #+#    #+#              #
#    Updated: 2024/10/08 11:43:33 by pyarova          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_display_file.c 
OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
