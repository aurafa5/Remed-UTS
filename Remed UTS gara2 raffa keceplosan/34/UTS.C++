#include <iostream>
using namespace std;

int main() {
    int gol, weekend, etoll;
    cin >> gol >> weekend >> etoll;

    double tarif = 0;
    if (gol == 1) tarif = 12000;
    else if (gol == 2) tarif = 18000;
    else tarif = 30000;

    if (weekend == 1) tarif *= 1.2;
    if (etoll == 1) tarif -= 2000;

    cout << "Total tarif: Rp " << (int)tarif;
}