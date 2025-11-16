"""
Unit tests for the main module.

Run with: pytest tests/ -v
"""

import sys
import os

# Add src directory to path so we can import main
sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'src', 'python'))

from main import greet, add_numbers


class TestGreet:
    """Test cases for the greet function."""

    def test_greet_with_name(self):
        """Test greeting with a name."""
        assert greet("Alice") == "Hello, Alice!"
        assert greet("Bob") == "Hello, Bob!"

    def test_greet_with_empty_string(self):
        """Test greeting with empty string."""
        assert greet("") == "Hello, stranger!"

    def test_greet_with_special_characters(self):
        """Test greeting with special characters."""
        assert greet("José") == "Hello, José!"
        assert greet("李明") == "Hello, 李明!"


class TestAddNumbers:
    """Test cases for the add_numbers function."""

    def test_add_positive_numbers(self):
        """Test adding positive numbers."""
        assert add_numbers(2, 3) == 5
        assert add_numbers(10, 20) == 30

    def test_add_negative_numbers(self):
        """Test adding negative numbers."""
        assert add_numbers(-5, -3) == -8
        assert add_numbers(-10, -20) == -30

    def test_add_mixed_numbers(self):
        """Test adding positive and negative numbers."""
        assert add_numbers(5, -3) == 2
        assert add_numbers(-5, 10) == 5

    def test_add_with_zero(self):
        """Test adding with zero."""
        assert add_numbers(0, 0) == 0
        assert add_numbers(5, 0) == 5
        assert add_numbers(0, -3) == -3
