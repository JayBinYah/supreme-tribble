# Python Programming Guide

This guide will help you learn Python programming through the examples in this repository.

## What You'll Learn

- Python basics: variables, data types, control flow
- Functions and modules
- Object-oriented programming
- Testing with pytest
- Best practices and style

## Getting Started

Make sure you've completed the [Getting Started](getting-started.md) guide first.

## Python Basics

### Hello World

The classic first program demonstrates:
- Basic syntax
- Print function
- String literals

```bash
cd src/python
python hello_world.py
```

### Variables and Data Types

Python supports several built-in data types:

```python
# Numbers
integer = 42
floating = 3.14

# Strings
text = "Hello, World!"

# Booleans
is_true = True

# Lists
numbers = [1, 2, 3, 4, 5]

# Dictionaries
person = {"name": "Alice", "age": 30}
```

### Control Flow

#### If Statements

```python
age = 18
if age >= 18:
    print("Adult")
else:
    print("Minor")
```

#### Loops

```python
# For loop
for i in range(5):
    print(i)

# While loop
count = 0
while count < 5:
    print(count)
    count += 1
```

## Functions

Functions help organize and reuse code:

```python
def greet(name):
    """Greet a person by name."""
    return f"Hello, {name}!"

# Call the function
message = greet("Alice")
print(message)
```

### Function Best Practices

1. Use descriptive names
2. Add docstrings
3. Keep functions focused on one task
4. Use type hints (Python 3.5+):

```python
def add(a: int, b: int) -> int:
    """Add two integers and return the result."""
    return a + b
```

## Calculator Example

The calculator example demonstrates:
- Function definitions
- Basic arithmetic operations
- Error handling
- Documentation

Explore the code:

```bash
cd src/python
python calculator.py
```

## Object-Oriented Programming

Python supports OOP with classes:

```python
class Calculator:
    """A simple calculator class."""
    
    def add(self, a, b):
        """Add two numbers."""
        return a + b
    
    def subtract(self, a, b):
        """Subtract b from a."""
        return a - b

# Use the class
calc = Calculator()
result = calc.add(5, 3)
print(result)  # Output: 8
```

## Testing with pytest

### Why Test?

- Catch bugs early
- Document expected behavior
- Enable safe refactoring
- Increase confidence in code

### Writing Tests

Tests are in the `tests/` directory:

```python
import pytest
from calculator import add

def test_add_positive_numbers():
    """Test adding two positive numbers."""
    assert add(2, 3) == 5

def test_add_negative_numbers():
    """Test adding negative numbers."""
    assert add(-2, -3) == -5
```

### Running Tests

```bash
# Run all tests
pytest tests/

# Run with verbose output
pytest tests/ -v

# Run a specific test file
pytest tests/test_calculator.py

# Run a specific test function
pytest tests/test_calculator.py::test_add_positive_numbers
```

## Python Style Guide

Follow PEP 8 for consistent, readable code:

### Naming Conventions

- **Variables/functions**: `snake_case`
- **Classes**: `PascalCase`
- **Constants**: `UPPER_CASE`

### Indentation

- Use 4 spaces (not tabs)
- Be consistent

### Line Length

- Keep lines under 88 characters (Black formatter default)
- Break long lines logically

### Imports

```python
# Standard library imports
import os
import sys

# Third-party imports
import pytest
import numpy

# Local imports
from calculator import add
```

## Best Practices

1. **Use virtual environments**: Keep dependencies isolated
2. **Write docstrings**: Document your functions and classes
3. **Handle errors**: Use try/except blocks appropriately
4. **Keep it simple**: Prefer readability over cleverness
5. **Test your code**: Write tests as you develop

## Common Pitfalls

### Mutable Default Arguments

❌ Don't do this:
```python
def add_item(item, items=[]):
    items.append(item)
    return items
```

✅ Do this instead:
```python
def add_item(item, items=None):
    if items is None:
        items = []
    items.append(item)
    return items
```

### Global Variables

Avoid global variables when possible. Pass data through function parameters instead.

## Exercises

1. Modify `calculator.py` to add multiplication and division
2. Write tests for your new functions
3. Create a new program that uses lists and dictionaries
4. Add error handling for division by zero

## Additional Resources

- [Official Python Tutorial](https://docs.python.org/3/tutorial/)
- [PEP 8 Style Guide](https://www.python.org/dev/peps/pep-0008/)
- [pytest Documentation](https://docs.pytest.org/)
- [Real Python Tutorials](https://realpython.com/)

## Next Steps

- Continue to the [C Programming Guide](c-guide.md)
- Learn more about [Testing Best Practices](testing-guide.md)
- Start contributing! See [CONTRIBUTING.md](../CONTRIBUTING.md)
