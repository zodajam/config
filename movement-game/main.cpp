#include "iostream" 
#include "string"
#include "windows.h"
#include <algorithm> 
using namespace std;

string map[7][10] = {
    {"9", "9", "9", "9", "9", "9", "9", "9", "9", "9"},
    {"9", "%", "0", "%", "%", "0", "%", "0", "0", "9"},
    {"9", "0", "1", "0", "0", "0", "0", "0", "%", "9"},
    {"9", "0", "%", "0", "0", "%", "%", "0", "0", "9"},
    {"9", "%", "0", "0", "0", "%", "0", "0", "%", "9"},
    {"9", "%", "0", "%", "0", "0", "0", "0", "0", "9"},
    {"9", "9", "9", "9", "9", "9", "9", "9", "9", "9"}
};

int y = 2;
int x = 2;
int fontSize = 1;

string player = map[y][x];

void print_map() {
    system("cls");
    cout << map[0][0] << map[0][1] << map[0][2] << map[0][3] << map[0][4] << map[0][5] << map[0][6] << map[0][7] << map[0][8] << map[0][9] << "\n";
    cout << map[1][0] << map[1][1] << map[1][2] << map[1][3] << map[1][4] << map[1][5] << map[1][6] << map[1][7] << map[1][8] << map[1][9] << "\n";
    cout << map[2][0] << map[2][1] << map[2][2] << map[2][3] << map[2][4] << map[2][5] << map[2][6] << map[2][7] << map[2][8] << map[2][9] << "\n";
    cout << map[3][0] << map[3][1] << map[3][2] << map[3][3] << map[3][4] << map[3][5] << map[3][6] << map[3][7] << map[3][8] << map[3][9] << "\n";
    cout << map[4][0] << map[4][1] << map[4][2] << map[4][3] << map[4][4] << map[4][5] << map[4][6] << map[4][7] << map[4][8] << map[4][9] << "\n";
    cout << map[5][0] << map[5][1] << map[5][2] << map[5][3] << map[5][4] << map[5][5] << map[5][6] << map[5][7] << map[5][8] << map[5][9] << "\n";
    cout << map[6][0] << map[6][1] << map[6][2] << map[6][3] << map[6][4] << map[6][5] << map[6][6] << map[6][7] << map[6][8] << map[6][9] << "\n";
    cout << "Y: " << y << " " << "X: " << x << "\n";
}

void check() {
    int xLength = sizeof(x);
    int yLength = sizeof(y);

    for (int x = 0; x < xLength; x++) {
        cout << xLength;
        for (int y = 0; y < yLength; y++) {
            cout << yLength;
        }
    }
}

int main() {
    print_map();

    int count = 0;
    cout << count;

    while (GetAsyncKeyState) {
        if (GetAsyncKeyState(VK_UP) & 0x8000) {
            map[y][x] = "0";
            y--;
            map[y][x] = "1";
            Sleep(250);
            print_map();
        } else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            map[y][x] = "0";
            x--;
            map[y][x] = "1";
            Sleep(250);
            print_map();
        } else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
            map[y][x] = "0";
            x++;
            map[y][x] = "1";
            Sleep(250);
            print_map();
        } else if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
            map[y][x] = "0";
            y++;
            map[y][x] = "1";
            Sleep(250);
            print_map();
        } else if (x >= 9) {
            map[y][x] = "9";
            x--;
            map[y][x] = "1";
            Sleep(250);
            print_map();
        } else if (x <= 0) {
            map[y][x] = "9";
            x++;
            map[y][x] = "1";
            Sleep(250);
            print_map();
        } else if (y >= 6) {
            map[y][x] = "9";
            y--;
            map[y][x] = "1";
            Sleep(250);
            print_map();
        } else if (y <= 0) {
            map[y][x] = "9";
            y++;
            map[y][x] = "1";
            Sleep(250);
            print_map();
        }
    }
    system("pause");
    return 0;
}