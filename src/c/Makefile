# Makefile for C greeting program
#
# Targets:
#   make        - Build the program (default)
#   make run    - Build and run the program
#   make clean  - Remove build artifacts
#   make debug  - Build with extra debug information

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
TARGET = main
SOURCE = main.c

# Default target: build the program
all: $(TARGET)

# Build the executable
$(TARGET): $(SOURCE)
	@echo "Compiling $(SOURCE)..."
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)
	@echo "Build complete: $(TARGET)"

# Run the program with example arguments
run: $(TARGET)
	@echo "Running $(TARGET)..."
	@echo ""
	./$(TARGET) Alice Bob Charlie

# Build with extra debug information
debug: CFLAGS += -O0 -DDEBUG
debug: clean $(TARGET)

# Clean build artifacts
clean:
	@echo "Cleaning build artifacts..."
	rm -f $(TARGET) *.o *.out
	@echo "Clean complete"

# Phony targets (not actual files)
.PHONY: all run clean debug
