#include <iostream>
using namespace std;

int main() {
    double hutang = 10000000;
    double cicilan = 500000;
    double bungaRate = 0.02;
    int bulan = 0;

    while (hutang > 0) {
        double bunga = hutang * bungaRate;
        hutang = hutang + bunga - cicilan;
        bulan++;

        cout << "Bulan " << bulan 
             << ": Sisa hutang = " << hutang << endl;
    }

    cout << "\nTotal waktu pelunasan: " << bulan << " bulan" << endl;
}