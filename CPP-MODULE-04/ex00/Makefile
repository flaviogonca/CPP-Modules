# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/09 17:49:46 by fmalungo          #+#    #+#              #
#    Updated: 2025/06/09 17:54:50 by fmalungo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fmalungo

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp ./Animal.cpp ./Dog.cpp ./Cat.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
