#include "iostream"
using namespace std;

class Rectangle {
    public:
        int x;
        int y;
};

int main() {
    Rectangle rec;
    cout << "X: ";
    cin >> rec.x;
    cout << "Y: ";
    cin >> rec.y;  

    for(int y = 1; y <= rec.y; y++) {
        for(int x = 1; x <= rec.x; x++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
