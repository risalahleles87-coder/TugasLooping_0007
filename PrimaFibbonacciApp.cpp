#include <iostream>
using namespace std;

// --- Variabel Global ---
int angka;
int pilihan;

// --- Function untuk mengecek Bilangan Prima ---
bool apakahPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// --- Function untuk mengecek Bilangan Fibonacci ---
bool apakahFibonacci(int n) {
    if (n < 0) return false;
