#include <iostream>
using namespace std;

int main() {
    int K;
    cin >> K;

    for (int i = 0; i < K; i++) {
        for (int t = 30; t > 0; t--) cout << "Hijau " << t << endl;
        for (int t = 5; t > 0; t--) cout << "Kuning " << t << endl;
        for (int t = 20; t > 0; t--) cout << "Merah " << t << endl;
    }

    return 0;
}