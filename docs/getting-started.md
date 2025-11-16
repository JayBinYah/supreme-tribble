# Getting Started with supreme-tribble

Welcome! This guide will help you get started with the supreme-tribble learning repository.

## Prerequisites

Before you begin, make sure you have the following installed:

### Required Software

1. **Git** - Version control system
   - Windows: Download from [git-scm.com](https://git-scm.com/)
   - macOS: Install via Homebrew: `brew install git`
   - Linux: `sudo apt-get install git` (Ubuntu/Debian) or `sudo yum install git` (RHEL/CentOS)

2. **Python 3.8+** - For Python examples
   - Download from [python.org](https://www.python.org/downloads/)
   - Verify installation: `python --version` or `python3 --version`

3. **GCC Compiler** - For C examples
   - Windows: Install MinGW or use WSL
   - macOS: Install Xcode Command Line Tools: `xcode-select --install`
   - Linux: `sudo apt-get install build-essential` (Ubuntu/Debian)

### Optional Software

- **VS Code** - Recommended IDE with great support for Python and C
- **GDB** - Debugger for C programs (usually comes with GCC)

## Installation Steps

### 1. Clone the Repository

```bash
git clone https://github.com/JayBinYah/supreme-tribble.git
cd supreme-tribble
```

### 2. Set Up Python Environment

Create a virtual environment to isolate project dependencies:

```bash
cd src/python
python -m venv venv
```

Activate the virtual environment:

- **Linux/macOS**: `source venv/bin/activate`
- **Windows**: `venv\Scripts\activate`

Install dependencies:

```bash
pip install -r requirements.txt
```

### 3. Test Python Setup

Run the sample program:

```bash
python hello_world.py
```

Run the tests:

```bash
pytest tests/ -v
```

### 4. Test C Setup

Navigate to the C directory:

```bash
cd ../c
```

Build the programs:

```bash
make
```

Run a sample program:

```bash
./hello_world
```

Run the tests:

```bash
make test
```

## Repository Structure

```
supreme-tribble/
├── docs/                   # Documentation
│   ├── getting-started.md  # This file
│   ├── python-guide.md     # Python learning guide
│   ├── c-guide.md          # C learning guide
│   └── testing-guide.md    # Testing best practices
├── src/
│   ├── python/             # Python examples
│   │   ├── hello_world.py
│   │   ├── calculator.py
│   │   └── tests/          # Python unit tests
│   └── c/                  # C examples
│       ├── hello_world.c
│       ├── calculator.c
│       └── tests/          # C unit tests
├── .vscode/                # VS Code configuration
├── .github/                # GitHub templates
├── README.md               # Project overview
├── CONTRIBUTING.md         # Contribution guidelines
└── CODE_OF_CONDUCT.md      # Community guidelines
```

## Next Steps

1. **Learn Python**: Start with the [Python Guide](python-guide.md)
2. **Learn C**: Move on to the [C Programming Guide](c-guide.md)
3. **Write Tests**: Learn about [Testing Best Practices](testing-guide.md)
4. **Contribute**: Read our [Contributing Guidelines](../CONTRIBUTING.md)

## Troubleshooting

### Python Issues

**Problem**: `python: command not found`
- **Solution**: Try `python3` instead, or ensure Python is in your PATH

**Problem**: Virtual environment activation fails
- **Solution**: Make sure you're in the correct directory and using the right activation command for your OS

### C Issues

**Problem**: `gcc: command not found`
- **Solution**: Install GCC using your system's package manager or development tools

**Problem**: Make command fails
- **Solution**: Ensure you have `make` installed: `sudo apt-get install make` (Linux) or install Xcode Command Line Tools (macOS)

### General Issues

**Problem**: Permission denied
- **Solution**: On Linux/macOS, you may need to use `chmod +x` to make scripts executable

## Getting Help

- Check the [documentation](.) for detailed guides
- Open an [issue](https://github.com/JayBinYah/supreme-tribble/issues) on GitHub
- Review the [contributing guidelines](../CONTRIBUTING.md)

Happy coding!
