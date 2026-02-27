#include <iostream>
using namespace std;

int main() {
    int tinggi = 0;
    int hari = 0;

    while (true) {
        hari++;
        tinggi += 15;

        if (hari % 7 == 0) {
            tinggi -= 20;
        }

        if (tinggi <= 0) break;
    }

    return 0;
}