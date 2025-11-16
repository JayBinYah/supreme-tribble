# Extensions Guide

VS Code extensions add powerful features to your editor. This guide covers the essential extensions for Python and C development.

## 🔌 What Are Extensions?

Extensions are add-ons that enhance VS Code with new features like:
- Language support (syntax highlighting, IntelliSense)
- Debugging capabilities
- Code formatting and linting
- Git integration enhancements
- Themes and icons

## 📦 Installing Recommended Extensions

This workspace includes a list of recommended extensions. When you open this project, VS Code should prompt you to install them.

### Automatic Installation

1. Look for the notification in the bottom-right corner
2. Click "Install All" to install all recommended extensions
3. Wait for installation to complete (this may take a few minutes)

### Manual Installation

If you missed the prompt:

1. Press `Ctrl+Shift+X` (or `Cmd+Shift+X` on Mac) to open Extensions view
2. Look for the "WORKSPACE RECOMMENDATIONS" section
3. Click "Install" next to each extension

Or search for extensions individually (see list below).

## ⭐ Essential Extensions

### Python Development

#### 1. Python (by Microsoft)
**ID:** `ms-python.python`

The official Python extension provides:
- IntelliSense (code completion)
- Linting (error detection)
- Debugging
- Code formatting
- Jupyter notebook support

**Usage:**
- Auto-completes as you type
- Hover over functions to see documentation
- Right-click → "Format Document" to format code

#### 2. Pylance (by Microsoft)
**ID:** `ms-python.vscode-pylance`

Fast and feature-rich language server for Python:
- Type checking
- Auto-imports
- Better IntelliSense

**Usage:**
- Works automatically with the Python extension
- Shows type information on hover
- Helps catch errors before running code

### C/C++ Development

#### 3. C/C++ (by Microsoft)
**ID:** `ms-vscode.cpptools`

Essential for C programming:
- IntelliSense for C/C++
- Debugging with GDB/LLDB
- Code formatting
- Go to definition/declaration

**Usage:**
- Auto-completes C functions and variables
- F12 to go to function definition
- Right-click → "Format Document"

#### 4. Makefile Tools (by Microsoft)
**ID:** `ms-vscode.makefile-tools`

Provides support for Makefiles:
- IntelliSense for Makefile syntax
- Build target selection
- Integration with tasks

**Usage:**
- Syntax highlighting in Makefiles
- Makes working with the C projects easier

### AI-Powered Coding (Optional)

#### 5. GitHub Copilot (by GitHub)
**ID:** `github.copilot`

AI pair programmer that suggests code:
- Code completion suggestions
- Generates functions from comments
- Learns your coding style

**Note:** Requires a GitHub Copilot subscription (free for students!)

**Usage:**
- Write a comment describing what you want
- Copilot suggests code implementations
- Press Tab to accept suggestions

### Git Integration

#### 6. GitLens (by GitKraken)
**ID:** `eamodio.gitlens`

Supercharges Git capabilities:
- Blame annotations (who changed what)
- Commit history
- File history
- Branch comparison

**Usage:**
- Hover over code to see who wrote it
- Click on line numbers to see commit info
- View file history with "GitLens: Show File History"

### Code Quality

#### 7. Error Lens (by Alexander)
**ID:** `usernamehw.errorlens`

Displays errors inline as you type:
- Shows errors directly in your code
- Highlights entire lines with issues
- Makes debugging faster

**Usage:**
- Automatically shows errors and warnings
- No additional configuration needed

#### 8. Code Spell Checker (by Street Side Software)
**ID:** `streetsidesoftware.code-spell-checker`

Catches spelling mistakes:
- Spell checks comments and strings
- Suggests corrections
- Helps maintain professional code

**Usage:**
- Underlines misspelled words
- Right-click → "Spelling" to see suggestions

### Visual Enhancements

#### 9. Indent Rainbow (by oderwat)
**ID:** `oderwat.indent-rainbow`

Colorizes indentation:
- Makes code structure visible
- Helps catch indentation errors
- Especially useful for Python

**Usage:**
- Automatically colorizes indentation levels
- No configuration needed

#### 10. Material Icon Theme (by Philipp Kief)
**ID:** `pkief.material-icon-theme`

Better file icons:
- Recognizable icons for file types
- Easier to navigate projects
- Looks professional

**Usage:**
- Activate via Command Palette → "File Icon Theme"

## 🎯 Managing Extensions

### View Installed Extensions
Press `Ctrl+Shift+X` / `Cmd+Shift+X`

### Enable/Disable Extensions
1. Open Extensions view
2. Click the gear icon next to an extension
3. Select "Disable" or "Disable (Workspace)"

### Uninstall Extensions
1. Open Extensions view
2. Click the gear icon next to an extension
3. Select "Uninstall"

### Update Extensions
- Extensions auto-update by default
- Or click "Update" button when available

## 💡 Extension Tips

### Search for Extensions
- Use the search bar in Extensions view
- Filter by category (e.g., "Programming Languages")
- Sort by rating or install count

### Extension Settings
Each extension has its own settings:
1. Ctrl+Shift+P / Cmd+Shift+P
2. Type "Preferences: Open Settings (UI)"
3. Search for the extension name

### Recommended Extension Packs
For more comprehensive setups, search for:
- "Python Extension Pack"
- "C/C++ Extension Pack"

## 🎓 Practice Exercise

1. **View recommendations**: Open Extensions view → Check "WORKSPACE RECOMMENDATIONS"
2. **Install an extension**: Search for "Code Spell Checker" → Click Install
3. **Test it**: Open any file and type a misspelled word
4. **Explore settings**: Click gear icon on an extension → "Extension Settings"
5. **Disable/Enable**: Try disabling and re-enabling an extension

## 📚 Next Steps

Now that you have extensions installed:
1. ✅ Extensions are set up!
2. → Learn about [Terminal Usage](TERMINAL.md)
3. → Explore [Git Integration](GIT.md)

## 🆘 Troubleshooting

**Problem**: Extension not working
- **Solution**: Reload VS Code (Ctrl+Shift+P → "Developer: Reload Window")

**Problem**: Too many extension suggestions
- **Solution**: Disable less useful extensions in your workspace

**Problem**: Extensions slowing down VS Code
- **Solution**: Disable extensions you don't need or use Extension Bisect (Ctrl+Shift+P → "Help: Start Extension Bisect")

## 📖 Additional Resources

- [VS Code Extension Marketplace](https://marketplace.visualstudio.com/vscode)
- [Managing Extensions](https://code.visualstudio.com/docs/editor/extension-marketplace)
- [Extension API](https://code.visualstudio.com/api) (if you want to create extensions)
