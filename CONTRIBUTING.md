# Contributing to supreme-tribble

Thank you for your interest in contributing to supreme-tribble! This document provides guidelines and instructions for contributing.

## Code of Conduct

This project and everyone participating in it is governed by our [Code of Conduct](CODE_OF_CONDUCT.md). By participating, you are expected to uphold this code.

## How Can I Contribute?

### Reporting Bugs

Before creating bug reports, please check existing issues to avoid duplicates. When creating a bug report, include:

* A clear and descriptive title
* Detailed steps to reproduce the problem
* Expected behavior vs actual behavior
* Your environment (OS, Python version, compiler version, etc.)
* Any relevant logs or error messages

### Suggesting Enhancements

Enhancement suggestions are tracked as GitHub issues. When creating an enhancement suggestion, include:

* A clear and descriptive title
* A detailed description of the proposed functionality
* Examples of how the enhancement would be used
* Why this enhancement would be useful to most users

### Pull Requests

1. Fork the repository and create your branch from `main`:
   ```bash
   git checkout -b feature/my-new-feature
   ```

2. Make your changes:
   * Follow the existing code style
   * Add tests for new functionality
   * Update documentation as needed

3. Ensure all tests pass:
   ```bash
   # For Python
   cd src/python
   pytest tests/
   
   # For C
   cd src/c
   make test
   ```

4. Commit your changes:
   * Use clear and meaningful commit messages
   * Reference relevant issues in commit messages

5. Push to your fork and submit a pull request

## Development Setup

### Python Development

1. Create a virtual environment:
   ```bash
   cd src/python
   python -m venv venv
   source venv/bin/activate  # On Windows: venv\Scripts\activate
   ```

2. Install dependencies:
   ```bash
   pip install -r requirements.txt
   ```

3. Run tests:
   ```bash
   pytest tests/ -v
   ```

### C Development

1. Ensure you have GCC installed:
   ```bash
   gcc --version
   ```

2. Build the project:
   ```bash
   cd src/c
   make
   ```

3. Run tests:
   ```bash
   make test
   ```

## Style Guidelines

### Python Style

* Follow PEP 8 guidelines
* Use 4 spaces for indentation
* Maximum line length: 88 characters (Black formatter default)
* Use meaningful variable and function names
* Add docstrings to functions and classes

### C Style

* Use tabs for indentation (4-space tab width)
* Follow K&R style for braces
* Use descriptive variable names
* Add comments for complex logic
* Include function documentation

### Commit Messages

* Use the present tense ("Add feature" not "Added feature")
* Use the imperative mood ("Move cursor to..." not "Moves cursor to...")
* Limit the first line to 72 characters or less
* Reference issues and pull requests when relevant

## Documentation

* Update the README.md if you change functionality
* Add or update documentation in the `docs/` directory
* Include inline comments for complex code
* Update examples if you change APIs

## Testing

* Write unit tests for new functionality
* Ensure existing tests still pass
* Aim for good test coverage
* Test on multiple platforms when possible

## Questions?

Feel free to open an issue with your question or reach out to the maintainers.

Thank you for contributing!
