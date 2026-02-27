#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    int menit = 0;

    while (true) {
        menit++;
        T += 5;
        if (menit % 4 == 0) T -= 12;
        if (T > 100) {
            cout << "Menit " << menit << ": Mesin meledak!\n";
            break;
        }
        cout << "Menit " << menit << ": Suhu " << T << "°C\n";
    }
}