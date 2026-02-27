#include <iostream>
using namespace std;

int main() {
    double X, K;
    cin >> X >> K;

    double totalMegabit = X * 8;
    double detik = totalMegabit / K;

    int menit = detik / 60;
    int detikSisa = (int)detik % 60;

    cout << menit << " " << detikSisa;
    return 0;
}