#include <iostream>
using namespace std;

int main() {
    long long total = 1000000000;

    double material = total * 0.40;
    double alat = total * 0.25;
    double upah = total * 0.20;

    double upahMandor = upah * 0.15 * 5;
    double sisa = upah - upahMandor;

    double gajiKuli = sisa / 50;

    cout << (long long)gajiKuli;
    return 0;
}