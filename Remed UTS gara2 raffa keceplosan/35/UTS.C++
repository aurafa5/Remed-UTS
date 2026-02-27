#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double air = 5000;
    int jam = 0;

    while (air > 500) {
        jam++;
        air -= air * 0.002;
        if (jam % 2 == 0) air -= 15;
        if (air <= 500) {
            cout << fixed << setprecision(1);
            cout << "Jam " << jam << ": Refill Tanki! Sisa air " << air << " L\n";
            break;
        }
        cout << fixed << setprecision(1);
        cout << "Jam " << jam << ": Sisa air " << air << " L\n";
    }
}