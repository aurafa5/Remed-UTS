#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Jumlah paket: ";
    cin >> N;

    int bonusPerPaket = (N > 50) ? 3000 : 2000;
    int bonus = N * bonusPerPaket;

    int tambahan = (N / 10) * 5000;

    int total = bonus + tambahan;
    cout << "Pendapatan: Rp " << total;
}