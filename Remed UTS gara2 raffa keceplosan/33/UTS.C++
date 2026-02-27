#include <iostream>
using namespace std;

int main() {
    float berat;
    int cacat;
    cin >> berat >> cacat;

    string grade;
    if (berat > 200) grade = "A";
    else if (berat >= 150) grade = "B";
    else grade = "C";

    if (cacat == 1) {
        if (grade == "A") grade = "B";
        else if (grade == "B") grade = "C";
        else grade = "Reject";
    }

    cout << "Grade apel: " << grade;
}