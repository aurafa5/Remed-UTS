#include <iostream>
using namespace std;

int main() {
    double D, M;
    cin >> D >> M;

    double bebanAwal = 150;
    double muatanAkhir = M * 0.9;
    double konsumsiPerKm = muatanAkhir * 5;
    double totalLiter = konsumsiPerKm * D;
    long long totalBiaya = totalLiter * 18500;

    cout << totalBiaya;
    return 0;
}