"""
functions.py - Working with Functions

This module demonstrates:
- Defining and calling functions
- Parameters and return values
- Docstrings
- Basic error handling
"""


def greet(name):
    """
    Return a greeting message for the given name.
    
    Args:
        name (str): The name to greet
        
    Returns:
        str: A greeting message
    """
    return f"Hello, {name}!"


def add(a, b):
    """
    Add two numbers together.
    
    Args:
        a (int or float): First number
        b (int or float): Second number
        
    Returns:
        int or float: Sum of a and b
    """
    return a + b


def calculate_average(numbers):
    """
    Calculate the average of a list of numbers.
    
    Args:
        numbers (list): List of numbers
        
    Returns:
        float: Average of the numbers
        
    Raises:
        ValueError: If the list is empty
    """
    if not numbers:
        raise ValueError("Cannot calculate average of empty list")
    
    return sum(numbers) / len(numbers)


def main():
    """Demonstrate function usage"""
    # Test greet function
    message = greet("Alice")
    print(message)
    
    # Test add function
    result = add(5, 3)
    print(f"5 + 3 = {result}")
    
    # Test calculate_average function
    scores = [85, 92, 78, 90, 88]
    avg = calculate_average(scores)
    print(f"Average score: {avg:.2f}")
    
    # Try with an empty list (will raise an error)
    try:
        empty_avg = calculate_average([])
    except ValueError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    main()
