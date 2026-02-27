#include <iostream>
using namespace std;

int main() {
    string pinBenar = "123456";
    int kesempatan = 3;
    string pin;

    while (kesempatan > 0) {
        cin >> pin;
        if (pin == pinBenar) {
            cout << "Selamat Datang";
            return 0;
        }
        kesempatan--;
    }

    cout << "Kartu Terblokir!";
    return 0;
}