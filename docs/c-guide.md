# C Programming Guide

This guide introduces C programming concepts through practical examples.

## What You'll Learn

- C basics: syntax, data types, pointers
- Memory management
- Compilation and linking
- Building with Make
- Unit testing in C

## Prerequisites

- Complete the [Getting Started](getting-started.md) guide
- Basic understanding of programming concepts
- Familiarity with the command line

## Why Learn C?

C is a foundational language that:
- Provides low-level control over system resources
- Powers operating systems, embedded systems, and performance-critical applications
- Helps understand how computers work at a fundamental level
- Forms the basis for many other languages

## C Basics

### Hello World

The classic first C program:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

Key components:
- `#include <stdio.h>`: Include standard I/O library
- `int main()`: Entry point of the program
- `printf()`: Output function
- `return 0`: Exit status (0 = success)

### Compilation

```bash
cd src/c

# Compile a single file
gcc hello_world.c -o hello_world

# Run the program
./hello_world

# Or use the Makefile
make
./hello_world
```

## Data Types

### Basic Types

```c
int age = 25;              // Integer
float price = 19.99;       // Floating-point
double pi = 3.14159265;    // Double precision
char grade = 'A';          // Character
char name[] = "Alice";     // String (char array)
```

### Type Sizes

```c
#include <stdio.h>

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));
    return 0;
}
```

## Pointers

Pointers are variables that store memory addresses:

```c
int x = 42;
int *ptr = &x;  // ptr stores the address of x

printf("Value of x: %d\n", x);
printf("Address of x: %p\n", (void*)&x);
printf("Value of ptr: %p\n", (void*)ptr);
printf("Value pointed to by ptr: %d\n", *ptr);
```

### Why Pointers?

- Efficient array handling
- Dynamic memory allocation
- Pass by reference to functions
- Build complex data structures

## Functions

```c
#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int result = add(5, 3);
    printf("5 + 3 = %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

### Pass by Value vs Pass by Reference

```c
// Pass by value (copies the value)
void increment_by_value(int x) {
    x = x + 1;  // Only modifies local copy
}

// Pass by reference (modifies original)
void increment_by_reference(int *x) {
    *x = *x + 1;  // Modifies value at address
}

int main() {
    int num = 5;
    
    increment_by_value(num);
    printf("After pass by value: %d\n", num);  // Still 5
    
    increment_by_reference(&num);
    printf("After pass by reference: %d\n", num);  // Now 6
    
    return 0;
}
```

## Memory Management

### Stack vs Heap

```c
#include <stdlib.h>

int main() {
    // Stack allocation (automatic)
    int stack_array[10];  // Fixed size, automatically freed
    
    // Heap allocation (manual)
    int *heap_array = (int*)malloc(10 * sizeof(int));
    if (heap_array == NULL) {
        // Handle allocation failure
        return 1;
    }
    
    // Use the array
    heap_array[0] = 42;
    
    // IMPORTANT: Free heap memory when done!
    free(heap_array);
    
    return 0;
}
```

### Memory Safety Rules

1. Always check if `malloc()` returns NULL
2. Free dynamically allocated memory
3. Don't access memory after freeing it
4. Don't access beyond array bounds
5. Initialize pointers before use

## Calculator Example

The calculator example demonstrates:
- Function organization
- Header files
- Modular design

Explore the code:

```bash
cd src/c
cat calculator.c
cat calculator.h
make
./calculator
```

## Building with Make

The `Makefile` automates compilation:

```makefile
# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Build all programs
all: hello_world calculator

# Build individual programs
hello_world: hello_world.c
	$(CC) $(CFLAGS) hello_world.c -o hello_world

calculator: calculator.c
	$(CC) $(CFLAGS) calculator.c -o calculator

# Run tests
test: all
	./tests/run_tests.sh

# Clean build artifacts
clean:
	rm -f hello_world calculator *.o

.PHONY: all test clean
```

Usage:
```bash
make           # Build all
make clean     # Remove build artifacts
make test      # Run tests
```

## Unit Testing in C

C doesn't have a built-in testing framework like Python's pytest, but we can create simple test functions:

```c
#include <stdio.h>
#include <assert.h>
#include "calculator.h"

void test_add() {
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    printf("✓ test_add passed\n");
}

void test_subtract() {
    assert(subtract(5, 3) == 2);
    assert(subtract(0, 5) == -5);
    printf("✓ test_subtract passed\n");
}

int main() {
    printf("Running tests...\n");
    test_add();
    test_subtract();
    printf("All tests passed!\n");
    return 0;
}
```

## Common Pitfalls

### Buffer Overflow

❌ Dangerous:
```c
char buffer[10];
strcpy(buffer, "This is too long!");  // Overflow!
```

✅ Safe:
```c
char buffer[20];
strncpy(buffer, "This fits", sizeof(buffer) - 1);
buffer[sizeof(buffer) - 1] = '\0';
```

### Memory Leaks

❌ Leak:
```c
int *ptr = malloc(sizeof(int));
// Forgot to free!
```

✅ Correct:
```c
int *ptr = malloc(sizeof(int));
if (ptr != NULL) {
    *ptr = 42;
    free(ptr);
}
```

### Uninitialized Variables

❌ Dangerous:
```c
int x;
printf("%d\n", x);  // Undefined behavior!
```

✅ Safe:
```c
int x = 0;  // Always initialize
printf("%d\n", x);
```

## Best Practices

1. **Initialize variables**: Always initialize before use
2. **Check return values**: Especially for `malloc()`, file operations
3. **Use const**: Make pointers const when data shouldn't be modified
4. **Free memory**: Match every `malloc()` with a `free()`
5. **Compile with warnings**: Use `-Wall -Wextra` flags
6. **Use meaningful names**: Avoid single-letter variables (except loop counters)

## Debugging with GDB

```bash
# Compile with debug symbols
gcc -g program.c -o program

# Run with gdb
gdb ./program

# Common GDB commands
(gdb) break main          # Set breakpoint at main
(gdb) run                 # Start program
(gdb) next                # Execute next line
(gdb) step                # Step into function
(gdb) print variable      # Print variable value
(gdb) continue            # Continue execution
(gdb) quit                # Exit gdb
```

## Exercises

1. Modify `calculator.c` to add multiplication and division functions
2. Add tests for your new functions
3. Write a program that uses dynamic memory allocation
4. Create a linked list implementation

## Additional Resources

- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) (K&R Book)
- [Learn C](https://www.learn-c.org/)
- [C Reference](https://en.cppreference.com/w/c)
- [GDB Tutorial](https://www.cs.cmu.edu/~gilpin/tutorial/)

## Next Steps

- Learn about [Testing Best Practices](testing-guide.md)
- Review [Contributing Guidelines](../CONTRIBUTING.md)
- Start building your own projects!
