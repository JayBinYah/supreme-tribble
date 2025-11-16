/**
 * functions.c - Working with Functions in C
 * 
 * This program demonstrates:
 * - Function declarations and definitions
 * - Parameters and return values
 * - Function prototypes
 * - Basic data types
 */

#include <stdio.h>

// Function prototypes (declarations)
void greet(char *name);
int add(int a, int b);
float calculate_average(int numbers[], int count);

int main(void)
{
    // Test greet function
    greet("Alice");
    
    // Test add function
    int sum = add(5, 3);
    printf("5 + 3 = %d\n", sum);
    
    // Test calculate_average function
    int scores[] = {85, 92, 78, 90, 88};
    int count = sizeof(scores) / sizeof(scores[0]);
    float avg = calculate_average(scores, count);
    printf("Average score: %.2f\n", avg);
    
    return 0;
}

/**
 * Print a greeting message for the given name
 */
void greet(char *name)
{
    printf("Hello, %s!\n", name);
}

/**
 * Add two integers together
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * Calculate the average of an array of integers
 */
float calculate_average(int numbers[], int count)
{
    if (count == 0)
    {
        return 0.0;
    }
    
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += numbers[i];
    }
    
    return (float)sum / count;
}
