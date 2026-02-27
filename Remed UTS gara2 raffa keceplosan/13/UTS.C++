#include <iostream>
using namespace std;

int main() {
    int penjualan[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> penjualan[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += penjualan[i][j];
        }
        cout << total << endl;
    }

    return 0;
}