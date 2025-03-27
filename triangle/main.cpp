#include "iostream"
#include "string.h"
using namespace std;

int main() {
    int rows; // variable to enter number of rows
    cout << "rows:\n";
    cin >> rows; // get input for rows
    cout << "\n";

    for(int i = 1; i <= rows; i++) { // for loop (x)
        for(int j = 1; j <= i; j++) { // for loop (y)
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}