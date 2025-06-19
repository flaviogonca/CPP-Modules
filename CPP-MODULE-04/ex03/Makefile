# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/19 19:40:12 by fmalungo          #+#    #+#              #
#    Updated: 2025/06/19 19:40:13 by fmalungo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fmalungo

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror

SRC = ./main.cpp ./AMateria.cpp

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
