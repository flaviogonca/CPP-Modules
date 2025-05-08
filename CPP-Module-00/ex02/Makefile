# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 08:48:49 by fmalungo          #+#    #+#              #
#    Updated: 2025/05/07 08:48:52 by fmalungo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = GlobalBanksters

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./tests.cpp  Account.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
