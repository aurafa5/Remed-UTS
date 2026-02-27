#include <iostream>
using namespace std;

int main() {
    int baterai = 100, km = 0;

    while (baterai >= 15) {
        km++;
        int angin;
        cout << "Km " << km << ": Angin kencang? (1=ya,0=tidak): ";
        cin >> angin;
        baterai -= (angin == 1) ? 5 : 3;
        if (baterai < 15) {
            cout << "Km " << km << ": Landing Darurat! Baterai " << baterai << "%\n";
            break;
        }
        cout << "Km " << km << ": Baterai " << baterai << "%\n";
    }
}