NAME	= Fixed

SRC		= $(wildcard *.cpp) $(wildcard src/*.cpp)

INCLUDE	= $(wildcard *.hpp) $(wildcard includes/*.hpp)

OBJ		= $(SRC:.cpp=.o)

CXX		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INCLUDE)
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re