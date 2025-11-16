# Testing Guide

This guide covers testing best practices for both Python and C programs.

## Why Testing Matters

Testing provides:
- **Confidence**: Know your code works as expected
- **Documentation**: Tests show how code should be used
- **Regression Prevention**: Catch bugs when changing code
- **Better Design**: Writing testable code leads to better architecture

## Testing Philosophy

### Test-Driven Development (TDD)

1. Write a failing test
2. Write minimal code to make it pass
3. Refactor and improve
4. Repeat

### What to Test

✅ **Do test:**
- Public APIs and interfaces
- Edge cases and boundary conditions
- Error handling
- Business logic

❌ **Don't test:**
- Private implementation details
- Third-party library code
- Trivial getters/setters

## Python Testing with pytest

### Test Structure

```python
# tests/test_calculator.py
import pytest
from calculator import add, subtract

def test_add_positive_numbers():
    """Test adding positive numbers."""
    assert add(2, 3) == 5
    assert add(10, 20) == 30

def test_add_negative_numbers():
    """Test adding negative numbers."""
    assert add(-5, -3) == -8
    assert add(-10, 10) == 0

def test_add_zero():
    """Test adding zero."""
    assert add(0, 0) == 0
    assert add(5, 0) == 5
    assert add(0, 5) == 5
```

### Running Tests

```bash
cd src/python

# Run all tests
pytest tests/

# Verbose output
pytest tests/ -v

# Show print statements
pytest tests/ -s

# Run specific test file
pytest tests/test_calculator.py

# Run specific test
pytest tests/test_calculator.py::test_add_positive_numbers

# Run tests matching pattern
pytest tests/ -k "add"

# Show test coverage
pytest tests/ --cov=.
```

### Test Fixtures

Fixtures set up test data:

```python
import pytest

@pytest.fixture
def sample_numbers():
    """Provide sample numbers for tests."""
    return [1, 2, 3, 4, 5]

def test_sum_with_fixture(sample_numbers):
    """Test sum using fixture."""
    assert sum(sample_numbers) == 15
```

### Parametrized Tests

Test multiple inputs efficiently:

```python
import pytest

@pytest.mark.parametrize("a,b,expected", [
    (2, 3, 5),
    (-1, 1, 0),
    (0, 0, 0),
    (100, 200, 300),
])
def test_add_parametrized(a, b, expected):
    """Test add with multiple inputs."""
    assert add(a, b) == expected
```

### Testing Exceptions

```python
import pytest

def test_divide_by_zero():
    """Test that dividing by zero raises an error."""
    with pytest.raises(ZeroDivisionError):
        result = 10 / 0
```

## C Testing

C doesn't have a built-in testing framework, but we can create effective tests.

### Simple Test Framework

```c
// tests/test_calculator.c
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "../calculator.h"

// Test counter
static int tests_run = 0;
static int tests_passed = 0;

// Test helper macros
#define TEST(name) void name()
#define RUN_TEST(test) do { \
    printf("Running %s...", #test); \
    tests_run++; \
    test(); \
    tests_passed++; \
    printf(" PASSED\n"); \
} while(0)

#define ASSERT_EQUAL(a, b) do { \
    if ((a) != (b)) { \
        printf("\n  FAILED: %s:%d: %s != %s\n", \
               __FILE__, __LINE__, #a, #b); \
        printf("    Expected: %d, Got: %d\n", (int)(b), (int)(a)); \
        return; \
    } \
} while(0)

#define ASSERT_FLOAT_EQUAL(a, b) do { \
    if (fabs((a) - (b)) > 0.0001) { \
        printf("\n  FAILED: %s:%d: %s != %s\n", \
               __FILE__, __LINE__, #a, #b); \
        printf("    Expected: %f, Got: %f\n", (double)(b), (double)(a)); \
        return; \
    } \
} while(0)

// Test cases
TEST(test_add_positive) {
    ASSERT_EQUAL(add(2, 3), 5);
    ASSERT_EQUAL(add(10, 20), 30);
}

TEST(test_add_negative) {
    ASSERT_EQUAL(add(-5, -3), -8);
    ASSERT_EQUAL(add(-10, 10), 0);
}

TEST(test_subtract) {
    ASSERT_EQUAL(subtract(5, 3), 2);
    ASSERT_EQUAL(subtract(10, 20), -10);
}

int main() {
    printf("Running Calculator Tests\n");
    printf("========================\n\n");
    
    RUN_TEST(test_add_positive);
    RUN_TEST(test_add_negative);
    RUN_TEST(test_subtract);
    
    printf("\n========================\n");
    printf("Tests Run: %d\n", tests_run);
    printf("Tests Passed: %d\n", tests_passed);
    
    if (tests_run == tests_passed) {
        printf("All tests passed! ✓\n");
        return 0;
    } else {
        printf("Some tests failed! ✗\n");
        return 1;
    }
}
```

### Building and Running C Tests

```bash
cd src/c

# Compile tests
gcc -Wall -Wextra -g tests/test_calculator.c calculator.c -o test_calculator -lm

# Run tests
./test_calculator
```

### Makefile for Tests

```makefile
test: test_calculator
	./test_calculator

test_calculator: tests/test_calculator.c calculator.c
	$(CC) $(CFLAGS) tests/test_calculator.c calculator.c -o test_calculator -lm
```

## Testing Best Practices

### 1. Arrange-Act-Assert Pattern

```python
def test_calculator():
    # Arrange - set up test data
    calculator = Calculator()
    
    # Act - perform the action
    result = calculator.add(2, 3)
    
    # Assert - verify the result
    assert result == 5
```

### 2. Test Independence

Each test should be independent:

```python
# ❌ Bad - tests depend on each other
def test_first():
    global value
    value = 5

def test_second():
    assert value == 5  # Depends on test_first

# ✅ Good - independent tests
def test_first():
    value = 5
    assert value == 5

def test_second():
    value = 5
    assert value == 5
```

### 3. Meaningful Test Names

```python
# ❌ Bad
def test_1():
    assert add(2, 3) == 5

# ✅ Good
def test_add_two_positive_integers_returns_sum():
    assert add(2, 3) == 5
```

### 4. Test Edge Cases

```python
def test_edge_cases():
    # Boundary conditions
    assert add(0, 0) == 0
    assert add(-1, 1) == 0
    
    # Maximum values
    import sys
    max_int = sys.maxsize
    assert add(max_int, 0) == max_int
    
    # Negative numbers
    assert add(-5, -5) == -10
```

### 5. Keep Tests Simple

Tests should be simple and easy to understand:

```python
# ❌ Too complex
def test_complex():
    for i in range(100):
        if i % 2 == 0:
            assert add(i, i) == i * 2
        else:
            assert add(i, -i) == 0

# ✅ Simple and clear
def test_add_even_numbers():
    assert add(2, 2) == 4
    assert add(10, 10) == 20

def test_add_number_and_negative():
    assert add(5, -5) == 0
    assert add(10, -10) == 0
```

## Code Coverage

### Python Coverage

```bash
# Install coverage tool
pip install pytest-cov

# Run tests with coverage
pytest tests/ --cov=.

# Generate HTML report
pytest tests/ --cov=. --cov-report=html

# View report
open htmlcov/index.html
```

### C Coverage

```bash
# Compile with coverage flags
gcc -coverage -fprofile-arcs -ftest-coverage calculator.c test_calculator.c -o test_calculator

# Run tests
./test_calculator

# Generate coverage report
gcov calculator.c

# View coverage
cat calculator.c.gcov
```

## Continuous Integration

Add tests to your CI/CD pipeline:

```yaml
# .github/workflows/test.yml
name: Tests

on: [push, pull_request]

jobs:
  test:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v2
      
      - name: Set up Python
        uses: actions/setup-python@v2
        with:
          python-version: '3.8'
      
      - name: Install dependencies
        run: |
          cd src/python
          pip install -r requirements.txt
      
      - name: Run Python tests
        run: |
          cd src/python
          pytest tests/
      
      - name: Run C tests
        run: |
          cd src/c
          make test
```

## Common Testing Mistakes

### 1. Testing Implementation, Not Behavior

❌ Bad:
```python
def test_sort_uses_quicksort():
    # Don't test how it works
    assert algorithm == "quicksort"
```

✅ Good:
```python
def test_sort_returns_sorted_list():
    # Test what it does
    assert sort([3, 1, 2]) == [1, 2, 3]
```

### 2. Too Many Assertions

❌ Bad:
```python
def test_everything():
    assert add(1, 1) == 2
    assert subtract(5, 3) == 2
    assert multiply(2, 3) == 6
    assert divide(10, 2) == 5
```

✅ Good:
```python
def test_add():
    assert add(1, 1) == 2

def test_subtract():
    assert subtract(5, 3) == 2
```

### 3. Ignoring Test Failures

Always fix failing tests immediately. Never commit code with failing tests.

## Exercise: Write Your Own Tests

1. Add multiplication to the calculator
2. Write tests for multiplication
3. Test edge cases (multiply by 0, negative numbers)
4. Add division and test for division by zero
5. Measure test coverage

## Additional Resources

- [pytest Documentation](https://docs.pytest.org/)
- [Test-Driven Development](https://en.wikipedia.org/wiki/Test-driven_development)
- [Google Testing Blog](https://testing.googleblog.com/)
- [Unit Testing in C](http://www.throwtheswitch.org/unity)

## Next Steps

- Practice writing tests for existing code
- Try test-driven development
- Explore more testing frameworks
- Contribute to the project! See [CONTRIBUTING.md](../CONTRIBUTING.md)
