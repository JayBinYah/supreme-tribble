"""
A simple calculator module with basic arithmetic operations.

This module demonstrates:
- Function definitions
- Type hints
- Documentation strings
- Basic arithmetic operations
"""


def add(a: int, b: int) -> int:
    """
    Add two integers and return the result.

    Args:
        a: First integer
        b: Second integer

    Returns:
        The sum of a and b

    Examples:
        >>> add(2, 3)
        5
        >>> add(-1, 1)
        0
    """
    return a + b


def subtract(a: int, b: int) -> int:
    """
    Subtract b from a and return the result.

    Args:
        a: First integer
        b: Second integer to subtract from a

    Returns:
        The difference (a - b)

    Examples:
        >>> subtract(5, 3)
        2
        >>> subtract(10, 20)
        -10
    """
    return a - b


def multiply(a: int, b: int) -> int:
    """
    Multiply two integers and return the result.

    Args:
        a: First integer
        b: Second integer

    Returns:
        The product of a and b

    Examples:
        >>> multiply(3, 4)
        12
        >>> multiply(-2, 5)
        -10
    """
    return a * b


def divide(a: float, b: float) -> float:
    """
    Divide a by b and return the result.

    Args:
        a: Numerator
        b: Denominator

    Returns:
        The quotient of a divided by b

    Raises:
        ZeroDivisionError: If b is zero

    Examples:
        >>> divide(10, 2)
        5.0
        >>> divide(7, 2)
        3.5
    """
    if b == 0:
        raise ZeroDivisionError("Cannot divide by zero")
    return a / b


def main():
    """Demonstrate calculator functions."""
    print("Simple Calculator Demo")
    print("=" * 40)

    # Addition
    result = add(5, 3)
    print(f"5 + 3 = {result}")

    # Subtraction
    result = subtract(10, 4)
    print(f"10 - 4 = {result}")

    # Multiplication
    result = multiply(6, 7)
    print(f"6 * 7 = {result}")

    # Division
    result = divide(15, 3)
    print(f"15 / 3 = {result}")

    # Division with float result
    result = divide(7, 2)
    print(f"7 / 2 = {result}")


if __name__ == "__main__":
    main()
