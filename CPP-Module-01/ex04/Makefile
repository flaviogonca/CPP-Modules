# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/13 09:16:27 by fmalungo          #+#    #+#              #
#    Updated: 2025/05/13 09:16:42 by fmalungo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = replacer

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
