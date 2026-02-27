#include <iostream>
#include <string>
using namespace std;

int main() {
    string obat[10] = {"Paracetamol", "Amoxicillin", "Ibuprofen", "Antalgin", "CTM",
                       "Vitamin C", "Omeprazole", "Ranitidine", "ORS", "Salbutamol"};

    int stok[10] = {10, 5, 0, 7, 3, 12, 0, 4, 9, 1};

    string cari;
    getline(cin, cari);

    bool ditemukan = false;

    for (int i = 0; i < 10; i++) {
        if (obat[i] == cari) {
            ditemukan = true;
            if (stok[i] == 0) cout << "Obat Habis";
            else cout << stok[i];
            break;
        }
    }

    if (!ditemukan) cout << "Obat Tidak Ditemukan";

    return 0;
}