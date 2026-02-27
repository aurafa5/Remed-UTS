#include <iostream>
using namespace std;

int main() {
    int penjualan[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> penjualan[i][j];
        }
    }

    int maxTotal = -1;
    int cabangTertinggi = 0;

    for (int i = 0; i < 3; i++) {
        int total = 0;
        for (int j = 0; j < 4; j++) {
            total += penjualan[i][j];
        }
        if (total > maxTotal) {
            maxTotal = total;
            cabangTertinggi = i + 1;
        }
    }

    cout << cabangTertinggi;
    return 0;
}