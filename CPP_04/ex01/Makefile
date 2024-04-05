# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yusman <yusman@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 03:18:16 by yusman            #+#    #+#              #
#    Updated: 2024/04/05 04:39:24 by yusman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

RM = rm -f

%.o : %.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
