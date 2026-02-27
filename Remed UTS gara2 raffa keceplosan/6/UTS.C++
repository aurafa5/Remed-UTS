#include <iostream>
using namespace std;

int main() {
    int kehadiran[10];
    for (int i = 0; i < 10; i++) {
        cin >> kehadiran[i];
    }

    int masuk = 0;
    for (int i = 0; i < 10; i++) {
        if (kehadiran[i] == 1) masuk++;
    }

    double persen = (masuk / 10.0) * 100;

    cout << masuk << endl;
    cout << persen;
    return 0;
}