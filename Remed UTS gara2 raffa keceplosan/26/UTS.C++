#include <iostream>
using namespace std;

int main() {
    int jarak, bagasi, umur;
    cin >> jarak >> bagasi >> umur;

    double tarif;
    if (jarak <= 50) tarif = 50000;
    else if (jarak <= 150) tarif = 125000;
    else tarif = 250000;

    int tambahan = 0;
    if (bagasi > 20) tambahan = (bagasi - 20) * 10000;

    if (umur > 60) tarif *= 0.8;

    double total = tarif + tambahan;
    cout << "Total Tiket: Rp " << total;
}