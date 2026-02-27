#include <iostream>
using namespace std;

int main() {
    double B;
    cin >> B;

    double karetAlami = 3 * B;
    double karetSintetis = 1.5 * B;

    long long biaya = karetAlami * 22000 + karetSintetis * 18000;

    double alamiKuintal = karetAlami / 100;
    double sintetisKuintal = karetSintetis / 100;

    cout << biaya << endl;
    cout << alamiKuintal << endl;
    cout << sintetisKuintal;

    return 0;
}