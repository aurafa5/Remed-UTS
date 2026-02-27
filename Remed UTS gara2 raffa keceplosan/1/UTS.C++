#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int bataPerJam = 5 * 12;
    int jamKerja = 0;
    int totalJam = 0;

    while (N > 0) {
        jamKerja++;
        totalJam++;
        N -= bataPerJam;

        if (jamKerja == 4 && N > 0) {
            totalJam++;
            jamKerja = 0;
        }
    }

    int jam = totalJam;
    int menit = (totalJam - jam) * 60;

    cout << jam << " jam " << menit << " menit";
    return 0;
}