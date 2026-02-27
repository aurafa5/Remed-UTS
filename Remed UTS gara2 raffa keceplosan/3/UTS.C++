#include <iostream>
using namespace std;

int main() {
    double km;
    int rating;
    cin >> km >> rating;

    double pendapatan = km * 2500;

    if (km > 50) pendapatan += 20000;
    if (rating == 1) pendapatan += pendapatan * 0.05;

    cout << (long long)pendapatan;
    return 0;
}