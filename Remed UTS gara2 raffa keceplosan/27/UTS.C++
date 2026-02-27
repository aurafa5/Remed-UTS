#include <iostream>
using namespace std;

int main() {
    float patah;
    int apek;

    cin >> patah >> apek;

    if (apek == 1) {
        cout << "Tidak Layak Konsumsi";
    } else {
        if (patah < 5) cout << "Premium";
        else if (patah <= 15) cout << "Medium A";
        else if (patah <= 25) cout << "Medium B";
        else cout << "Beras Raskin";
    }
}