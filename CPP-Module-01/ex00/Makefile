# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 08:27:16 by fmalungo          #+#    #+#              #
#    Updated: 2025/05/09 08:27:18 by fmalungo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = App

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp ./Zombie.cpp ./newZombie.cpp ./randomChump.cpp

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
