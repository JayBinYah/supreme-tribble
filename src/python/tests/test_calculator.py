"""
Unit tests for the calculator module.

These tests demonstrate:
- Basic test structure
- Testing different scenarios
- Testing error conditions
- Parametrized tests
"""

import pytest
from calculator import add, subtract, multiply, divide


class TestAdd:
    """Tests for the add function."""

    def test_add_positive_numbers(self):
        """Test adding two positive numbers."""
        assert add(2, 3) == 5
        assert add(10, 20) == 30

    def test_add_negative_numbers(self):
        """Test adding negative numbers."""
        assert add(-5, -3) == -8
        assert add(-10, 10) == 0

    def test_add_zero(self):
        """Test adding zero."""
        assert add(0, 0) == 0
        assert add(5, 0) == 5
        assert add(0, 5) == 5

    @pytest.mark.parametrize("a,b,expected", [
        (1, 1, 2),
        (100, 200, 300),
        (-50, 50, 0),
        (0, 0, 0),
    ])
    def test_add_parametrized(self, a, b, expected):
        """Test add with multiple input combinations."""
        assert add(a, b) == expected


class TestSubtract:
    """Tests for the subtract function."""

    def test_subtract_positive_numbers(self):
        """Test subtracting positive numbers."""
        assert subtract(5, 3) == 2
        assert subtract(10, 5) == 5

    def test_subtract_negative_numbers(self):
        """Test subtracting negative numbers."""
        assert subtract(-5, -3) == -2
        assert subtract(5, -3) == 8

    def test_subtract_zero(self):
        """Test subtracting zero."""
        assert subtract(5, 0) == 5
        assert subtract(0, 5) == -5
        assert subtract(0, 0) == 0

    def test_subtract_larger_from_smaller(self):
        """Test subtracting larger number from smaller."""
        assert subtract(3, 5) == -2
        assert subtract(10, 20) == -10


class TestMultiply:
    """Tests for the multiply function."""

    def test_multiply_positive_numbers(self):
        """Test multiplying positive numbers."""
        assert multiply(2, 3) == 6
        assert multiply(5, 4) == 20

    def test_multiply_negative_numbers(self):
        """Test multiplying with negative numbers."""
        assert multiply(-2, 3) == -6
        assert multiply(-2, -3) == 6

    def test_multiply_by_zero(self):
        """Test multiplying by zero."""
        assert multiply(5, 0) == 0
        assert multiply(0, 5) == 0
        assert multiply(0, 0) == 0

    def test_multiply_by_one(self):
        """Test multiplying by one."""
        assert multiply(5, 1) == 5
        assert multiply(1, 5) == 5


class TestDivide:
    """Tests for the divide function."""

    def test_divide_positive_numbers(self):
        """Test dividing positive numbers."""
        assert divide(10, 2) == 5.0
        assert divide(15, 3) == 5.0

    def test_divide_with_float_result(self):
        """Test division with float result."""
        assert divide(7, 2) == 3.5
        assert divide(5, 4) == 1.25

    def test_divide_negative_numbers(self):
        """Test dividing with negative numbers."""
        assert divide(-10, 2) == -5.0
        assert divide(10, -2) == -5.0
        assert divide(-10, -2) == 5.0

    def test_divide_by_zero_raises_error(self):
        """Test that dividing by zero raises ZeroDivisionError."""
        with pytest.raises(ZeroDivisionError):
            divide(10, 0)

    def test_divide_zero_by_number(self):
        """Test dividing zero by a number."""
        assert divide(0, 5) == 0.0
        assert divide(0, -5) == 0.0
