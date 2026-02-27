#include <iostream>
using namespace std;

int main() {
    int nilai[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> nilai[i][j];
        }
    }

    for (int col = 0; col < 3; col++) {
        int total = 0;
        for (int row = 0; row < 3; row++) {
            total += nilai[row][col];
        }
        cout << total << endl;
    }

    return 0;
}