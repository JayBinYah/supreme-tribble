/*
 * Unit tests for calculator functions.
 *
 * This demonstrates a simple testing framework for C code.
 */

#include <stdio.h>
#include <math.h>
#include "../calculator.h"

/* Test statistics */
static int tests_run = 0;
static int tests_passed = 0;
static int tests_failed = 0;

/* Color codes for output */
#define COLOR_GREEN "\x1b[32m"
#define COLOR_RED "\x1b[31m"
#define COLOR_RESET "\x1b[0m"

/* Test helper macros */
#define TEST(name) static void name(void)

#define RUN_TEST(test) do { \
	printf("Running %s... ", #test); \
	tests_run++; \
	test(); \
} while(0)

#define ASSERT_EQUAL(a, b) do { \
	if ((a) != (b)) { \
		printf(COLOR_RED "FAILED" COLOR_RESET "\n"); \
		printf("  Expected: %d, Got: %d\n", (int)(b), (int)(a)); \
		printf("  File: %s, Line: %d\n", __FILE__, __LINE__); \
		tests_failed++; \
		return; \
	} \
} while(0)

#define ASSERT_FLOAT_EQUAL(a, b) do { \
	if (fabs((a) - (b)) > 0.0001) { \
		printf(COLOR_RED "FAILED" COLOR_RESET "\n"); \
		printf("  Expected: %f, Got: %f\n", (double)(b), (double)(a)); \
		printf("  File: %s, Line: %d\n", __FILE__, __LINE__); \
		tests_failed++; \
		return; \
	} \
} while(0)

#define PASS() do { \
	printf(COLOR_GREEN "PASSED" COLOR_RESET "\n"); \
	tests_passed++; \
} while(0)

/* Test cases for add function */
TEST(test_add_positive_numbers)
{
	ASSERT_EQUAL(add(2, 3), 5);
	ASSERT_EQUAL(add(10, 20), 30);
	PASS();
}

TEST(test_add_negative_numbers)
{
	ASSERT_EQUAL(add(-5, -3), -8);
	ASSERT_EQUAL(add(-10, 10), 0);
	PASS();
}

TEST(test_add_zero)
{
	ASSERT_EQUAL(add(0, 0), 0);
	ASSERT_EQUAL(add(5, 0), 5);
	ASSERT_EQUAL(add(0, 5), 5);
	PASS();
}

/* Test cases for subtract function */
TEST(test_subtract_positive_numbers)
{
	ASSERT_EQUAL(subtract(5, 3), 2);
	ASSERT_EQUAL(subtract(10, 5), 5);
	PASS();
}

TEST(test_subtract_negative_numbers)
{
	ASSERT_EQUAL(subtract(-5, -3), -2);
	ASSERT_EQUAL(subtract(5, -3), 8);
	PASS();
}

TEST(test_subtract_zero)
{
	ASSERT_EQUAL(subtract(5, 0), 5);
	ASSERT_EQUAL(subtract(0, 5), -5);
	ASSERT_EQUAL(subtract(0, 0), 0);
	PASS();
}

/* Test cases for multiply function */
TEST(test_multiply_positive_numbers)
{
	ASSERT_EQUAL(multiply(2, 3), 6);
	ASSERT_EQUAL(multiply(5, 4), 20);
	PASS();
}

TEST(test_multiply_negative_numbers)
{
	ASSERT_EQUAL(multiply(-2, 3), -6);
	ASSERT_EQUAL(multiply(-2, -3), 6);
	PASS();
}

TEST(test_multiply_by_zero)
{
	ASSERT_EQUAL(multiply(5, 0), 0);
	ASSERT_EQUAL(multiply(0, 5), 0);
	ASSERT_EQUAL(multiply(0, 0), 0);
	PASS();
}

/* Test cases for divide function */
TEST(test_divide_positive_numbers)
{
	ASSERT_FLOAT_EQUAL(divide(10.0, 2.0), 5.0);
	ASSERT_FLOAT_EQUAL(divide(15.0, 3.0), 5.0);
	PASS();
}

TEST(test_divide_with_float_result)
{
	ASSERT_FLOAT_EQUAL(divide(7.0, 2.0), 3.5);
	ASSERT_FLOAT_EQUAL(divide(5.0, 4.0), 1.25);
	PASS();
}

TEST(test_divide_negative_numbers)
{
	ASSERT_FLOAT_EQUAL(divide(-10.0, 2.0), -5.0);
	ASSERT_FLOAT_EQUAL(divide(10.0, -2.0), -5.0);
	ASSERT_FLOAT_EQUAL(divide(-10.0, -2.0), 5.0);
	PASS();
}

TEST(test_divide_by_zero)
{
	/* divide by zero returns 0.0 and prints error */
	ASSERT_FLOAT_EQUAL(divide(10.0, 0.0), 0.0);
	PASS();
}

TEST(test_divide_zero_by_number)
{
	ASSERT_FLOAT_EQUAL(divide(0.0, 5.0), 0.0);
	ASSERT_FLOAT_EQUAL(divide(0.0, -5.0), 0.0);
	PASS();
}

/* Main test runner */
int main(void)
{
	printf("\n");
	printf("========================================\n");
	printf("   Calculator Unit Tests\n");
	printf("========================================\n\n");

	/* Run add tests */
	printf("Testing add function:\n");
	RUN_TEST(test_add_positive_numbers);
	RUN_TEST(test_add_negative_numbers);
	RUN_TEST(test_add_zero);

	/* Run subtract tests */
	printf("\nTesting subtract function:\n");
	RUN_TEST(test_subtract_positive_numbers);
	RUN_TEST(test_subtract_negative_numbers);
	RUN_TEST(test_subtract_zero);

	/* Run multiply tests */
	printf("\nTesting multiply function:\n");
	RUN_TEST(test_multiply_positive_numbers);
	RUN_TEST(test_multiply_negative_numbers);
	RUN_TEST(test_multiply_by_zero);

	/* Run divide tests */
	printf("\nTesting divide function:\n");
	RUN_TEST(test_divide_positive_numbers);
	RUN_TEST(test_divide_with_float_result);
	RUN_TEST(test_divide_negative_numbers);
	RUN_TEST(test_divide_by_zero);
	RUN_TEST(test_divide_zero_by_number);

	/* Print summary */
	printf("\n========================================\n");
	printf("Test Results:\n");
	printf("  Total:  %d\n", tests_run);
	printf("  " COLOR_GREEN "Passed: %d" COLOR_RESET "\n", tests_passed);
	if (tests_failed > 0) {
		printf("  " COLOR_RED "Failed: %d" COLOR_RESET "\n", tests_failed);
	}
	printf("========================================\n\n");

	if (tests_failed == 0 && tests_run == tests_passed) {
		printf(COLOR_GREEN "✓ All tests passed!" COLOR_RESET "\n\n");
		return 0;
	} else {
		printf(COLOR_RED "✗ Some tests failed!" COLOR_RESET "\n\n");
		return 1;
	}
}
