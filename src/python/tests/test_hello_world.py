"""
Unit tests for the hello_world module.

This demonstrates testing functions that produce output.
"""

from io import StringIO
import sys
from hello_world import main


def test_hello_world_output(capsys):
    """Test that main() prints the expected output."""
    main()
    captured = capsys.readouterr()
    assert "Hello, World!" in captured.out
    assert "Welcome to supreme-tribble!" in captured.out
