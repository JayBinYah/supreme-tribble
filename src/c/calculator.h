/*
 * Calculator header file.
 *
 * Provides function declarations for basic arithmetic operations.
 */

#ifndef CALCULATOR_H
#define CALCULATOR_H

/**
 * Add two integers.
 *
 * @param a First integer
 * @param b Second integer
 * @return Sum of a and b
 */
int add(int a, int b);

/**
 * Subtract b from a.
 *
 * @param a First integer
 * @param b Second integer to subtract from a
 * @return Difference (a - b)
 */
int subtract(int a, int b);

/**
 * Multiply two integers.
 *
 * @param a First integer
 * @param b Second integer
 * @return Product of a and b
 */
int multiply(int a, int b);

/**
 * Divide a by b.
 *
 * @param a Numerator
 * @param b Denominator
 * @return Quotient of a divided by b
 * @note Returns 0 if b is zero (avoid division by zero)
 */
double divide(double a, double b);

#endif /* CALCULATOR_H */
