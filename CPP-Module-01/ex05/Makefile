# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 16:51:57 by fmalungo          #+#    #+#              #
#    Updated: 2025/05/14 16:51:59 by fmalungo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl2.0

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp ./Harl.cpp

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
