#include <iostream>
using namespace std;

int main() {
    int bensin = 60;
    for (int lap = 1; lap <= 50; lap++) {
        bensin -= 3;
        if (bensin <= 0) {
            cout << "Lap " << lap << ": Bensin habis!\n";
            break;
        }
        if (lap % 5 == 0) bensin += 10;
        cout << "Lap " << lap << ": Sisa bensin " << bensin << "L\n";
    }
}