#include <iostream>
using namespace std;

int main() {
    int volume = 0;
    int jam = 0;

    while (true) {
        jam++;
        volume += 500;

        if (jam % 4 == 0) {
            volume -= 1200;
            if (volume < 0) volume = 0;
        }

        if (volume >= 10000) {
            cout << "Siaga 1";
            break;
        }
    }

    return 0;
}