# C Starter Project

This folder contains beginner-friendly C examples aligned with CS50 basics.

## 📁 Files

- **hello.c** - Your first C program with basic I/O
- **functions.c** - Working with functions, parameters, and return values
- **arrays.c** - Arrays, strings, and multi-dimensional arrays
- **Makefile** - Build configuration for compiling C programs

## 🚀 Building and Running

### Using Make (Recommended)

```bash
# Build all programs
make

# Build a specific program
make hello
make functions
make arrays

# Run a program
./hello
./functions
./arrays

# Clean up compiled files
make clean

# Build and run all programs
make run-all

# See all available commands
make help
```

### Manual Compilation

```bash
# Compile hello.c
gcc -Wall -Wextra -std=c11 -o hello hello.c

# Run the compiled program
./hello
```

### Using VS Code

1. **Open a C file**
2. **Press Ctrl+Shift+B** (or Cmd+Shift+B on Mac) to build
3. **Press F5** to build and debug

## 🐛 Debugging

To debug any of these programs:

1. **Build the program** with debugging symbols (already included in Makefile)
2. **Set a breakpoint** by clicking in the left margin (gutter) next to a line number
3. **Press F5** or go to Run → Start Debugging
4. **Use the debug controls**:
   - Step Over (F10) - Execute the current line
   - Step Into (F11) - Go into function calls
   - Step Out (Shift+F11) - Return from current function
   - Continue (F5) - Run until next breakpoint
5. **Inspect variables** in the Variables pane or by hovering over them

## 💡 Learning Exercises

Try these modifications to practice:

### hello.c
- [ ] Add code to ask for the user's age and calculate birth year
- [ ] Use a loop to greet multiple users
- [ ] Add error checking for input validation

### functions.c
- [ ] Create a function to multiply two numbers
- [ ] Add a function to find the minimum value in an array
- [ ] Implement a function that checks if a number is even or odd

### arrays.c
- [ ] Write a function to reverse an array
- [ ] Implement a function to search for a value in an array
- [ ] Create a function to sort an array in ascending order

## 🔧 Compiler Flags Explained

The Makefile uses these compiler flags:
- `-Wall` - Enable all warning messages
- `-Wextra` - Enable extra warning messages
- `-std=c11` - Use C11 standard
- `-g` - Include debugging information

## 📚 Additional Resources

- [CS50 C Documentation](https://manual.cs50.io/)
- [C Programming Language](https://en.wikipedia.org/wiki/C_(programming_language))
- [Learn C](https://www.learn-c.org/)

## 🎯 Next Steps

After mastering these basics:
1. Learn about pointers and memory management
2. Explore structures and unions
3. Work with files and file I/O
4. Understand dynamic memory allocation
5. Build a small project (calculator, text processor, etc.)
