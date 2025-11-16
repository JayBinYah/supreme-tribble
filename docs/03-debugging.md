# Debugging Guide

Learn how to debug Python and C programs effectively in VS Code.

## Why Debug?

Debugging helps you:
- Find and fix bugs faster
- Understand how code executes
- Inspect variable values at runtime
- Step through code line-by-line
- Test different scenarios

## Debugging Basics

### Key Concepts
- **Breakpoint**: A marker that pauses execution at a specific line
- **Step Over**: Execute current line and move to next
- **Step Into**: Enter a function call to debug it
- **Step Out**: Finish current function and return to caller
- **Continue**: Resume execution until next breakpoint or end
- **Watch**: Monitor specific variable values
- **Call Stack**: Shows the path of function calls

## Setting Up Debugging

Debug configurations are in `.vscode/launch.json`. This project includes:
- **Python: Current File** - Debug the currently open Python file
- **Python: Main** - Debug `src/python/main.py`
- **C: Debug** - Debug the compiled C program

## Python Debugging

### Starting a Debug Session

**Method 1: Using Debug Panel**
1. Open a Python file (e.g., `src/python/main.py`)
2. Click Debug icon in Activity Bar (or `Ctrl+Shift+D`)
3. Select "Python: Current File" from dropdown
4. Click green play button (or press `F5`)

**Method 2: Using F5**
1. Open a Python file
2. Press `F5`
3. Select "Python" if prompted

**Try it:** Open `src/python/main.py` and press `F5`.

### Setting Breakpoints

1. Click in the gutter (left of line numbers) to add a red dot
2. Or place cursor on line and press `F9`
3. Run debugger - execution will pause at breakpoint

**Try it:** Set a breakpoint in `greet()` function and run the debugger.

### Debug Controls

When paused at a breakpoint, use these controls:
- **Continue** (`F5`): Resume until next breakpoint
- **Step Over** (`F10`): Execute current line
- **Step Into** (`F11`): Enter function call
- **Step Out** (`Shift+F11`): Exit current function
- **Restart** (`Ctrl+Shift+F5`): Restart debugging
- **Stop** (`Shift+F5`): Stop debugging

**Try it:** Use Step Over (`F10`) to step through the code line by line.

### Inspecting Variables

**Variables Panel**
- Automatically shows all local variables
- Expand objects to see their properties
- Hover over variables in editor to see values

**Watch Panel**
- Add expressions to monitor continuously
- Click `+` in Watch panel
- Enter variable name or expression (e.g., `len(name)`)

**Debug Console**
- Type expressions to evaluate them
- Call functions to test behavior
- View: Debug Console at bottom panel

**Try it:** While paused, hover over variables and add a watch expression.

### Conditional Breakpoints

Break only when a condition is true:
1. Right-click on breakpoint (or gutter)
2. Select "Edit Breakpoint"
3. Choose "Expression" and enter condition (e.g., `name == "Alice"`)

**Try it:** Add a conditional breakpoint that only triggers for a specific input.

### Logpoints

Print messages without modifying code:
1. Right-click in gutter
2. Select "Add Logpoint"
3. Enter message with `{variable}` for values

**Try it:** Add a logpoint like `Name is {name}` in the greet function.

## C Debugging

### Prerequisites

- C program must be compiled with debug symbols (`-g` flag)
- GDB must be installed (Linux/macOS) or MinGW-GDB (Windows)
- Our Makefile includes `-g` automatically

### Starting C Debug Session

1. Open Debug panel (`Ctrl+Shift+D`)
2. Select "C: Debug" from dropdown
3. Click green play button
4. Program builds automatically (preLaunchTask) then starts debugging

**Try it:** Select "C: Debug" and press `F5`.

### C Debugging Features

**Breakpoints**
- Set breakpoints same as Python (click gutter or `F9`)
- Work on any line with executable code

**Variables**
- View local variables, function parameters
- Expand arrays and structs
- Pointers show memory addresses

**Memory Inspection**
- Use Debug Console to inspect memory
- Example: `-exec x/10xb <address>` (10 bytes in hex)

**Call Stack**
- Shows function call hierarchy
- Click to jump to different stack frames

**Try it:** Set a breakpoint in `main()` and inspect the `argc` and `argv` variables.

### Common C Debugging Commands

In Debug Console:
```
-exec print variable_name    # Print variable
-exec print *pointer         # Dereference pointer
-exec info locals            # List local variables
-exec backtrace              # Full call stack
```

**Try it:** While paused, use Debug Console to print variables.

## Advanced Debugging Techniques

### Multi-file Debugging

1. Set breakpoints in multiple files
2. Debugger stops at each breakpoint in order
3. Use call stack to navigate between files

### Exception Breakpoints (Python)

Break when exceptions are raised:
1. Open Debug panel
2. Look for "Breakpoints" section
3. Check boxes for exception types to catch

### Post-Mortem Debugging (Python)

Debug after a crash:
```python
import pdb
import sys

def main():
    try:
        # your code
    except:
        import pdb; pdb.post_mortem()
```

### Debug Unit Tests

**Python Tests**
1. Open test file
2. Click "Debug Test" code lens above test
3. Or use Test Explorer in Activity Bar

**Try it:** Open `tests/test_main.py` and debug a test.

## Debugging Best Practices

### 1. Use Logging for Long-Running Code
Debuggers can be slow for long-running code. Use print statements or logging.

### 2. Minimize Breakpoint Usage
Too many breakpoints slow down debugging. Use them strategically.

### 3. Reproduce the Bug First
Ensure you can consistently reproduce the issue before debugging.

### 4. Binary Search for Bugs
If unsure where bug is, set breakpoint in middle of code path, then narrow down.

### 5. Check Assumptions
Use watches and debug console to verify your assumptions about the code.

### 6. Read the Call Stack
The call stack shows how you got to current point - very helpful for understanding flow.

## Common Debugging Scenarios

### Scenario 1: Function Returns Wrong Value
1. Set breakpoint at start of function
2. Step through line by line
3. Watch return value variable
4. Identify where it gets wrong value

### Scenario 2: Unexpected Program Flow
1. Set breakpoints at decision points (if/else, loops)
2. Step through and check conditions
3. Verify logic is correct

### Scenario 3: Null/None Values
1. Set breakpoint where error occurs
2. Work backward through call stack
3. Find where null/None was introduced

### Scenario 4: Loop Issues
1. Set breakpoint inside loop
2. Watch loop variables
3. Use conditional breakpoint for specific iterations
4. Check loop termination condition

**Try it:** Create a simple bug in your code and practice finding it with the debugger.

## Debugging Tips

1. **Start Simple**: Add print statements before diving into debugger
2. **Rubber Duck**: Explain code out loud - often reveals bugs
3. **Take Breaks**: Fresh eyes catch bugs faster
4. **Test Edge Cases**: Debug with unusual inputs
5. **Use Git**: Bisect to find when bug was introduced
6. **Read Error Messages**: They often tell you exactly what's wrong

## Troubleshooting Debugger Issues

### Python Debugger Won't Start
- Ensure Python extension is installed
- Check Python interpreter is selected (bottom-left in VS Code)
- Verify debugpy is installed: `pip install debugpy`
- Reload VS Code window

### C Debugger Won't Start
- Ensure program compiles successfully
- Check GDB is installed: `gdb --version`
- Verify `-g` flag in Makefile
- Update launch.json paths if needed

### Breakpoints Not Working
- Check file is saved
- Ensure code is reachable
- Try rebuilding (C) or restarting debug session
- Verify no syntax errors

### Variables Not Showing
- Ensure execution is paused
- Check variable is in scope
- For optimized builds (C), some variables may be optimized out

## Practice Exercises

1. **Exercise 1**: Set a breakpoint in `greet()`, run debugger, and step through function
2. **Exercise 2**: Add a watch for variable values and observe them change
3. **Exercise 3**: Use conditional breakpoint to stop only when input is specific value
4. **Exercise 4**: Debug C program and inspect argv array
5. **Exercise 5**: Debug a failing test and fix the bug

## Next Steps

- Review [04-git.md](04-git.md) to learn Git workflow
- Practice debugging your own code
- Explore debugger settings in launch.json
- Learn GDB commands for advanced C debugging
