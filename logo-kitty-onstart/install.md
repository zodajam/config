## Installation of a custom ASCII logo when you start kitty (any terminal really)
1. Sooooo, create a file called literally anything. (Tip: use a dot before the name to make it hidden)
2. Edit said file and add your ASCII logo, I went with this:
```ascii
      /\
     /  \
    /\   \
   /      \
  /   ,,   \
 /   |  |  -\
/_-''    ''-_\
```  
4. Edit ~/.bashrc/ with text editor of your choice (.bashrc is only if your using bash).
5. Add following line to the top:
```bash
cat ~/.name-of-file/ | lolcat
```
(lolcat is to make it a random rainbow color, optional but I use it)<br>

### Now everytime you open up any terminal, that file will be read and printed.
