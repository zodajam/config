#include "iostream"
using namespace std;

class Game {
    public:
        int x;
        int y;
};

int main() {
    Game game;
    cout << "X: ";
    cin >> game.x;
    cout << "Y: ";
    cin >> game.y;  

    for(int y = 1; y <= game.y; y++) {
        for(int x = 1; x <= game.x; x++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}