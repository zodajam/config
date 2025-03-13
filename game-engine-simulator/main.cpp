#include "iostream"
#include "cstdlib"
using namespace std;

class Game {
    public:
        int x;
        int y;
        
};

class Player {
    public:
        string username;
        int user_id;
};

int main() {
    srand(time(0));
    Game game;
    Player player;
    player.user_id = rand();
    cout << "Enter your username:\n";
    cin >> player.username;
    cout << "\nEnter the value for X\n";
    cin >> game.x;
    cout << "Enter the value for Y\n";
    cin >> game.y;
    cout << "Your username is: " << player.username << "\nYour user ID is: " << player.user_id << "\nYour world is now " << game.x << "X and " << game.y << "Y with an area of " << game.x * game.y << "\n\n";
}
