
Debian
====================
This directory contains files used to package wolfd/wolf-qt
for Debian-based Linux systems. If you compile wolfd/wolf-qt yourself, there are some useful files here.

## wolf: URI support ##


wolf-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install wolf-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your wolf-qt binary to `/usr/bin`
and the `../../share/pixmaps/wolf128.png` to `/usr/share/pixmaps`

wolf-qt.protocol (KDE)

