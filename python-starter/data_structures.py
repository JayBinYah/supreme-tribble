"""
data_structures.py - Working with Data Structures

This module demonstrates:
- Lists
- Dictionaries
- Tuples
- Sets
- Basic operations on each
"""


def list_examples():
    """Demonstrate list operations"""
    print("=== LIST EXAMPLES ===")
    
    # Create a list
    fruits = ["apple", "banana", "cherry"]
    print(f"Fruits: {fruits}")
    
    # Add items
    fruits.append("date")
    print(f"After append: {fruits}")
    
    # Access by index
    print(f"First fruit: {fruits[0]}")
    
    # Slice
    print(f"First two fruits: {fruits[:2]}")
    
    # Loop through list
    print("All fruits:")
    for fruit in fruits:
        print(f"  - {fruit}")
    
    print()


def dictionary_examples():
    """Demonstrate dictionary operations"""
    print("=== DICTIONARY EXAMPLES ===")
    
    # Create a dictionary
    student = {
        "name": "John Doe",
        "age": 20,
        "major": "Computer Science",
        "gpa": 3.7
    }
    
    print(f"Student: {student}")
    
    # Access values
    print(f"Name: {student['name']}")
    print(f"GPA: {student['gpa']}")
    
    # Add new key-value pair
    student["graduation_year"] = 2026
    print(f"After adding graduation year: {student}")
    
    # Loop through dictionary
    print("Student details:")
    for key, value in student.items():
        print(f"  {key}: {value}")
    
    print()


def tuple_examples():
    """Demonstrate tuple operations"""
    print("=== TUPLE EXAMPLES ===")
    
    # Create a tuple (immutable)
    coordinates = (10, 20)
    print(f"Coordinates: {coordinates}")
    
    # Unpack tuple
    x, y = coordinates
    print(f"x={x}, y={y}")
    
    # Tuples are immutable (this would cause an error):
    # coordinates[0] = 15  # Uncomment to see the error
    
    print()


def set_examples():
    """Demonstrate set operations"""
    print("=== SET EXAMPLES ===")
    
    # Create sets
    set1 = {1, 2, 3, 4, 5}
    set2 = {4, 5, 6, 7, 8}
    
    print(f"Set 1: {set1}")
    print(f"Set 2: {set2}")
    
    # Set operations
    print(f"Union: {set1 | set2}")
    print(f"Intersection: {set1 & set2}")
    print(f"Difference (1-2): {set1 - set2}")
    
    # Sets automatically remove duplicates
    numbers = [1, 2, 2, 3, 3, 3, 4]
    unique_numbers = set(numbers)
    print(f"Original list: {numbers}")
    print(f"Unique numbers: {unique_numbers}")
    
    print()


def main():
    """Run all examples"""
    list_examples()
    dictionary_examples()
    tuple_examples()
    set_examples()


if __name__ == "__main__":
    main()
