# VS Code Editor Guide

Learn how to use Visual Studio Code effectively for Python and C development.

## Interface Overview

- **Activity Bar** (left): Quick access to Explorer, Search, Source Control, Debug, Extensions
- **Side Bar**: Shows different views based on Activity Bar selection
- **Editor**: Where you write code (supports multiple tabs and split views)
- **Panel** (bottom): Terminal, Problems, Output, Debug Console
- **Status Bar** (bottom): Shows current file info, Git branch, errors/warnings

**Try it:** Click each icon in the Activity Bar to see different views.

## Essential Keyboard Shortcuts

### General
- `Ctrl+Shift+P` / `Cmd+Shift+P`: Command Palette (access all commands)
- `Ctrl+P` / `Cmd+P`: Quick file open
- `Ctrl+,` / `Cmd+,`: Open Settings
- `Ctrl+`` / `Cmd+``: Toggle integrated terminal

### Editing
- `Ctrl+/` / `Cmd+/`: Toggle line comment
- `Alt+Up/Down` / `Opt+Up/Down`: Move line up/down
- `Shift+Alt+Up/Down` / `Shift+Opt+Up/Down`: Copy line up/down
- `Ctrl+D` / `Cmd+D`: Select next occurrence (multi-cursor)
- `Ctrl+Shift+K` / `Cmd+Shift+K`: Delete line
- `F2`: Rename symbol

### Navigation
- `Ctrl+G` / `Cmd+G`: Go to line
- `Ctrl+Tab`: Switch between open files
- `Alt+Left/Right` / `Cmd+Left/Right`: Navigate back/forward
- `Ctrl+Shift+O` / `Cmd+Shift+O`: Go to symbol in file

**Try it:** Open `src/python/main.py` and practice these shortcuts.

## File Explorer

- **Open File**: Click once to preview, double-click to open
- **New File/Folder**: Right-click in Explorer
- **Search**: Click Search icon in Activity Bar or press `Ctrl+Shift+F`
- **Collapse All**: Click collapse icon at top of Explorer

**Try it:** Create a new file in the Explorer, then delete it.

## Integrated Terminal

The integrated terminal lets you run commands without leaving VS Code.

### Opening Terminal
- Menu: Terminal → New Terminal
- Shortcut: `Ctrl+`` or `Cmd+``
- Command Palette: "Terminal: Create New Terminal"

### Multiple Terminals
- Create multiple terminals with the `+` icon
- Switch between them using the dropdown
- Split terminal with the split icon

### Terminal Types
- On Windows: PowerShell, Command Prompt, Git Bash, WSL
- On macOS/Linux: bash, zsh, fish, etc.
- Change default: Command Palette → "Terminal: Select Default Profile"

**Try it:** Open a terminal and run `python --version` and `gcc --version`.

## IntelliSense & Code Completion

IntelliSense provides smart code completions based on:
- Variable types
- Function definitions
- Imported modules
- Language syntax

### Using IntelliSense
- Start typing and suggestions appear automatically
- Press `Ctrl+Space` to manually trigger suggestions
- Use arrow keys to navigate, `Enter` to accept
- Press `.` after an object to see its methods/properties

**Try it:** In `main.py`, type `import ` and see module suggestions.

## Code Formatting

Code is automatically formatted on save (configured in `.vscode/settings.json`).

### Manual Formatting
- Right-click → Format Document
- Shortcut: `Shift+Alt+F` / `Shift+Opt+F`
- Command Palette: "Format Document"

### Formatters
- **Python**: Uses Python extension's built-in formatter
- **C**: Uses clang-format with Google style

**Try it:** Add some messy spacing in your code, then save the file to see it auto-format.

## Code Navigation

### Go to Definition
- `F12`: Jump to definition
- `Alt+F12` / `Opt+F12`: Peek definition (inline view)
- `Ctrl+Click` / `Cmd+Click`: Quick jump

### Find All References
- `Shift+F12`: Show all references
- Right-click → Find All References

### Go to Symbol
- `Ctrl+Shift+O` / `Cmd+Shift+O`: List all symbols in current file
- `Ctrl+T` / `Cmd+T`: List all symbols in workspace

**Try it:** In `main.py`, place cursor on `greet` function and press F12.

## Multi-Cursor Editing

Edit multiple locations simultaneously:
- `Ctrl+D` / `Cmd+D`: Select next occurrence
- `Ctrl+Shift+L` / `Cmd+Shift+L`: Select all occurrences
- `Alt+Click` / `Opt+Click`: Add cursor at click position
- `Ctrl+Alt+Up/Down` / `Cmd+Opt+Up/Down`: Add cursor above/below

**Try it:** Select a word, press `Ctrl+D` multiple times, then type to edit all occurrences.

## Split Editor

Work on multiple files side-by-side:
- Drag file tab to the side to split
- `Ctrl+\` / `Cmd+\`: Split editor
- `Ctrl+1/2/3` / `Cmd+1/2/3`: Focus editor group

**Try it:** Open two files and split them side-by-side.

## Tasks (Build & Run)

Tasks are configured in `.vscode/tasks.json`.

### Running Tasks
- Menu: Terminal → Run Task
- Shortcut: `Ctrl+Shift+B` (default build task)
- Command Palette: "Tasks: Run Task"

### Available Tasks
- **build:c**: Compile C program
- **run:c**: Build and run C program
- **run:python**: Run Python main script
- **test:python**: Run pytest tests
- **clean**: Clean C build artifacts

**Try it:** Press `Ctrl+Shift+B` to run the default build task.

## Problems Panel

The Problems panel shows errors and warnings:
- View: View → Problems or `Ctrl+Shift+M`
- Click on problem to jump to location
- Problems update as you type

**Try it:** Add a syntax error in your code and watch it appear in Problems panel.

## Source Control (Git)

### Basic Operations
- Source Control view: Click icon in Activity Bar or `Ctrl+Shift+G`
- Stage changes: Click `+` next to file
- Commit: Type message and click ✓
- Push/Pull: Click `...` menu

### Inline Git
- Line changes shown in editor gutter
- View diff: Click on changed line
- Hover over changes for actions

**Try it:** Make a change to any file and view it in the Source Control view.

## Settings & Preferences

### Types of Settings
- **User Settings**: Apply to all VS Code projects
- **Workspace Settings**: Apply to current project only
- Settings stored in `.vscode/settings.json`

### Opening Settings
- Menu: File → Preferences → Settings
- Shortcut: `Ctrl+,` / `Cmd+,`
- Command Palette: "Preferences: Open Settings"

### Key Settings to Know
- `editor.formatOnSave`: Auto-format when saving
- `files.trimTrailingWhitespace`: Remove trailing spaces
- `python.analysis.typeCheckingMode`: Python type checking level

**Try it:** Open Settings and search for "format on save".

## Extensions

Extensions add new features to VS Code.

### Managing Extensions
- Open Extensions view: `Ctrl+Shift+X` / `Cmd+Shift+X`
- Search for extensions
- Click Install to add them
- Recommended extensions listed in `.vscode/extensions.json`

### Useful Extension Features
- **Python**: IntelliSense, linting, debugging, testing
- **C/C++**: IntelliSense, debugging, formatting
- **EditorConfig**: Consistent formatting across editors
- **Code Spell Checker**: Catch typos in code and comments

**Try it:** Open the Extensions view and explore the installed extensions.

## Tips & Tricks

1. **Command Palette is your friend**: If you don't know a shortcut, open Command Palette
2. **Zen Mode**: `Ctrl+K Z` for distraction-free coding
3. **Breadcrumbs**: Navigate file structure at top of editor
4. **Minimap**: Quick navigation for large files (right side of editor)
5. **Settings Sync**: Sign in to sync settings across machines

## Next Steps

- Learn about debugging in [03-debugging.md](03-debugging.md)
- Review Git workflow in [04-git.md](04-git.md)
- Practice using the features in your own code
