# Install Catppuccin-Frappé-Red
<a href="">Download the zip file and extract it</a>

Move the folder into `/usr/share/themes`

Then edit `~/.config/gtk-3.0/settings.ini` and add this:
```shell
[Settings]
gtk-theme-name=catppuccin-frappe-red-standard+default
icon-theme-name=Tela-circle-Dark
cursor-theme-name=Frappé-cursors
gtk-application-prefer-dark-theme=true
```

Do the same to `~/.config/gtk-4.0/settings.ini`

## Now for Qt
`sudo pacman -S qt5ct kvantum kvantummanager`

Edit `~/.config/environment.d/qt.conf` and add this:
```shell
QT_QPA_PLATFORMTHEME=qt5ct
QT_STYLE_OVERRIDE=kvantum
```

Then open `kvantummanager`
Go to Change/Delete
Pick your theme and apply it
