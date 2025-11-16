# Setup Guide

This guide will help you set up your development environment for working with Python and C projects.

## Prerequisites

- A computer running Windows, macOS, or Linux
- Internet connection for downloading tools
- Basic familiarity with command line/terminal

## Step 1: Install Visual Studio Code

1. Visit [https://code.visualstudio.com/](https://code.visualstudio.com/)
2. Download the installer for your operating system
3. Run the installer and follow the prompts
4. Launch VS Code after installation

**Try it:** Open VS Code and press `Ctrl+Shift+P` (Windows/Linux) or `Cmd+Shift+P` (macOS) to open the Command Palette.

## Step 2: Install Python

### Windows
1. Visit [https://www.python.org/downloads/](https://www.python.org/downloads/)
2. Download Python 3.10 or later
3. Run the installer
4. **Important:** Check "Add Python to PATH" during installation
5. Verify: Open Command Prompt and type `python --version`

### macOS
```bash
# Using Homebrew (recommended)
brew install python3

# Verify installation
python3 --version
```

### Linux
```bash
# Ubuntu/Debian
sudo apt update
sudo apt install python3 python3-pip

# Fedora
sudo dnf install python3 python3-pip

# Verify installation
python3 --version
```

**Try it:** Open a terminal and run `python --version` (or `python3 --version` on macOS/Linux).

## Step 3: Install C Compiler (GCC)

### Windows
1. Install MinGW-w64 from [https://www.mingw-w64.org/](https://www.mingw-w64.org/)
2. Or use WSL (Windows Subsystem for Linux) for a Linux environment
3. Add the compiler to your PATH

### macOS
```bash
# Install Xcode Command Line Tools
xcode-select --install
```

### Linux
```bash
# Ubuntu/Debian
sudo apt install build-essential gdb

# Fedora
sudo dnf install gcc gcc-c++ make gdb
```

**Try it:** Open a terminal and run `gcc --version`.

## Step 4: Install Git

### Windows
1. Download from [https://git-scm.com/download/win](https://git-scm.com/download/win)
2. Run the installer with default options

### macOS
```bash
# Using Homebrew
brew install git
```

### Linux
```bash
# Ubuntu/Debian
sudo apt install git

# Fedora
sudo dnf install git
```

**Try it:** Run `git --version` in your terminal.

## Step 5: Clone This Repository

```bash
# Clone the repository
git clone https://github.com/JayBinYah/supreme-tribble.git

# Navigate into the directory
cd supreme-tribble

# Open in VS Code
code .
```

## Step 6: Install VS Code Extensions

When you open the project in VS Code, you should see a notification asking if you want to install recommended extensions. Click "Install All" or install them manually:

1. Open Extensions view (`Ctrl+Shift+X` or `Cmd+Shift+X`)
2. Search and install:
   - Python (ms-python.python)
   - Debugpy (ms-python.debugpy)
   - C/C++ (ms-vscode.cpptools)
   - EditorConfig (editorconfig.editorconfig)
   - Code Spell Checker (streetsidesoftware.code-spell-checker)
   - GitHub Copilot (github.copilot) - Optional
   - GitHub Copilot Chat (github.copilot-chat) - Optional
   - GitHub Actions (github.vscode-github-actions) - Optional

**Try it:** Press `Ctrl+Shift+X` to open the Extensions view and verify all extensions are installed.

## Step 7: Install Python Dependencies

```bash
# Install pytest for testing
pip install pytest

# Or on macOS/Linux
pip3 install pytest
```

**Try it:** Run `pytest --version` to verify installation.

## Step 8: Verify Everything Works

### Test Python
```bash
python src/python/main.py
# or
python3 src/python/main.py
```

### Test C
```bash
cd src/c
make
./main
make clean
```

### Run Tests
```bash
pytest tests/ -v
```

**Try it:** Run all the commands above to ensure everything is working correctly.

## Troubleshooting

### Python not found
- Make sure Python is added to your PATH
- Restart your terminal/VS Code after installation
- Try `python3` instead of `python` on macOS/Linux

### GCC not found
- Verify compiler installation with `gcc --version`
- Check that compiler directory is in your PATH
- On Windows, consider using WSL for easier setup

### VS Code extensions not working
- Reload VS Code window (`Ctrl+Shift+P` → "Reload Window")
- Check extension requirements
- Update VS Code to the latest version

## Next Steps

- Read [02-editor.md](02-editor.md) to learn about VS Code features
- Check out [03-debugging.md](03-debugging.md) to learn debugging
- Review [04-git.md](04-git.md) for Git workflow tips
