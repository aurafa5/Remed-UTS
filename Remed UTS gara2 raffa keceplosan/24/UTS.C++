#include <iostream>
using namespace std;

int main() {
    string paket;
    int bulan;
    cin >> paket >> bulan;

    int harga = 0;
    if (paket == "silver") harga = 200000;
    else if (paket == "gold") harga = 350000;
    else if (paket == "platinum") harga = 500000;

    int bayarBulan = (bulan == 12) ? 10 : bulan;
    int total = harga * bayarBulan;

    cout << "Total Biaya: Rp " << total;
}