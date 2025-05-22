# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 17:11:46 by fmalungo          #+#    #+#              #
#    Updated: 2025/05/21 17:19:54 by fmalungo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  a.out

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp ./Fixed.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
