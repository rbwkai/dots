<div align="center">

# 🍚 Dotfiles

*saying **I use arch, btw** has never felt so awesome*

**Minimal, Aesthetic, Productive Arch Niri rice -by @rbwkai**

---

![Arch Linux](https://img.shields.io/badge/Arch_Linux-1793D1?style=for-the-badge&logo=arch-linux&logoColor=white)
![Niri](https://img.shields.io/badge/Window_Manager-Niri-blue?style=for-the-badge)
![Kitty](https://img.shields.io/badge/Terminal-Kitty-black?style=for-the-badge)

</div>

## 📸 Showcase

<div align="center">
  <img src="screenshots/a.png" width="800" alt="Screenshot 1"/>
  <br/><br/>
</div>

## 📦 Software & Dependencies

This setup relies on **Arch Linux** and the **Niri** window manager. 

Here is a quick command to grab the core packages and tools (assuming you have an AUR helper like `yay` set up for AUR-specific ones like `niri` or `zen-browser-bin`):

```bash
# Install core packages via pacman
sudo pacman -S kitty neovim obsidian yazi btop tree fastfetch nmap stow

# Install AUR packages (Zen Browser, etc.)
yay -S zen-browser-bin
```

## 🚀 Installation (stow)

This repository is designed to be managed with [GNU Stow](https://www.gnu.org/software/stow/).

```bash
# 1. Clone the repo to your home directory
git clone https://github.com/rbwkai/dots.git ~/dots
cd ~/dots

# 2. Use stow to create the symlinks
stow .
```

*Note: If you run into conflicts, make sure to back up or remove your existing configurations in `~/.config` before running `stow .`*

---