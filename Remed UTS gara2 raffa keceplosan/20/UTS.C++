#include <iostream>
using namespace std;

int main() {
    double pajak, denda = 0;
    int telat;

    cout << "Masukkan nilai pajak (Rp): ";
    cin >> pajak;
    cout << "Masukkan jumlah bulan telat: ";
    cin >> telat;

    if (telat >= 1 && telat <= 3) {
        denda = 0.05 * pajak;
    } else if (telat >= 4 && telat <= 6) {
        denda = 0.10 * pajak;
    } else if (telat > 6) {
        denda = 0.25 * pajak + 50000;
    }

    double total = pajak + denda;

    cout << "Denda: Rp " << denda << endl;
    cout << "Total: Rp " << total << endl;
}