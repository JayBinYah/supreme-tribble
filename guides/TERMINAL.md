# Terminal Guide

The integrated terminal in VS Code lets you run commands without leaving your editor. This guide will help you master terminal usage.

## 🖥️ What is the Integrated Terminal?

The integrated terminal is a command-line interface built into VS Code. It lets you:
- Run Python and C programs
- Use Git commands
- Install packages
- Build projects
- Navigate your file system

## 🚀 Opening the Terminal

### Methods to Open Terminal

1. **Keyboard shortcut**: `Ctrl+`` ` (backtick) or `Ctrl+J`
2. **Menu**: View → Terminal
3. **Command Palette**: Ctrl+Shift+P → "Terminal: Create New Terminal"

### Terminal Shortcuts

- `Ctrl+Shift+`` ` - Create new terminal
- `Ctrl+Shift+5` - Split terminal
- `Alt+Left/Right` - Switch between terminals
- `Ctrl+C` - Cancel running command
- `Ctrl+L` or `clear` - Clear terminal

## 📂 Terminal Basics

### Current Directory

When you open a terminal, it starts in your workspace folder:
```bash
# Check current directory
pwd

# List files
ls        # macOS/Linux
dir       # Windows
```

### Navigating Directories

```bash
# Change to python-starter directory
cd python-starter

# Go back to parent directory
cd ..

# Go to home directory
cd ~

# Go to workspace root
cd /home/runner/work/supreme-tribble/supreme-tribble
```

### Working with Files

```bash
# Create a new file
touch newfile.py    # macOS/Linux
echo. > newfile.py  # Windows

# View file contents
cat filename.py     # macOS/Linux
type filename.py    # Windows

# Copy file
cp source.py dest.py       # macOS/Linux
copy source.py dest.py     # Windows

# Remove file
rm filename.py      # macOS/Linux
del filename.py     # Windows
```

## 🐍 Python in Terminal

### Running Python Programs

```bash
# Run a Python file
python3 hello.py

# Or use python (depending on your setup)
python hello.py

# Check Python version
python3 --version

# Start Python REPL (interactive mode)
python3
>>> print("Hello!")
>>> exit()
```

### Installing Python Packages

```bash
# Install a package
pip3 install package-name

# Install from requirements.txt
pip3 install -r requirements.txt

# List installed packages
pip3 list

# Uninstall a package
pip3 uninstall package-name
```

### Virtual Environments (Advanced)

```bash
# Create a virtual environment
python3 -m venv venv

# Activate it
source venv/bin/activate  # macOS/Linux
venv\Scripts\activate     # Windows

# Deactivate
deactivate
```

## 🔧 C/C++ in Terminal

### Compiling and Running C Programs

```bash
# Navigate to c-starter
cd c-starter

# Compile with gcc
gcc -Wall -Wextra -std=c11 -o hello hello.c

# Run the compiled program
./hello     # macOS/Linux
hello.exe   # Windows

# Or use make (recommended)
make
make hello

# Run all programs
make run-all

# Clean compiled files
make clean
```

### Understanding Compiler Flags

```bash
# Basic compilation
gcc hello.c -o hello

# With warnings
gcc -Wall hello.c -o hello

# With debugging symbols
gcc -g hello.c -o hello

# Specify C standard
gcc -std=c11 hello.c -o hello
```

## 🎨 Customizing Your Terminal

### Multiple Terminals

Create multiple terminals for different tasks:
1. Click the `+` icon in terminal tab bar
2. Or use `Ctrl+Shift+`` `
3. Name terminals: Right-click → "Rename"

**Use Cases:**
- Terminal 1: Run Python programs
- Terminal 2: Build C programs
- Terminal 3: Git commands

### Split Terminal

Split your terminal to see multiple at once:
1. Click the split icon (⊞)
2. Or use `Ctrl+Shift+5`

### Terminal Profiles

Switch between different shells:
1. Click the dropdown arrow next to `+`
2. Select: Bash, PowerShell, Command Prompt, etc.

### Terminal Settings

Customize appearance:
1. File → Preferences → Settings
2. Search "terminal"
3. Modify:
   - Font size
   - Cursor style
   - Colors

## 💡 Useful Terminal Commands

### System Information

```bash
# Current user
whoami

# System information
uname -a        # macOS/Linux
systeminfo      # Windows

# Disk usage
df -h           # macOS/Linux
```

### Process Management

```bash
# List running processes
ps              # macOS/Linux
tasklist        # Windows

# Kill a process
kill PID        # macOS/Linux
taskkill /PID   # Windows

# Stop current command
Ctrl+C
```

### Search and Filter

```bash
# Search for text in file
grep "search_term" filename.py

# Find files
find . -name "*.py"     # macOS/Linux
dir /s *.py             # Windows

# Pipe output
ls | grep ".py"
```

## 🎯 Terminal Tasks

VS Code can run pre-configured tasks from the terminal.

### Running Tasks

1. **Keyboard**: `Ctrl+Shift+B` for default build task
2. **Command Palette**: Ctrl+Shift+P → "Tasks: Run Task"
3. **Terminal Menu**: Terminal → Run Task

### Pre-configured Tasks

This workspace includes tasks for:
- Building all C programs (`build-all-c`)
- Building individual C programs
- Running Python files
- Cleaning build artifacts

### Running a Task

```
Ctrl+Shift+P → "Tasks: Run Task" → Select task
```

## 🎓 Practice Exercises

1. **Basic Navigation**:
   ```bash
   cd python-starter
   ls
   cat hello.py
   cd ..
   ```

2. **Run Python**:
   ```bash
   cd python-starter
   python3 hello.py
   ```

3. **Build C Program**:
   ```bash
   cd c-starter
   make hello
   ./hello
   make clean
   ```

4. **Multiple Terminals**:
   - Open 2 terminals
   - In terminal 1: cd python-starter
   - In terminal 2: cd c-starter
   - Switch between them with Alt+1, Alt+2

5. **Split Terminal**:
   - Split terminal (Ctrl+Shift+5)
   - Run different commands in each

## 📚 Next Steps

Now that you know the terminal:
1. ✅ Terminal basics mastered!
2. → Learn about [Git Integration](GIT.md)
3. → Explore [Debugging](DEBUGGING.md)

## 🆘 Troubleshooting

**Problem**: Command not found
- **Solution**: Check if the program is installed (e.g., `python3 --version`)
- Make sure you're in the correct directory

**Problem**: Permission denied
- **Solution**: Use `sudo` on macOS/Linux (be careful!)
- Or check file permissions: `ls -l`

**Problem**: Terminal is frozen
- **Solution**: Press Ctrl+C to cancel current command
- If stuck, close and reopen terminal

**Problem**: Can't see terminal output
- **Solution**: Scroll up in terminal
- Or clear terminal: `Ctrl+L` or type `clear`

## 📖 Additional Resources

- [Terminal Basics](https://code.visualstudio.com/docs/terminal/basics)
- [Command Line Interface Guidelines](https://clig.dev/)
- [Linux Command Line](https://ubuntu.com/tutorials/command-line-for-beginners)
- [Windows Command Line](https://docs.microsoft.com/en-us/windows-server/administration/windows-commands/windows-commands)
