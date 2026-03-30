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
    int a = 0;
    int b = 1;
    
    // Melakukan perulangan hingga deret mencapai atau melewati angka n
    while (a < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == n);
}

// --- Prosedural untuk Input ---
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

// --- Prosedural untuk Menampilkan Menu ---
void tampilkanMenu() {
    cout << "\n========== MENU UTAMA ==========" << endl;
