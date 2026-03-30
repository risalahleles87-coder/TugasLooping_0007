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
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;

    cout << "Pilih menu (0 / 1 / 2): ";
    cin >> pilihan;
}

// --- Prosedural untuk Menampilkan Hasil ---
void tampilkanHasil(string jenis) {
    bool hasil;
    if (jenis == "prima") {
        hasil = apakahPrima(angka);
        if (hasil) cout << angka << " adalah Bilangan Prima." << endl;
        else cout << angka << " bukan Bilangan Prima." << endl;
    } 
    else if (jenis == "fibonacci") {
        hasil = apakahFibonacci(angka);
        if (hasil) cout << angka << " termasuk dalam deret Fibonacci." << endl;
        else cout << angka << " tidak termasuk deret Fibonacci." << endl;
    }
}

// --- Function Main ---
int main() {
    pilihan = -1; // Inisialisasi agar masuk ke perulangan

    while (pilihan != 0) {
        tampilkanMenu();

        switch (pilihan) {
            case 1:
                inputAngka();
                tampilkanHasil("prima");
                break;
            