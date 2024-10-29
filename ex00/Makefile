CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FSAN = -fsanitize=address

INCL_DIR = -I.

SRC = $(wildcard *.cpp)
INCL = $(wildcard *.hpp) $(wildcard *.h)
EXE = zombie

all : $(EXE)

$(EXE) : $(INCL) $(SRC)
	$(CC) $(CFLAGS) $(INCL_DIR) $(SRC) -o $@

fsan :
	$(CC) $(CFLAGS) $(INCL_DIR) $(FSAN) $(SRC) -o $(EXE)

clean :
	rm -rf $(EXE)

re : clean all

.PHONY : all clean
