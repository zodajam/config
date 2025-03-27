#include "iostream"
using namespace std;

int main() {
    int rows;
    cin >> rows;

    for(int y = rows; y >= 1; y--) {
        for(int x = 1; x <= y; x++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}