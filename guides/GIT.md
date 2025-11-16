# Git Integration Guide

VS Code has powerful built-in Git integration. This guide will help you manage version control without leaving your editor.

## 🔄 What is Git?

Git is a version control system that:
- Tracks changes to your code
- Allows you to undo mistakes
- Enables collaboration with others
- Maintains a history of your project

## 🚀 Getting Started

### Prerequisites

Git should be installed on your system:
```bash
# Check if Git is installed
git --version
```

If not installed:
- **macOS**: Xcode Command Line Tools (`xcode-select --install`)
- **Linux**: `sudo apt-get install git`
- **Windows**: Download from [git-scm.com](https://git-scm.com/)

### Configure Git (First Time)

Set your name and email:
```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
```

## 📱 Source Control View

### Opening Source Control

- **Keyboard**: `Ctrl+Shift+G` (or `Cmd+Shift+G` on Mac)
- **Click**: Source Control icon in Activity Bar (left sidebar)

### Understanding the View

The Source Control view shows:
- **Changes** - Modified files
- **Staged Changes** - Files ready to commit
- **Merge Changes** - Conflicts to resolve
- **Commit message box** - Write commit descriptions

## 📝 Basic Git Workflow

### 1. Making Changes

When you modify files, they appear in "Changes" section:
- **M** - Modified
- **U** - Untracked (new file)
- **D** - Deleted
- **C** - Conflict

### 2. Staging Changes

Stage files to prepare for commit:

**Method 1: Source Control View**
- Hover over a file
- Click the `+` icon

**Method 2: Right-click**
- Right-click file → "Stage Changes"

**Stage All:**
- Click `+` next to "Changes" header

### 3. Viewing Changes

See what changed before committing:

**In Source Control View:**
- Click on a file to see diff (differences)
- Green = added lines
- Red = removed lines

**In Editor:**
- Look for green/red bars in the gutter (left margin)
- Click the bar to see inline diff

### 4. Committing Changes

Commit staged files:

1. Write a commit message in the text box
2. Click the checkmark icon (✓) or press `Ctrl+Enter`

**Good Commit Messages:**
- ✅ "Add hello.py starter file"
- ✅ "Fix bug in average calculation"
- ❌ "changes"
- ❌ "stuff"

### 5. Pushing Changes

Push commits to GitHub:

**Method 1:** Click "..." → "Push"
**Method 2:** Command Palette → "Git: Push"
**Method 3:** Terminal → `git push`

## 🌿 Working with Branches

### What are Branches?

Branches let you work on features without affecting the main code.

### Create a Branch

1. Click branch name in bottom-left corner
2. Click "Create new branch..."
3. Enter branch name (e.g., "add-feature")
4. Press Enter

Or use Command Palette: "Git: Create Branch"

### Switch Branches

1. Click branch name in bottom-left corner
2. Select the branch you want

Or: `git checkout branch-name` in terminal

### Merge Branches

1. Switch to the branch you want to merge into (e.g., main)
2. Command Palette → "Git: Merge Branch"
3. Select the branch to merge

## 🔍 Viewing History

### GitLens Extension

Install GitLens (recommended in [Extensions Guide](EXTENSIONS.md)) for:
- Blame annotations (who wrote each line)
- Commit history
- File history

**View File History:**
- Right-click file → "GitLens: Show File History"

**View Line History:**
- Click on line number → "GitLens: Show Line History"

### Built-in Timeline

1. Click file in Explorer
2. Open "Timeline" view at bottom of Explorer
3. See file's commit history

## 🔀 Handling Conflicts

### What is a Conflict?

Conflicts occur when:
- You and someone else edit the same line
- You need to choose which version to keep

### Resolving Conflicts

When a conflict occurs:

1. File appears in "Merge Changes" section
2. Open the file
3. Look for conflict markers:
   ```
   <<<<<<< HEAD
   Your changes
   =======
   Their changes
   >>>>>>> branch-name
   ```

4. Choose an option:
   - "Accept Current Change" (yours)
   - "Accept Incoming Change" (theirs)
   - "Accept Both Changes"
   - Manually edit

5. Stage the resolved file
6. Commit the merge

## 🎯 Useful Git Commands in Terminal

### Status and Information

```bash
# Check status
git status

# View commit history
git log
git log --oneline

# See what changed
git diff
```

### Undo Changes

```bash
# Discard changes in a file
git checkout -- filename.py

# Unstage a file
git reset HEAD filename.py

# Undo last commit (keep changes)
git reset --soft HEAD~1

# Undo last commit (discard changes) - CAREFUL!
git reset --hard HEAD~1
```

### Remote Operations

```bash
# View remotes
git remote -v

# Fetch updates
git fetch

# Pull changes
git pull

# Push changes
git push

# Push new branch
git push -u origin branch-name
```

### Branches

```bash
# List branches
git branch

# Create branch
git branch new-branch

# Switch branch
git checkout new-branch

# Create and switch
git checkout -b new-branch

# Delete branch
git branch -d old-branch
```

## 💡 Git Best Practices

### Commit Often

- Make small, focused commits
- Commit working code
- Commit after completing a logical unit

### Write Good Messages

**Format:**
```
Short summary (50 chars or less)

More detailed explanation if needed.
Explain what and why, not how.
```

**Examples:**
```
Add Python hello world example

Fix off-by-one error in array iteration

Update README with setup instructions
```

### Branch Strategy

- `main` - Stable, working code
- `feature-xyz` - New features
- `fix-bug` - Bug fixes
- Merge back to `main` when ready

### Before Pushing

1. Review your changes
2. Test your code
3. Write a clear commit message
4. Pull recent changes: `git pull`
5. Push: `git push`

## 🎓 Practice Exercises

### Exercise 1: Make a Change

1. Open `python-starter/hello.py`
2. Modify the welcome message
3. Save the file
4. Open Source Control view (Ctrl+Shift+G)
5. Review the diff
6. Stage the change
7. Write commit message: "Update welcome message"
8. Commit

### Exercise 2: Work with Branches

1. Create a new branch: "practice-branch"
2. Make a change to any file
3. Commit the change
4. Switch back to main branch
5. See that your change is gone (it's in the branch!)
6. Switch back to practice-branch

### Exercise 3: Undo Changes

1. Make a change to a file
2. Don't like it? Discard the change:
   - Right-click file in Source Control
   - "Discard Changes"

### Exercise 4: View History

1. Open a file
2. Click on a line number
3. See Git blame information (requires GitLens)
4. Check Timeline view for file history

## 📚 Next Steps

Now that you know Git:
1. ✅ Git basics mastered!
2. → Learn about [Debugging](DEBUGGING.md)
3. → Explore [Settings Sync](SETTINGS.md)

## 🆘 Troubleshooting

**Problem**: "Git not found"
- **Solution**: Install Git and restart VS Code

**Problem**: Can't push to GitHub
- **Solution**: Set up authentication (SSH or Personal Access Token)
- See [GitHub Authentication](https://docs.github.com/en/authentication)

**Problem**: Merge conflict is confusing
- **Solution**: 
  - Use "Accept Current Change" or "Accept Incoming Change"
  - Or ask for help - conflicts can be tricky!

**Problem**: Accidentally committed wrong files
- **Solution**: Use `git reset --soft HEAD~1` to undo the commit

**Problem**: Changes not showing in Source Control
- **Solution**: Make sure file is saved (Ctrl+S)

## 📖 Additional Resources

- [Git Documentation](https://git-scm.com/doc)
- [GitHub Git Guide](https://github.com/git-guides)
- [VS Code Git Integration](https://code.visualstudio.com/docs/sourcecontrol/overview)
- [GitLens Documentation](https://gitlens.amod.io/)
- [Interactive Git Tutorial](https://learngitbranching.js.org/)
