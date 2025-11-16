# Workspace Setup Guide

Welcome! This guide will help you set up your VS Code workspace for an optimal learning experience.

## 📋 What is a Workspace?

A workspace in VS Code is a collection of one or more folders that are opened together. This repository is already configured as a workspace with settings, tasks, and debugging configurations.

## 🚀 Opening the Workspace

1. **Clone the repository** (if you haven't already):
   ```bash
   git clone https://github.com/JayBinYah/supreme-tribble.git
   cd supreme-tribble
   ```

2. **Open in VS Code**:
   ```bash
   code .
   ```
   
   Or: File → Open Folder → Select the `supreme-tribble` folder

## 🎯 Key Workspace Features

### 1. File Explorer (Ctrl+Shift+E / Cmd+Shift+E)

The File Explorer shows your project structure:
- **c-starter/** - C programming examples
- **python-starter/** - Python programming examples
- **guides/** - Learning guides (you're reading one!)
- **.vscode/** - Workspace configuration files

**Tips:**
- Right-click to create new files/folders
- Drag and drop to move files
- Click the folder icon at the top to collapse all folders

### 2. Search (Ctrl+Shift+F / Cmd+Shift+F)

Find text across all files in your workspace:
- Type your search term
- Use the icons for case sensitivity and regex
- Click results to jump to that location

### 3. Source Control (Ctrl+Shift+G / Cmd+Shift+G)

Manage Git directly in VS Code (more in [Git Guide](GIT.md))

### 4. Run and Debug (Ctrl+Shift+D / Cmd+Shift+D)

Debug your programs (more in [Debugging Guide](DEBUGGING.md))

### 5. Extensions (Ctrl+Shift+X / Cmd+Shift+X)

Manage VS Code extensions (more in [Extensions Guide](EXTENSIONS.md))

## ⚙️ Workspace Settings

This workspace includes pre-configured settings in `.vscode/settings.json`:

- **Auto-save** - Your files are saved automatically after 1 second
- **Format on save** - Code is automatically formatted when you save
- **Bracket colorization** - Matching brackets are color-coded
- **Line rulers** - Visual guides at 80 and 120 characters
- **Tab size** - 4 spaces for both Python and C

### Customizing Settings

To modify settings:
1. Open Command Palette (Ctrl+Shift+P / Cmd+Shift+P)
2. Type "Preferences: Open Settings (UI)"
3. Search for the setting you want to change

Or edit `.vscode/settings.json` directly.

## 🎨 Customizing Your Workspace

### Color Theme

1. Ctrl+Shift+P / Cmd+Shift+P
2. Type "Color Theme"
3. Use arrow keys to preview themes
4. Press Enter to select

Popular themes:
- Dark+ (default)
- Light+
- Monokai
- Solarized Dark

### Icon Theme

The Material Icon Theme is recommended for better file recognition:
1. Ctrl+Shift+P / Cmd+Shift+P
2. Type "File Icon Theme"
3. Select "Material Icon Theme"

## 📁 Understanding the .vscode Folder

The `.vscode` folder contains workspace configuration:

- **settings.json** - Editor and language settings
- **launch.json** - Debugging configurations
- **tasks.json** - Build and run tasks
- **extensions.json** - Recommended extensions
- **c_cpp_properties.json** - C/C++ IntelliSense configuration

These files are shared with the repository so everyone has the same setup!

## 💡 Useful Keyboard Shortcuts

### Navigation
- `Ctrl+P` / `Cmd+P` - Quick Open (find files by name)
- `Ctrl+Tab` - Switch between open files
- `Alt+Left/Right` - Go back/forward in navigation history
- `Ctrl+G` - Go to line number

### Editing
- `Ctrl+/` / `Cmd+/` - Toggle line comment
- `Alt+Up/Down` - Move line up/down
- `Shift+Alt+Up/Down` - Copy line up/down
- `Ctrl+D` / `Cmd+D` - Select next occurrence of current word

### View
- `Ctrl+B` / `Cmd+B` - Toggle sidebar
- `Ctrl+J` / `Cmd+J` - Toggle panel (terminal, output, etc.)
- `Ctrl+`` ` - Toggle integrated terminal
- `F11` - Toggle full screen

## 🎓 Practice Exercise

1. **Open a file quickly**: Press Ctrl+P, type "hello", select `hello.py`
2. **Split editor**: Right-click on a tab → "Split Right"
3. **Open terminal**: Press Ctrl+` (backtick)
4. **Create a new file**: Click "New File" in Explorer or press Ctrl+N
5. **Search in workspace**: Press Ctrl+Shift+F, search for "main"

## 📚 Next Steps

Now that your workspace is set up:
1. ✅ You've completed workspace setup!
2. → Continue to [Extensions Guide](EXTENSIONS.md) to install helpful tools
3. → Then learn about [Terminal Usage](TERMINAL.md)

## 🆘 Troubleshooting

**Problem**: VS Code doesn't recognize Python/C files
- **Solution**: Install the recommended extensions (see [Extensions Guide](EXTENSIONS.md))

**Problem**: Settings aren't taking effect
- **Solution**: Reload VS Code (Ctrl+Shift+P → "Developer: Reload Window")

**Problem**: Can't find a file
- **Solution**: Use Ctrl+P and start typing the filename

## 📖 Additional Resources

- [VS Code User Interface](https://code.visualstudio.com/docs/getstarted/userinterface)
- [Basic Editing](https://code.visualstudio.com/docs/editor/codebasics)
- [Keyboard Shortcuts Reference](https://code.visualstudio.com/shortcuts/keyboard-shortcuts-windows.pdf)
