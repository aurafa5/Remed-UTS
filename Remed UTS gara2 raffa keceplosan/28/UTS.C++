#include <iostream>
using namespace std;

int main() {
    int belanja;
    string hari;
    cin >> belanja >> hari;

    double cashback = 0;

    if (belanja >= 50000 && belanja <= 100000) {
        cashback = belanja * 0.05;
    } else if (belanja > 100000) {
        cashback = belanja * 0.10;
        if (cashback > 25000) cashback = 25000;
    }

    for (auto &c : hari) c = tolower(c);
    if (hari == "minggu") cashback += 5000;

    cout << "Saldo akhir (setelah cashback): Rp " << (int)cashback;
}