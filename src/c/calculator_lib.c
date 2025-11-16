/*
 * Calculator library implementation.
 *
 * Implements basic arithmetic operations.
 */

#include <stdio.h>
#include "calculator.h"

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

double divide(double a, double b)
{
	if (b == 0.0) {
		fprintf(stderr, "Error: Division by zero\n");
		return 0.0;
	}
	return a / b;
}
