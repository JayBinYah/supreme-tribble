"""
Main Python module with simple greeting functionality.

This module demonstrates basic Python functions and can be used
to practice debugging, testing, and VS Code features.
"""


def greet(name: str) -> str:
    """
    Generate a greeting message for the given name.

    Args:
        name: The name of the person to greet

    Returns:
        A greeting string

    Examples:
        >>> greet("Alice")
        'Hello, Alice!'
        >>> greet("World")
        'Hello, World!'
    """
    if not name:
        return "Hello, stranger!"
    return f"Hello, {name}!"


def add_numbers(a: int, b: int) -> int:
    """
    Add two numbers together.

    Args:
        a: First number
        b: Second number

    Returns:
        The sum of a and b

    Examples:
        >>> add_numbers(2, 3)
        5
        >>> add_numbers(-1, 1)
        0
    """
    return a + b


def main():
    """Main entry point for the program."""
    print("=== Python Greeting Program ===")
    print()

    # Demonstrate greet function
    names = ["World", "Alice", "Bob", ""]
    for name in names:
        result = greet(name)
        print(f"greet('{name}') -> {result}")

    print()

    # Demonstrate add_numbers function
    print("Addition examples:")
    examples = [(5, 3), (10, -2), (0, 0)]
    for a, b in examples:
        result = add_numbers(a, b)
        print(f"add_numbers({a}, {b}) -> {result}")


if __name__ == "__main__":
    main()
