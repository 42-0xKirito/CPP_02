NAME	= Fixed02

SRC		= $(wildcard *.cpp) $(wildcard src/*.cpp)
INCLUDE	= $(wildcard *.hpp) $(wildcard includes/*.hpp)

OBJ_DIR	= obj
OBJ		= $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRC))

CXX		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/src

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(INCLUDE) | $(OBJ_DIR)
	$(CXX) $(CFLAGS) -c $< -o $@ -I includes

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
