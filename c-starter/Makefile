# Makefile for C Starter Project

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11 -g

# Target executables
TARGETS = hello functions arrays

# Default target - build all programs
all: $(TARGETS)

# Build hello
hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c

# Build functions
functions: functions.c
	$(CC) $(CFLAGS) -o functions functions.c

# Build arrays
arrays: arrays.c
	$(CC) $(CFLAGS) -o arrays arrays.c

# Clean up compiled files
clean:
	rm -f $(TARGETS)

# Run all programs
run-all: all
	@echo "=== Running hello ==="
	@echo ""
	@./hello
	@echo ""
	@echo "=== Running functions ==="
	@./functions
	@echo ""
	@echo "=== Running arrays ==="
	@./arrays

# Help target
help:
	@echo "Available targets:"
	@echo "  make          - Build all programs"
	@echo "  make hello    - Build hello program"
	@echo "  make functions - Build functions program"
	@echo "  make arrays   - Build arrays program"
	@echo "  make clean    - Remove compiled files"
	@echo "  make run-all  - Build and run all programs"
	@echo "  make help     - Show this help message"

.PHONY: all clean run-all help
