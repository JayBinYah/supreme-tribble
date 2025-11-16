# Supreme Tribble

A beginner-friendly development environment setup for learning Python and C programming with Visual Studio Code.

## 🎯 Overview

This repository provides a complete, minimal, and runnable setup for learning software development fundamentals. It includes:

- **Python** development with testing (pytest)
- **C** development with Makefile
- **VS Code** configuration with recommended extensions
- **Debugging** configurations for both Python and C
- **Git** workflow templates
- **CI/CD** with GitHub Actions
- **Comprehensive documentation** for beginners

## 🚀 Quick Start

### Prerequisites
- [Visual Studio Code](https://code.visualstudio.com/)
- [Python 3.10+](https://www.python.org/downloads/)
- [GCC](https://gcc.gnu.org/) (C compiler)
- [Git](https://git-scm.com/)

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/JayBinYah/supreme-tribble.git
   cd supreme-tribble
   ```

2. **Open in VS Code**
   ```bash
   code .
   ```

3. **Install recommended extensions**
   - When prompted, click "Install All" for recommended extensions
   - Or manually install from Extensions view (`Ctrl+Shift+X`)

4. **Install Python dependencies**
   ```bash
   pip install pytest
   ```

5. **Verify setup**
   ```bash
   # Test Python
   python src/python/main.py
   
   # Test C
   cd src/c
   make
   ./main Alice Bob
   make clean
   
   # Run Python tests
   pytest tests/ -v
   ```

## 📚 Learning Modules

This repository is designed to help you learn by doing. Follow these modules in order:

### 1. Setup & Installation
- **Goal**: Get your development environment ready
- **Docs**: [docs/01-setup.md](docs/01-setup.md)
- **Key Skills**: Installing tools, configuring VS Code, running basic commands
- **Time**: 30-60 minutes

### 2. Editor Features
- **Goal**: Learn VS Code keyboard shortcuts and features
- **Docs**: [docs/02-editor.md](docs/02-editor.md)
- **Key Skills**: Navigation, editing, terminal usage, IntelliSense, tasks
- **Time**: 45-90 minutes
- **Practice**: Try all the "Try it" exercises in the guide

### 3. Debugging
- **Goal**: Master debugging Python and C programs
- **Docs**: [docs/03-debugging.md](docs/03-debugging.md)
- **Key Skills**: Breakpoints, stepping through code, inspecting variables, using debug console
- **Time**: 60-90 minutes
- **Practice**: Debug the provided example programs

### 4. Git & Version Control
- **Goal**: Learn Git fundamentals and GitHub workflow
- **Docs**: [docs/04-git.md](docs/04-git.md)
- **Key Skills**: Commits, branches, merges, pull requests, collaboration
- **Time**: 60-120 minutes
- **Practice**: Make changes and create a pull request

### 5. Settings Sync (Optional)
- **Goal**: Sync VS Code settings across devices
- **How**: Sign in to VS Code with GitHub account → Enable Settings Sync
- **Benefits**: Keep extensions, settings, and keybindings consistent

## 🗂️ Repository Structure

```
supreme-tribble/
├── .github/                    # GitHub configuration
│   ├── ISSUE_TEMPLATE/         # Bug report and feature request templates
│   │   ├── bug_report.md
│   │   └── feature_request.md
│   ├── PULL_REQUEST_TEMPLATE.md
│   └── workflows/
│       └── ci.yml              # Continuous Integration workflow
├── .vscode/                    # VS Code workspace settings
│   ├── extensions.json         # Recommended extensions
│   ├── settings.json           # Editor settings (format on save, etc.)
│   ├── launch.json             # Debug configurations
│   └── tasks.json              # Build and test tasks
├── docs/                       # Learning documentation
│   ├── 01-setup.md             # Installation and setup guide
│   ├── 02-editor.md            # VS Code features and shortcuts
│   ├── 03-debugging.md         # Debugging Python and C
│   └── 04-git.md               # Git workflow guide
├── src/                        # Source code
│   ├── c/
│   │   ├── main.c              # C program with argv handling
│   │   └── Makefile            # Build configuration
│   └── python/
│       └── main.py             # Python program with functions
├── tests/                      # Test files
│   └── test_main.py            # pytest unit tests
├── .editorconfig               # Editor configuration for consistency
├── .gitignore                  # Git ignore patterns
├── LICENSE                     # MIT License
└── README.md                   # This file
```

## 🛠️ Available Tasks

VS Code tasks are configured for common operations. Access them via:
- **Keyboard**: `Ctrl+Shift+P` → "Tasks: Run Task"
- **Keyboard**: `Ctrl+Shift+B` (default build task)
- **Menu**: Terminal → Run Task

### Task List
| Task | Description | Shortcut |
|------|-------------|----------|
| `build:c` | Compile C program | `Ctrl+Shift+B` (default) |
| `run:c` | Build and run C program | - |
| `run:python` | Run Python main script | - |
| `test:python` | Run pytest tests | - |
| `clean` | Remove C build artifacts | - |

## 🐛 Debugging Configurations

Pre-configured launch configurations for debugging:

### Python
- **Python: Current File** - Debug the currently open Python file
- **Python: Main** - Debug `src/python/main.py`

### C
- **C: Debug** - Debug compiled C program (builds automatically)

Access via Debug panel (`Ctrl+Shift+D`) or press `F5` to start debugging.

## ✅ Learning Checklists

### Setup Checklist
- [ ] VS Code installed and opened
- [ ] Recommended extensions installed
- [ ] Python working (`python --version`)
- [ ] GCC working (`gcc --version`)
- [ ] Git configured (`git config --list`)
- [ ] Repository cloned
- [ ] Python program runs successfully
- [ ] C program compiles and runs
- [ ] Tests pass (`pytest tests/ -v`)

### Editor Skills Checklist
- [ ] Can open Command Palette
- [ ] Can open files quickly with `Ctrl+P`
- [ ] Can use integrated terminal
- [ ] Can run tasks from task list
- [ ] Understand IntelliSense completions
- [ ] Can format code automatically
- [ ] Can split editor view
- [ ] Can navigate with keyboard shortcuts

### Debugging Skills Checklist
- [ ] Can set and remove breakpoints
- [ ] Can step through code (over, into, out)
- [ ] Can inspect variable values
- [ ] Can use watch expressions
- [ ] Can debug Python programs
- [ ] Can debug C programs
- [ ] Understand call stack
- [ ] Can use debug console

### Git Skills Checklist
- [ ] Can check status of files
- [ ] Can stage and commit changes
- [ ] Can view commit history
- [ ] Can create and switch branches
- [ ] Can merge branches
- [ ] Can push to remote
- [ ] Can create pull requests
- [ ] Can resolve merge conflicts

## 🎓 Learning Roadmap

### Phase 1: Foundations (Week 1-2)
**Goal**: Get comfortable with the tools

1. Complete setup (docs/01-setup.md)
2. Explore VS Code interface
3. Run existing Python and C programs
4. Make small modifications
5. Practice keyboard shortcuts

**Success Criteria**: Can navigate, edit, and run code confidently

### Phase 2: Editor Mastery (Week 3-4)
**Goal**: Become efficient with VS Code

1. Learn keyboard shortcuts (docs/02-editor.md)
2. Practice with tasks and terminal
3. Use IntelliSense effectively
4. Master multi-cursor editing
5. Customize your workspace

**Success Criteria**: Rarely use mouse for common operations

### Phase 3: Debugging Skills (Week 5-6)
**Goal**: Debug effectively

1. Learn debugging basics (docs/03-debugging.md)
2. Practice with breakpoints
3. Inspect variables and call stack
4. Debug Python tests
5. Debug C program with GDB

**Success Criteria**: Can quickly isolate and fix bugs

### Phase 4: Version Control (Week 7-8)
**Goal**: Master Git workflow

1. Learn Git basics (docs/04-git.md)
2. Practice commits and branches
3. Use GitHub features
4. Create pull requests
5. Collaborate with others

**Success Criteria**: Comfortable with full Git workflow

### Phase 5: Advanced Topics (Beyond)
**Goal**: Expand your skills

- Add more complex Python/C programs
- Explore CI/CD with GitHub Actions
- Learn about code review practices
- Contribute to open source
- Build your own projects

## 📝 Assumptions & Prerequisites

This repository assumes you:
- Have basic computer literacy (installing software, using command line)
- Are interested in learning programming
- Have access to a computer (Windows, macOS, or Linux)
- Are willing to read documentation and practice
- Have an internet connection for downloading tools

No prior programming experience is required, but some familiarity with:
- Basic command line operations is helpful
- Programming concepts (variables, functions) is beneficial
- Text editing is useful

## 🤝 Contributing

Contributions are welcome! Please:
1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

See [PULL_REQUEST_TEMPLATE.md](.github/PULL_REQUEST_TEMPLATE.md) for details.

## 🐛 Reporting Issues

Found a bug or have a suggestion? Please:
1. Check existing issues first
2. Use appropriate issue template ([bug report](.github/ISSUE_TEMPLATE/bug_report.md) or [feature request](.github/ISSUE_TEMPLATE/feature_request.md))
3. Provide detailed information
4. Include reproduction steps if applicable

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- Visual Studio Code team for an amazing editor
- Python and GCC communities
- All contributors and learners

## 📞 Getting Help

If you're stuck:
1. Check the documentation in the `docs/` folder
2. Review the example code
3. Try the "Try it" exercises in the guides
4. Open an issue with your question
5. Search online for solutions

Remember: Every expert was once a beginner. Keep practicing!

## 🎯 Next Steps

Ready to start? Follow these steps:

1. ✅ Complete the [Setup Guide](docs/01-setup.md)
2. 📖 Read the [Editor Guide](docs/02-editor.md)
3. 🐛 Learn [Debugging](docs/03-debugging.md)
4. 🔀 Master [Git](docs/04-git.md)
5. 🚀 Build your own projects!

**Happy Learning! 🎉**
