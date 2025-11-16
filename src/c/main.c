/**
 * Simple C program demonstrating command-line arguments.
 *
 * This program can be used to practice:
 * - Compiling and running C programs
 * - Using command-line arguments
 * - Debugging with GDB in VS Code
 * - Using Makefiles
 */

#include <stdio.h>
#include <string.h>

/**
 * Print a greeting message.
 *
 * @param name The name to greet (if NULL or empty, greets "World")
 */
void greet(const char* name) {
  if (name == NULL || strlen(name) == 0) {
    printf("Hello, World!\n");
  } else {
    printf("Hello, %s!\n", name);
  }
}

/**
 * Main entry point.
 *
 * @param argc Number of command-line arguments
 * @param argv Array of command-line argument strings
 * @return Exit code (0 for success)
 */
int main(int argc, char* argv[]) {
  printf("=== C Greeting Program ===\n\n");

  // Display command-line arguments
  printf("Program: %s\n", argv[0]);
  printf("Number of arguments: %d\n\n", argc - 1);

  if (argc > 1) {
    // Greet each command-line argument
    printf("Greetings:\n");
    for (int i = 1; i < argc; i++) {
      printf("  %d. ", i);
      greet(argv[i]);
    }
  } else {
    // No arguments provided
    printf("No names provided. Usage: %s [name1] [name2] ...\n\n", argv[0]);
    greet(NULL);
  }

  return 0;
}
