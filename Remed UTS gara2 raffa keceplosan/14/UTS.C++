#include <iostream>
using namespace std;

int main() {
    int rapat, kerja, lobby;
    cin >> rapat >> kerja >> lobby;

    int watt = rapat*2000 + kerja*5000 + lobby*8000;
    double kwhPerHari = (watt * 12) / 1000.0;
    long long biaya = kwhPerHari * 1500 * 30;

    cout << biaya;
    return 0;
}