# src files in src folder are compiled and linked to create executable

# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -Wextra -std=c++11 -Iinclude

# Linker flags
LDFLAGS = -lncurses -lpthread

# Executable name
EXEC = bomberman

# Source files
SRC = $(wildcard src/*.cpp)

# Object files
OBJ = $(SRC:.cpp=.o)

# Compile and link
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

# Compile

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

# Clean
clean:
	rm -rf src/*.o

mrproper: clean
	rm -rf $(EXEC)