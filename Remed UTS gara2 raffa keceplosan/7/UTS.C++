#include <iostream>
using namespace std;

int main() {
    int kursi[5][5] = {0};

    int baris, kolom;
    cin >> baris >> kolom;

    if (kursi[baris][kolom] == 1) {
        cout << "Kursi Penuh!";
    } else {
        kursi[baris][kolom] = 1;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << kursi[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}