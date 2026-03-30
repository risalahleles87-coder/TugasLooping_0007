#include <iostream>
using namespace std;

// --- Variabel Global ---
int angka;
int pilihan;

// --- Function untuk mengecek Bilangan Prima ---
bool apakahPrima(int n) {
    if (n <= 1) return false;
    