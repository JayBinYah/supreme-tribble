# Debugging Guide

Debugging is essential for finding and fixing bugs in your code. VS Code has excellent debugging tools for both Python and C.

## 🐛 What is Debugging?

Debugging lets you:
- Pause code execution at specific points
- Inspect variable values
- Step through code line by line
- Find the cause of errors
- Understand how your code works

## 🚀 Getting Started

### Opening the Debug View

- **Keyboard**: `Ctrl+Shift+D` (or `Cmd+Shift+D` on Mac)
- **Click**: Run and Debug icon in Activity Bar (left sidebar)

### Debug Controls

When debugging, you'll see these controls:

- **Continue (F5)** - Resume execution until next breakpoint
- **Step Over (F10)** - Execute current line, stay in current function
- **Step Into (F11)** - Go into function calls
- **Step Out (Shift+F11)** - Return from current function
- **Restart (Ctrl+Shift+F5)** - Restart the debug session
- **Stop (Shift+F5)** - Stop debugging

## 🐍 Debugging Python

### Quick Start: Debug Current File

1. Open a Python file (e.g., `python-starter/hello.py`)
2. Press **F5**
3. Select "Python File" from the dropdown
4. Program runs with debugger attached

### Setting Breakpoints

**Breakpoint** = A place where execution pauses.

**How to set:**
1. Click in the left margin (gutter) next to a line number
2. A red dot appears
3. Click again to remove

**Conditional Breakpoints:**
- Right-click on a breakpoint
- "Edit Breakpoint..."
- Add condition (e.g., `x > 10`)

### Debug Configurations

Pre-configured debug configurations in `.vscode/launch.json`:

1. **Python: Current File** - Debug the file you have open
2. **Python: hello.py** - Debug hello.py specifically
3. **Python: functions.py** - Debug functions.py
4. **Python: data_structures.py** - Debug data_structures.py

**To use:**
1. Open Debug view (Ctrl+Shift+D)
2. Select configuration from dropdown
3. Press F5 or click green arrow

### Inspecting Variables

While debugging, view variables in:

**1. Variables Pane**
- Shows all local and global variables
- Expand objects to see their properties
- Right-click → "Copy Value"

**2. Hover in Editor**
- Hover over any variable
- See its current value

**3. Debug Console**
- Type variable names to see values
- Execute Python expressions
- Try calculations: `x + y`

### Watch Expressions

Track specific expressions:

1. In Debug view, find "Watch" section
2. Click `+` to add expression
3. Enter expression (e.g., `len(mylist)`)
4. Value updates as you debug

### Call Stack

Shows the sequence of function calls:
- Current function at the top
- Click to jump to that frame
- See how you got to current line

### Debug Console

Interactive Python console during debugging:

1. While paused at a breakpoint
2. Click "Debug Console" tab in panel
3. Type Python commands:
   ```python
   print(variable_name)
   variable_name = new_value
   some_function()
   ```

### Example: Debugging a Python Function

```python
def calculate_average(numbers):
    total = 0
    for num in numbers:
        total += num  # Set breakpoint here
    return total / len(numbers)

scores = [85, 92, 78]
result = calculate_average(scores)  # Start here
```

**Steps:**
1. Set breakpoint on `total += num`
2. Press F5
3. When paused, inspect:
   - `num` - Current number
   - `total` - Running total
   - `numbers` - Full list
4. Press F10 to step through loop
5. Watch `total` increase

## 🔧 Debugging C

### Prerequisites

- GCC compiler installed
- C/C++ extension installed
- Programs compiled with `-g` flag (already in Makefile)

### Setting Up C Debugging

The workspace already has C debug configurations in `.vscode/launch.json`:

1. **C: hello** - Debug hello program
2. **C: functions** - Debug functions program
3. **C: arrays** - Debug arrays program

### Debug C Program: Step by Step

**Example: Debug hello.c**

1. **Build the program first**:
   ```bash
   cd c-starter
   make hello
   ```

2. **Set a breakpoint**:
   - Open `c-starter/hello.c`
   - Click in gutter next to line (e.g., line with `printf`)

3. **Start debugging**:
   - Press F5
   - Or: Debug view → Select "C: hello" → Press F5

4. **Debug controls work the same**:
   - F10 to step over
   - F11 to step into functions
   - View variables in Variables pane

### C-Specific Debugging Features

**Memory View:**
- View memory addresses
- Inspect pointers
- See array contents

**Disassembly View:**
- View assembly code
- Understand low-level execution

**Registers:**
- View CPU register values
- Advanced debugging

### Debugging with GDB

The debugger uses GDB (or LLDB on Mac) under the hood.

**GDB Commands in Debug Console:**
```gdb
print variable_name      # Print variable value
print *pointer          # Dereference pointer
info locals             # Show local variables
backtrace              # Show call stack
```

### Common C Debugging Scenarios

**Debugging Pointers:**
```c
int *ptr = &value;
// Set breakpoint here
// Inspect 'ptr' (address) and '*ptr' (value)
```

**Debugging Arrays:**
```c
int arr[] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    printf("%d\n", arr[i]);  // Breakpoint here
    // Inspect 'i' and 'arr[i]'
}
```

**Debugging Segmentation Faults:**
1. Run with debugger
2. Program crashes and stops at problem line
3. Inspect variables to find the issue (usually NULL pointer or array bounds)

### Example: Debugging C Function

```c
int find_max(int arr[], int size) {
    int max = arr[0];  // Set breakpoint here
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // And here
        }
    }
    return max;
}
```

**Steps:**
1. Set breakpoints as shown
2. Press F5 to start debugging
3. Inspect:
   - `arr` - Array pointer
   - `size` - Array size
   - `max` - Current maximum
   - `i` - Loop counter
4. Step through to see algorithm work

## 💡 Debugging Tips

### Finding Bugs Faster

1. **Use breakpoints strategically**
   - Start where you suspect the bug
   - Work backwards if needed

2. **Check assumptions**
   - Verify input values
   - Confirm function returns expected values

3. **Watch key variables**
   - Add important variables to Watch

4. **Use conditional breakpoints**
   - Only break when something is wrong
   - Example: `score < 0` or `name == ""`

5. **Read error messages carefully**
   - They often point to the exact problem
   - Google the error if unclear

### Common Debugging Patterns

**Print Debugging (When debugger isn't available):**
```python
print(f"Debug: x = {x}, y = {y}")
```

**Binary Search Debugging:**
1. Set breakpoint in middle of suspicious code
2. Check if bug happened before or after
3. Narrow down location
4. Repeat

**Rubber Duck Debugging:**
- Explain your code line by line (to a rubber duck, or yourself)
- Often reveals the bug!

## 🎓 Practice Exercises

### Exercise 1: Debug Python Function

1. Open `python-starter/functions.py`
2. Set breakpoint in `calculate_average()` function
3. Press F5
4. Step through the function with F10
5. Watch how `sum` increases
6. Check the final calculation

### Exercise 2: Debug with Conditions

1. Open `python-starter/data_structures.py`
2. In `list_examples()`, set a conditional breakpoint:
   - Right-click in gutter
   - "Add Conditional Breakpoint"
   - Condition: `fruit == "cherry"`
3. Run the program
4. Breakpoint only hits for "cherry"

### Exercise 3: Debug C Program

1. Build C program: `cd c-starter && make functions`
2. Open `c-starter/functions.c`
3. Set breakpoint in `calculate_average()` function
4. Select "C: functions" from debug dropdown
5. Press F5
6. Inspect `numbers`, `count`, `sum`
7. Step through with F10

### Exercise 4: Fix a Bug

Add a bug to test your debugging skills:

```python
def buggy_function(x):
    result = x * 2
    result = result / 0  # BUG!
    return result
```

1. Run with debugger
2. Observe where it crashes
3. Fix the bug
4. Verify the fix

## 📚 Next Steps

Now that you can debug:
1. ✅ Debugging skills acquired!
2. → Learn about [Settings Sync](SETTINGS.md)
3. → Practice with the starter projects

## 🆘 Troubleshooting

**Problem**: F5 doesn't start debugging
- **Solution**: Make sure a file is open and saved
- Check that appropriate debug configuration is selected

**Problem**: "Cannot find program" error for C
- **Solution**: Build the program first with `make`
- Make sure executable name matches launch.json

**Problem**: Breakpoints are gray (not active)
- **Solution**: Code might not be reached
- Or file needs to be saved

**Problem**: Variables show "optimized out"
- **Solution**: Compile with `-g -O0` flags (already in Makefile)

**Problem**: Python debugger not stopping at breakpoints
- **Solution**: Make sure Python extension is installed
- Select correct interpreter (Ctrl+Shift+P → "Python: Select Interpreter")

**Problem**: GDB not found (C debugging)
- **Solution**: Install GDB:
  - Linux: `sudo apt-get install gdb`
  - macOS: Use LLDB (comes with Xcode)
  - Windows: Comes with MinGW

## 📖 Additional Resources

- [VS Code Python Debugging](https://code.visualstudio.com/docs/python/debugging)
- [VS Code C++ Debugging](https://code.visualstudio.com/docs/cpp/cpp-debug)
- [GDB Tutorial](https://www.gnu.org/software/gdb/documentation/)
- [Python Debugging Guide](https://realpython.com/python-debugging-pdb/)
