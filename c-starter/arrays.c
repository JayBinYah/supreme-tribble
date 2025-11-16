/**
 * arrays.c - Working with Arrays in C
 * 
 * This program demonstrates:
 * - Array declaration and initialization
 * - Accessing array elements
 * - Looping through arrays
 * - Multi-dimensional arrays
 */

#include <stdio.h>
#include <string.h>

void print_array(int arr[], int size);
int find_max(int arr[], int size);

int main(void)
{
    printf("=== ARRAY EXAMPLES ===\n\n");
    
    // Declare and initialize an array
    int numbers[] = {10, 25, 8, 42, 15};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Array contents:\n");
    print_array(numbers, size);
    
    // Access individual elements
    printf("\nFirst element: %d\n", numbers[0]);
    printf("Last element: %d\n", numbers[size - 1]);
    
    // Find maximum value
    int max = find_max(numbers, size);
    printf("Maximum value: %d\n", max);
    
    // String (character array)
    printf("\n=== STRING EXAMPLE ===\n\n");
    char greeting[] = "Hello, C!";
    printf("String: %s\n", greeting);
    printf("Length: %lu\n", strlen(greeting));
    
    // Multi-dimensional array (matrix)
    printf("\n=== 2D ARRAY EXAMPLE ===\n\n");
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/**
 * Print all elements of an array
 */
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("  [%d] = %d\n", i, arr[i]);
    }
}

/**
 * Find the maximum value in an array
 */
int find_max(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    return max;
}
