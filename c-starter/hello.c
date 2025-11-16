/**
 * hello.c - Basic C Starter
 * 
 * This is your first C program! It demonstrates:
 * - Main function
 * - Printf statements
 * - Variables
 * - User input with scanf
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    // Print a simple message
    printf("Hello, World!\n");
    
    // Declare a variable
    char name[50];
    
    // Get user input
    printf("What's your name? ");
    scanf("%49s", name);  // Read up to 49 characters (leave room for null terminator)
    
    // Print a personalized greeting
    printf("Hello, %s!\n", name);
    printf("Nice to meet you, %s!\n", name);
    
    return 0;
}
