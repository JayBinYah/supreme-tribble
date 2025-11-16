# Git Workflow Guide

Learn Git fundamentals and best practices for version control.

## What is Git?

Git is a distributed version control system that helps you:
- Track changes to your code over time
- Collaborate with others
- Maintain different versions of your project
- Recover from mistakes
- Review history of changes

## Git Basics

### Key Concepts

- **Repository (Repo)**: A project tracked by Git
- **Commit**: A snapshot of your code at a point in time
- **Branch**: An independent line of development
- **Remote**: A version of your repo hosted elsewhere (e.g., GitHub)
- **Clone**: Copy a remote repository to your local machine
- **Pull**: Download changes from remote
- **Push**: Upload your changes to remote

## Initial Setup

### Configure Git Identity

```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
```

### Verify Configuration

```bash
git config --list
```

**Try it:** Run these commands to set up your Git identity.

## Basic Git Workflow

### 1. Check Status

See which files have changed:
```bash
git status
```

**Try it:** Run `git status` to see the current state of your repository.

### 2. View Changes

See what changed in files:
```bash
git diff                    # Unstaged changes
git diff --staged           # Staged changes
git diff HEAD              # All changes
```

**Try it:** Make a small change to a file and run `git diff`.

### 3. Stage Changes

Add files to staging area:
```bash
git add filename.py         # Stage specific file
git add src/                # Stage directory
git add .                   # Stage all changes
git add *.py                # Stage all Python files
```

**Try it:** Stage a file you modified.

### 4. Commit Changes

Save staged changes:
```bash
git commit -m "Your commit message"
```

**Good commit messages:**
- Clear and concise
- Describe what changed and why
- Use present tense ("Add feature" not "Added feature")
- Start with capital letter

**Examples:**
```bash
git commit -m "Add greet function to main.py"
git commit -m "Fix bug in argument parsing"
git commit -m "Update README with setup instructions"
```

**Try it:** Commit your staged changes with a descriptive message.

### 5. Push Changes

Upload commits to remote repository:
```bash
git push origin main        # Push to main branch
git push                    # Push current branch
```

**Try it:** Push your commit to GitHub (if you have write access).

## Using Git in VS Code

VS Code provides a built-in Git interface.

### Source Control View

Open with `Ctrl+Shift+G` or click Source Control icon in Activity Bar.

**Features:**
- See all changed files
- Stage/unstage changes
- Write commit messages
- View diffs inline
- Push/pull/sync

### Staging Changes

- Click `+` next to file to stage
- Click `-` to unstage
- Stage all with `+` next to "Changes"

### Committing

1. Type commit message in text box at top
2. Click ✓ (checkmark) or press `Ctrl+Enter`
3. Or use `...` menu for more options

### Viewing Diffs

- Click on changed file to see diff
- Use arrows in diff view to navigate changes
- Inline diff shows changes in context

**Try it:** Make a change, stage it, and commit using VS Code interface.

## Branching

Branches let you work on features without affecting main code.

### Create Branch

```bash
git branch feature-name          # Create branch
git checkout feature-name        # Switch to branch
# Or combine:
git checkout -b feature-name     # Create and switch
```

### Switch Branches

```bash
git checkout main               # Switch to main
git checkout feature-name       # Switch to feature
```

### List Branches

```bash
git branch                      # Local branches
git branch -a                   # All branches (including remote)
```

### Merge Branches

```bash
git checkout main               # Switch to target branch
git merge feature-name          # Merge feature into main
```

**Try it:** Create a new branch, make changes, commit, then merge back to main.

### Branch in VS Code

- Current branch shown in status bar (bottom-left)
- Click branch name to switch branches
- Create new branch from Command Palette: "Git: Create Branch"

## Working with Remotes

### View Remotes

```bash
git remote -v
```

### Pull Changes

Download and merge remote changes:
```bash
git pull origin main            # Pull from specific branch
git pull                        # Pull current branch
```

### Fetch vs Pull

```bash
git fetch                       # Download changes, don't merge
git merge origin/main           # Merge fetched changes
```

**Try it:** Pull the latest changes from the remote repository.

## Common Scenarios

### Scenario 1: Undo Unstaged Changes

Discard changes to a file:
```bash
git checkout -- filename.py     # Discard changes to file
git checkout .                  # Discard all changes
```

Or in VS Code: Click discard icon on file in Source Control view.

### Scenario 2: Undo Staged Changes

Unstage files:
```bash
git reset HEAD filename.py      # Unstage file
git reset HEAD                  # Unstage all
```

Or in VS Code: Click `-` to unstage.

### Scenario 3: Amend Last Commit

Fix the last commit (before pushing):
```bash
git add forgotten-file.py
git commit --amend --no-edit    # Keep same message
git commit --amend -m "New message"  # Change message
```

**Warning:** Don't amend commits that have been pushed!

### Scenario 4: View History

```bash
git log                         # Full history
git log --oneline              # Compact view
git log --graph --oneline      # Visual branch graph
git log -n 5                   # Last 5 commits
```

**Try it:** View your commit history with different options.

### Scenario 5: See Who Changed What

```bash
git blame filename.py           # See who modified each line
git show commit-hash            # Show specific commit
```

## Ignoring Files

`.gitignore` tells Git which files to ignore.

### Common Patterns

```
# Python
__pycache__/
*.pyc
.venv/

# C
*.o
*.out
main

# OS
.DS_Store
Thumbs.db

# IDE
.vscode/
.idea/
```

**Try it:** Add a temporary file and verify it's ignored by Git.

## Collaboration Workflow

### 1. Clone Repository

```bash
git clone https://github.com/username/repo.git
cd repo
```

### 2. Create Feature Branch

```bash
git checkout -b feature/new-feature
```

### 3. Make Changes & Commit

```bash
git add .
git commit -m "Add new feature"
```

### 4. Push Branch

```bash
git push origin feature/new-feature
```

### 5. Create Pull Request

- Go to GitHub repository
- Click "Pull requests" → "New pull request"
- Select your branch
- Describe changes
- Submit for review

### 6. Update Branch with Latest Main

```bash
git checkout main
git pull origin main
git checkout feature/new-feature
git merge main
# Or use rebase:
git rebase main
```

### 7. After PR is Merged

```bash
git checkout main
git pull origin main
git branch -d feature/new-feature  # Delete local branch
```

**Try it:** If working with others, go through this workflow.

## Git Best Practices

### Commit Often

- Make small, logical commits
- Each commit should be a complete thought
- Easier to review and revert if needed

### Write Good Commit Messages

```
Good: "Add input validation to greet function"
Bad: "Fixed stuff"

Good: "Fix segfault in argv parsing"
Bad: "Bug fix"
```

### Keep Commits Focused

- One feature/fix per commit
- Don't mix unrelated changes
- Makes history cleaner

### Pull Before Push

Always pull latest changes before pushing:
```bash
git pull origin main
git push origin main
```

### Use Branches

- Keep main branch stable
- Create branches for features/fixes
- Delete branches after merging

### Review Before Committing

```bash
git status                      # What's changed?
git diff                        # What are the changes?
git add -p                      # Stage changes interactively
```

### Don't Commit Sensitive Data

- Never commit passwords, API keys, tokens
- Use environment variables or config files (gitignored)
- If committed by mistake, consider repo compromised

## Advanced Tips

### Interactive Staging

Stage specific parts of files:
```bash
git add -p                      # Interactive staging
# y = stage this hunk
# n = don't stage
# s = split into smaller hunks
```

### Stash Changes

Temporarily save changes:
```bash
git stash                       # Save changes
git stash pop                   # Restore changes
git stash list                  # List stashes
git stash drop                  # Delete stash
```

**Use case:** Switch branches without committing current work.

### Cherry-Pick

Apply specific commit to current branch:
```bash
git cherry-pick commit-hash
```

### Find Bugs with Bisect

Binary search through commits to find when bug was introduced:
```bash
git bisect start
git bisect bad                  # Current version is bad
git bisect good v1.0            # v1.0 was good
# Git checks out middle commit
# Test it, then:
git bisect good                 # or bad
# Repeat until bug found
git bisect reset               # Exit bisect mode
```

## Troubleshooting

### Merge Conflicts

When same lines changed in different branches:

1. Git marks conflicts in files:
```python
<<<<<<< HEAD
your changes
=======
their changes
>>>>>>> feature-branch
```

2. Edit files to resolve conflicts
3. Remove conflict markers
4. Stage resolved files: `git add filename`
5. Complete merge: `git commit`

**In VS Code:**
- Open conflicted file
- Use "Accept Current Change", "Accept Incoming Change", or edit manually
- Stage and commit

### Accidentally Committed to Wrong Branch

```bash
git log -n 1                    # Get commit hash
git checkout correct-branch
git cherry-pick commit-hash
git checkout wrong-branch
git reset --hard HEAD~1         # Remove last commit
```

### Pushed Sensitive Data

1. Remove file and commit
2. Consider entire history compromised
3. Change any exposed credentials immediately
4. Use `git filter-branch` or BFG Repo-Cleaner (advanced)

### Need to Undo Everything

```bash
git reset --hard HEAD           # Undo all changes
git clean -fd                   # Remove untracked files
```

**Warning:** This is destructive!

## GitHub-Specific Features

### Issues

- Track bugs, features, tasks
- Reference in commits: "Fix #123"
- Closes issue automatically when PR merged

### Pull Requests

- Propose changes
- Code review
- Discussion
- Continuous integration checks

### Actions

- Automated workflows
- Run tests on every push
- Deploy automatically
- See `.github/workflows/ci.yml`

## Learning Resources

- [Git Documentation](https://git-scm.com/doc)
- [GitHub Guides](https://guides.github.com/)
- [Pro Git Book](https://git-scm.com/book/en/v2) (free online)
- [Visualizing Git](https://git-school.github.io/visualizing-git/)

## Practice Exercises

1. **Exercise 1**: Make changes, stage them selectively, and commit
2. **Exercise 2**: Create a branch, make changes, merge back to main
3. **Exercise 3**: Create a merge conflict and resolve it
4. **Exercise 4**: Use `git log` and `git show` to explore history
5. **Exercise 5**: Practice stashing and popping changes

## Next Steps

- Review the [README](../README.md) for project overview
- Practice Git commands regularly
- Set up SSH keys for easier GitHub access
- Explore advanced Git features as you grow
