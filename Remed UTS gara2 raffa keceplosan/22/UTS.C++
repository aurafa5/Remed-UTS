#include <iostream>
using namespace std;

int main() {
    float magnitudo, kedalaman;
    cin >> magnitudo >> kedalaman;

    string status;

    if (magnitudo < 5.0) status = "Ringan";
    else if (magnitudo <= 6.5) status = "Sedang";
    else if (magnitudo <= 7.5) status = "Kuat";
    else status = "Sangat Berbahaya";

    if (kedalaman < 10) status += " - Potensi Tsunami";

    cout << status;
}