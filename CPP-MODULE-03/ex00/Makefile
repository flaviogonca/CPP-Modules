# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/30 12:01:00 by fmalungo          #+#    #+#              #
#    Updated: 2025/05/30 12:01:02 by fmalungo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Aaaaand...

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror

SRC = ./main.cpp ./ClapTrap.cpp

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
