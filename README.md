# supreme-tribble

A learning repository for exploring programming concepts in Python and C.

## 🎯 Learning Path

This repository is designed to help you learn programming fundamentals through hands-on examples:

1. **Python Basics** - Start with Python to understand core programming concepts
   - Variables, data types, and control flow
   - Functions and modules
   - Object-oriented programming
   - Unit testing with pytest

2. **C Fundamentals** - Dive deeper into systems programming
   - Memory management and pointers
   - Data structures
   - Compilation and linking
   - Unit testing with a simple test framework

3. **Best Practices** - Learn industry-standard development workflows
   - Version control with Git
   - Code documentation
   - Testing strategies
   - Contributing to open source

## 🚀 Quickstart

### Prerequisites

- Python 3.8 or higher
- GCC compiler for C programs
- Git for version control

### Setup

1. Clone the repository:
   ```bash
   git clone https://github.com/JayBinYah/supreme-tribble.git
   cd supreme-tribble
   ```

2. Set up Python environment:
   ```bash
   cd src/python
   python -m venv venv
   source venv/bin/activate  # On Windows: venv\Scripts\activate
   pip install -r requirements.txt
   ```

3. Run Python examples:
   ```bash
   python hello_world.py
   pytest tests/
   ```

4. Build and run C examples:
   ```bash
   cd ../c
   make
   ./hello_world
   make test
   ```

## 📚 Documentation

Detailed step-by-step guides are available in the [docs/](docs/) directory:

- [Getting Started](docs/getting-started.md)
- [Python Guide](docs/python-guide.md)
- [C Programming Guide](docs/c-guide.md)
- [Testing Guide](docs/testing-guide.md)

## 🤝 Contributing

We welcome contributions! Please see our [Contributing Guidelines](CONTRIBUTING.md) and [Code of Conduct](CODE_OF_CONDUCT.md).

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
