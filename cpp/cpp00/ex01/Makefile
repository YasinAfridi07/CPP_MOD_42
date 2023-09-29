NAME = phonebook

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = phonebook.cpp
OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean: 
	rm -f $(OBJ)

fclean: 
	rm -f $(OBJ) $(NAME) 

re: fclean all