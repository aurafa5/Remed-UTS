#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double ketebalan = 10;
    int km = 0;

    while (ketebalan > 2) {
        km += 100;
        int rusak;
        cout << "100km ke-" << km << ": Jalanan rusak? (1=ya,0=tidak): ";
        cin >> rusak;
        if (rusak == 1) ketebalan -= 1.2;
        else ketebalan -= 0.5;
        if (ketebalan < 2) ketebalan = 2;
        cout << fixed << setprecision(1);
        cout << "Setelah " << km << " km, sisa ketebalan: " << ketebalan << " mm\n";
    }
}