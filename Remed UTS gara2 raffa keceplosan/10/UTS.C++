#include <iostream>
using namespace std;

int main() {
    double suhu[10];

    for (int i = 0; i < 10; i++) {
        cin >> suhu[i];
    }

    double total = 0;
    for (int i = 0; i < 10; i++) total += suhu[i];

    double rata = total / 10;

    double maks = suhu[0];
    int jamMaks = 1;

    for (int i = 1; i < 10; i++) {
        if (suhu[i] > maks) {
            maks = suhu[i];
            jamMaks = i + 1;
        }
    }

    cout << rata << endl;
    cout << jamMaks;

    return 0;
}