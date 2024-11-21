CC = g++
CFLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98

SRC_DIR = .
OBJ_DIR = obj
INC_DIR = -I.

SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
INC = $(wildcard $(INC_DIR)/*.hpp) $(wildcard $(INC_DIR)/*.h)
EXE = Harl

all: $(EXE)

$(EXE): $(OBJ) $(INC)
	$(CC) $(CFLAGS) $(INC_DIR) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INC_DIR) -c $< -o $@

valgrind: $(EXE)
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(EXE)

fsan: $(EXE)
	$(CC) $(CFLAGS) -fsanitize=address $(INC_DIR) $(SRC) -o $^

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(EXE)

re: fclean all

.PHONY: all valgrind clean fclean re
