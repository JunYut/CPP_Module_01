CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FSAN = -fsanitize=address

OBJ_DIR = obj
INCL_DIR = -I.

SRC = $(wildcard *.cpp)
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
INCL = $(wildcard *.hpp) $(wildcard *.h)
EXE = zombieHorde

all : $(EXE)

$(EXE) : $(OBJ)
	$(CC) $(CFLAGS) $(INCL_DIR) $(OBJ) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

fsan :
	$(CC) $(CFLAGS) $(INCL_DIR) $(FSAN) $(SRC) -o $(EXE)

valgrind :
	valgrind --leak-check=full --track-origins=yes --log-file=valgrind-out.txt ./zombieHorde

clean :
	rm -rf $(EXE)

re : clean all

.PHONY : all clean
