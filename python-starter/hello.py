"""
hello.py - Basic Python Starter

This is your first Python program! It demonstrates:
- Print statements
- Variables
- User input
- String formatting
"""


def main():
    """Main function - entry point of the program"""
    # Print a simple message
    print("Hello, World!")
    
    # Get user input
    name = input("What's your name? ")
    
    # Format and print a personalized greeting
    print(f"Hello, {name}!")
    
    # Try different string formatting methods
    print("Nice to meet you, {}!".format(name))
    print("Welcome to Python programming, " + name + "!")


if __name__ == "__main__":
    main()
