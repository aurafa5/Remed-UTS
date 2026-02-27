#include <iostream>
using namespace std;

int main() {
    float jam;
    cin >> jam;

    double gajiKotor = 0;

    if (jam <= 40) {
        gajiKotor = jam * 50000;
    } else if (jam <= 50) {
        gajiKotor = 40 * 50000 + (jam - 40) * (1.5 * 50000);
    } else {
        gajiKotor = 40 * 50000 + 10 * (1.5 * 50000) + (jam - 50) * (2 * 50000);
    }

    double potongan = gajiKotor * 0.02 + gajiKotor * 0.05;
    double gajiBersih = gajiKotor - potongan;

    cout << "Gaji Kotor: " << gajiKotor << endl;
    cout << "Total Potongan: " << potongan << endl;
    cout << "Gaji Bersih: " << gajiBersih << endl;
}