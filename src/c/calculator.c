/*
 * Calculator demo program.
 *
 * Demonstrates the calculator library functions.
 */

#include <stdio.h>
#include "calculator.h"

int main(void)
{
	printf("Simple Calculator Demo\n");
	printf("========================================\n");

	/* Addition */
	printf("5 + 3 = %d\n", add(5, 3));

	/* Subtraction */
	printf("10 - 4 = %d\n", subtract(10, 4));

	/* Multiplication */
	printf("6 * 7 = %d\n", multiply(6, 7));

	/* Division */
	printf("15 / 3 = %.1f\n", divide(15.0, 3.0));

	/* Division with float result */
	printf("7 / 2 = %.1f\n", divide(7.0, 2.0));

	return 0;
}
