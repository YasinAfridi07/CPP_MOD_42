NAME = megaphone

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

ALL = $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean: 
	rm -f $(OBJ)

fclean: 
	rm -f $(OBJ) $(NAME) 

re: fclean all

