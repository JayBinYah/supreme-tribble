# Settings Sync Guide

Settings Sync lets you keep your VS Code configuration consistent across multiple devices. Never lose your settings again!

## 🔄 What is Settings Sync?

Settings Sync synchronizes:
- **Settings** - Editor preferences, themes, keybindings
- **Extensions** - Your installed extensions
- **Keybindings** - Custom keyboard shortcuts
- **UI State** - Layout and panel positions
- **Snippets** - Custom code snippets

## 🚀 Enabling Settings Sync

### Prerequisites

You need a GitHub account (free!):
- If you don't have one, create at [github.com](https://github.com)

### Turn On Settings Sync

**Method 1: Activity Bar**
1. Click the account icon (bottom-left corner)
2. Click "Turn on Settings Sync..."
3. Choose what to sync (recommended: all)
4. Click "Sign in & Turn on"
5. Choose "Sign in with GitHub"
6. Authorize VS Code in your browser

**Method 2: Command Palette**
1. Press `Ctrl+Shift+P` (or `Cmd+Shift+P`)
2. Type "Settings Sync: Turn On"
3. Follow the prompts

**Method 3: Settings**
1. File → Preferences → Settings
2. Search "Settings Sync"
3. Click "Turn on Settings Sync"

### First Time Setup

When enabling for the first time:
1. **Select what to sync** - Check all boxes (recommended)
2. **Sign in** - Use GitHub account
3. **Authorize** - Grant VS Code permission
4. **Done!** - Settings are now syncing

## 📤 What Gets Synced

### Settings (settings.json)
- Editor configuration
- Language-specific settings
- Terminal preferences
- Theme and color choices

**Example synced settings:**
```json
{
    "editor.fontSize": 14,
    "editor.formatOnSave": true,
    "workbench.colorTheme": "Dark+"
}
```

### Extensions
- All installed extensions
- Extension settings
- Extension-specific keybindings

### Keybindings (keybindings.json)
- Custom keyboard shortcuts
- Modified default shortcuts

### UI State
- Sidebar visibility
- Panel layout
- Split editor configuration

### Snippets
- Custom code snippets you've created

## 🖥️ Using Sync on Multiple Devices

### On Your Second Device

1. **Install VS Code** on new device
2. **Sign in** with same GitHub account
3. **Turn on Settings Sync**
4. VS Code downloads your settings
5. **Wait** for extensions to install
6. **Reload** VS Code if needed

### Sync Conflicts

If settings conflict between devices:
- VS Code shows a notification
- Choose which version to keep:
  - **Local** - Keep this device's settings
  - **Remote** - Use synced settings
  - **Show Changes** - Review differences first

## ⚙️ Settings Sync Configuration

### Access Sync Settings

1. Click account icon (bottom-left)
2. Click gear icon next to "Settings Sync is On"
3. Configure options

### Sync Options

**Choose what to sync:**
- ☑ Settings
- ☑ Keyboard Shortcuts
- ☑ Extensions
- ☑ User Snippets
- ☑ UI State

**Uncheck** items you don't want synced.

### Manual Sync

Settings sync automatically, but you can force it:

1. Command Palette (`Ctrl+Shift+P`)
2. Type "Settings Sync: Sync Now"
3. Or: Click account icon → "Settings Sync: Sync Now"

### View Sync Activity

See what's being synced:
1. Command Palette
2. "Settings Sync: Show Synced Data"
3. Review settings, extensions, etc.

## 🔐 Privacy and Security

### What's Stored

- Settings stored in your GitHub account
- Encrypted during transfer
- Only you can access your synced data

### Sensitive Data

**Settings Sync does NOT sync:**
- Passwords or secrets
- Workspace-specific settings (`.vscode/settings.json`)
- Authentication tokens

**Best Practice:**
- Never put passwords in settings
- Use environment variables for secrets
- Workspace settings stay local

## 🛠️ Advanced Usage

### Profile-Based Sync (VS Code 1.75+)

Create different profiles for different purposes:

**Example Profiles:**
- **Work** - Work-related extensions and settings
- **Personal** - Personal projects
- **Teaching** - Minimal setup for teaching

**Create Profile:**
1. Click account icon
2. "Create Profile..."
3. Name it and choose settings
4. Each profile syncs separately!

### Machine-Specific Settings

Settings that shouldn't sync:

Create `.vscode/settings.json` in workspace:
```json
{
    "terminal.integrated.shell.windows": "C:\\specific\\path"
}
```

These override synced settings locally.

### Exclude Extensions from Sync

Don't want an extension on all devices?

1. Right-click extension
2. "Disable Sync for Extension"

## 💡 Tips and Tricks

### Fresh Start on New Device

1. Install VS Code
2. Sign in and enable Settings Sync
3. Wait a few minutes
4. All your settings and extensions arrive!

### Backup Strategy

Settings Sync is great, but:
- Keep a backup of important settings
- Export settings occasionally:
  - Settings → ... → "Export Settings..."

### Sync Indicators

**Status Bar** (bottom-right):
- ☁️ - Syncing
- ✓ - Sync complete
- ⚠️ - Sync issue

Click icon for details.

### Share Settings Between Teams

Want team-wide settings?
- Use workspace settings (`.vscode/settings.json`)
- Commit to Git repository
- Everyone gets same workspace setup

## 🎓 Practice Exercises

### Exercise 1: Enable Settings Sync

1. Click account icon (bottom-left)
2. Enable Settings Sync
3. Sign in with GitHub
4. Select all items to sync
5. Wait for confirmation

### Exercise 2: Change a Setting

1. Change your color theme
2. Change font size
3. Wait a few seconds
4. Open VS Code on another device (or check sync status)
5. Verify settings synced

### Exercise 3: Install Extension

1. Install a new extension
2. Wait for sync
3. Check "Settings Sync: Show Synced Data"
4. Verify extension is listed

### Exercise 4: Manual Sync

1. Make several setting changes
2. Command Palette → "Settings Sync: Sync Now"
3. Watch sync indicator in status bar
4. Verify sync completed

## 📚 Next Steps

Congratulations! You've completed all the guides:
1. ✅ Workspace Setup
2. ✅ Extensions
3. ✅ Terminal
4. ✅ Git Integration
5. ✅ Debugging
6. ✅ Settings Sync

**What's Next?**
- Practice with the Python and C starter projects
- Customize VS Code to your preferences
- Build something awesome!
- Share this repository with others learning VS Code

## 🆘 Troubleshooting

**Problem**: Settings not syncing
- **Solution**: 
  - Check internet connection
  - Sign out and sign in again
  - Check sync status (click account icon)

**Problem**: Extensions not installing on new device
- **Solution**:
  - Wait a few minutes (can take time)
  - Manually sync: "Settings Sync: Sync Now"
  - Check extension marketplace is accessible

**Problem**: Sync conflict
- **Solution**:
  - Choose "Show Changes" to review
  - Select "Local" or "Remote" based on which is newer/better

**Problem**: Too much syncing across different use cases
- **Solution**: Use Profiles (VS Code 1.75+) for different contexts

**Problem**: Forgot which account is syncing
- **Solution**: Click account icon to see signed-in account

## 📖 Additional Resources

- [VS Code Settings Sync Documentation](https://code.visualstudio.com/docs/editor/settings-sync)
- [VS Code Profiles](https://code.visualstudio.com/docs/editor/profiles)
- [User and Workspace Settings](https://code.visualstudio.com/docs/getstarted/settings)

---

## 🎉 Congratulations!

You've completed all the VS Code learning guides! You now know how to:
- ✅ Set up and customize your workspace
- ✅ Install and manage extensions
- ✅ Use the integrated terminal effectively
- ✅ Manage version control with Git
- ✅ Debug Python and C programs
- ✅ Sync settings across devices

**Keep Learning:**
- Explore advanced features as you need them
- Customize VS Code to fit your workflow
- Try building your own projects
- Help others learn VS Code!

Happy coding! 🚀
