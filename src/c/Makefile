# Makefile for C programs

CC = gcc
CFLAGS = -Wall -Wextra -g -std=c99
LDFLAGS = -lm

# Targets
TARGETS = hello_world calculator
TEST_TARGET = test_calculator

.PHONY: all clean test

# Build all programs
all: $(TARGETS)

# Build hello_world
hello_world: hello_world.c
	$(CC) $(CFLAGS) $< -o $@

# Build calculator
calculator: calculator.c calculator_lib.c
	$(CC) $(CFLAGS) calculator.c calculator_lib.c -o $@ $(LDFLAGS)

# Build and run tests
test: $(TEST_TARGET)
	./$(TEST_TARGET)

# Build test executable
$(TEST_TARGET): tests/test_calculator.c calculator_lib.c calculator.h
	$(CC) $(CFLAGS) tests/test_calculator.c calculator_lib.c -o $@ $(LDFLAGS)

# Clean build artifacts
clean:
	rm -f $(TARGETS) $(TEST_TARGET) *.o

# Help target
help:
	@echo "Available targets:"
	@echo "  all        - Build all programs (default)"
	@echo "  clean      - Remove build artifacts"
	@echo "  test       - Build and run tests"
	@echo "  hello_world - Build hello_world program"
	@echo "  calculator - Build calculator program"
	@echo "  help       - Show this help message"
