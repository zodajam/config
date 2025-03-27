#include "iostream"
using namespace std;

int main() {
    std::string input; // input variable for user
    std::string mkdir; // variable for 'mkdir' command
    std::string user = "\033[1;36mroot@ubash:/$ "; // the user variable, that will change when you to 'cd'
    std::string welcome = "\033[1;35m--##! Welcome to uBash, type \'uhelp\' for help !##--\n"; // used for the 'clear' command
    bool robux_generator_installed = false; // used for the virus
    std::cout << welcome; // staring up
    std::cout << user;
    while(std::getline(cin, input)) { // while loop to never exit terminal
        if(input == "uhelp") { // following code is just gibberish if statements
            std::cout << "\033[1;31mList of commands in uBash:\n\nuhelp - prints help menu\nclear - clears the window\nls - lists everything in the directory\ncd <directory> - changes to said directory\nfile.filetype - opens said file\n";
            std::cout << user;  
        } else if(input == "clear") {
            system("clear");
            std::cout << welcome;
            std::cout << user;
        } else if(input == "cd home") {
            user = "\033[1;36mroot@ubash:/home$ ";
            std::cout << user;
        } else if(user == "\033[1;36mroot@ubash:/$ ") {
            if(input == "ls") {
                std::cout << "\033[1;31mhome\tbin\tlib\nboot\tmedia\n";
                std::cout << user;
            } else if(input.empty()) {
                std::cout << user;
            } else {
                std::cout << "That is not a command.\n";
                std::cout << user;
            }
        } else if(user == "\033[1;36mroot@ubash:/home$ ") {
            if(input == "ls") {
                std::cout << "\033[1;31mroot\n";
                std::cout << user;
            } else if(input == "cd root") {
                user = "\033[1;36mroot@ubash:~$ ";
                std::cout << user;
            } else if(input == "cd ..") {
                user = "\033[1;36mroot@ubash:/$ ";
                std::cout << user;
            } else if(input.empty()) {
                std::cout << user;
            } else {
                std::cout << "That is not a command.\n";
                std::cout << user;
            }
        } else if(user == "\033[1;36mroot@ubash:~$ ") {
            if(input == "ls") {
                std::cout << "\033[1;31mDocuments\tDownloads\tGames\n";
                std::cout << user;
            } else if(input == "cd ..") {
                user = "\033[1;36mroot@ubash:/home$ ";
                std::cout << user;
            } else if(input == "cd Documents") {
                user = "\033[1;36mroot@ubash:~/Documents$ ";
                std::cout << user;
            } else if(input == "cd Downloads") {
                user = "\033[1;36mroot@ubash:~/Downloads$ ";
                std::cout << user;
            } else if(input == "cd Games") {
                user = "\033[1;36mroot@ubash:~/Games$ ";
                std::cout << user;
            } else if(input.empty()) {
                std::cout << user;
            } else {
                std::cout << "That is not a command.\n";
                std::cout << user;
            }
        } else if(user == "\033[1;36mroot@ubash:~/Documents$ ") {
            if(input == "ls") {
                std::cout << "\033[1;31mubash.txt\tascii-art.txt\n";
                std::cout << user;
            } else if(input == "cd ..") {
                user = "\033[1;36mroot@ubash:~$ ";
                std::cout << user;
            } else if(input == "ubash.txt") {
                std::cout << "\033[1;31muBash for Linux bash was invented in 2025.\nThere are other versions of this that\nI've made that are on the internet.\n";
                std::cout << user;
            } else if(input == "ascii-art.txt") {
                std::cout << "\033[1;31mYou thought I was gonna take the time to import ascii art into this? Nah.\n";
                std::cout << user;
            } else if(input.empty()) {
                std::cout << user;
            } else {
                std::cout << "That is not a command.\n";
                std::cout << user;
            }
        } else if(user == "\033[1;36mroot@ubash:~/Downloads$ "){
            if(input == "ls") {
                std::cout << "\033[1;31mrobux-generator.deb\n";
                std::cout << user;
            } else if(input == "cd ..") {
                user = "\033[1;36mroot@ubash:~$ ";
                std::cout << user;
            } else if(input == "robux-generator.deb") {
                robux_generator_installed = true;
                std::cout << "robux-generator has successfully been installed on your machine.\nTo run it, type \'robux-generator\'\n";
                std::cout << user;
            } else if(robux_generator_installed == true) {
                if(input == "robux-generator") {
                    return 0;
                } else if(input.empty()) {
                    std::cout << user;
                } else {
                    std::cout << "That is not a command.\n";
                    std::cout << user;
                }
            } else if(input.empty()) {
                std::cout << user;
            } else {
                std::cout << "That is not a command.\n";
                std::cout << user;
            }
        } else if(user == "\033[1;36mroot@ubash:~/Games$ ") {
            if(input == "cd ..") {
                user = "\033[1;36mroot@ubash:~$ ";
                std::cout << user;
            } else if(input == "ls") {
                std::cout << user;
            } else if(input.empty()) {
                std::cout << user;
            } else {
                std::cout << "That is not a command.\n";
                std::cout << user;
            }
        } else if(input == "cd bin") {
            user = "\033[1;36mroot@ubash:/bin$ ";
            std::cout << user;
            if(input == "ls") {
                std::cout << "\033[1;31muhelp\nclear\nls\ncd\n";
                std::cout << user;
            } else if(input == "cd ..") {
                user = "\033[1;36mroot@ubash:/$ ";
                std::cout << user;
            }
        } else if(input.empty()) {
            std::cout << user;
        } else {
            std::cout << "That is not a command.\n";
            std::cout << user;
        }
    }
}