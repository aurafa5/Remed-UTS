#include <iostream>
#include <ctime>
using namespace std;

int hitung_pajak(string jenis, int tahun_beli) {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int tahun = 1900 + ltm->tm_year;

    int usia = tahun - tahun_beli;
    int pajak = (jenis == "Motor" || jenis == "motor") ? 200000 : 1000000;

    if (usia > 10) pajak *= 0.8;

    return pajak;
}