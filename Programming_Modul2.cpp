#include<iostream>
#include<cmath>
using namespace std;

// Deklarasi fungsi
void penjumlahan();
void pengurangan();
void perkalian();
void pembagian();
void perpangkatan();
void integral();

// Main method
int main() {
    char operasi;
    cout << "Selamat Datang di Program Kalkulator, Pilih Operasi!" << endl;
    cout << "Penjumlahan = +" << endl;
    cout << "Pengurangan = -" << endl;
    cout << "Perkalian = *" << endl;
    cout << "Pembagian = /" << endl;
    cout << "Perpangkatan = ^" << endl;
    cout << "Integral = S" << endl;
    cin >> operasi;

    // Melakukan case sesuai yang dimasukkan pengguna
    switch (operasi) {
        case '+' :
            penjumlahan();
            break;
        case '-' :
            pengurangan();
            break;
        case '*' :
            perkalian();
            break;
        case '/' :
            pembagian();
            break;
        case '^' :
            perpangkatan();
            break;
        case 'S' :
            integral();
            break;
    }
    return 0;
}

// Definisi fungsi masing-masing
void penjumlahan() {
    double x, y;
    cout << "Angka pertama: ";
    cin >> x;
    cout << "Angka kedua: ";
    cin >> y;
    cout << "Hasil penjumlahan = " << x+y; // penjumlahan
}

void pengurangan() {
    double x, y;
    cout << "Angka pertama: ";
    cin >> x;
    cout << "Angka kedua: ";
    cin >> y;
    cout << "Hasil pengurangan = " << x-y; // pengurangan
}

void perkalian() {
    double x, y;
    cout << "Angka pertama: ";
    cin >> x;
    cout << "Angka kedua: ";
    cin >> y;
    cout << "Hasil perkalian = " << x*y; // perkalian
}

void pembagian() {
    double x, y;
    cout << "Angka pertama: ";
    cin >> x;
    cout << "Angka kedua: ";
    cin >> y;
    cout << "Hasil pembagian = " << x/y; // pembagian
}

void perpangkatan() {
    double x, y;
    cout << "Angka pertama: ";
    cin >> x;
    cout << "Angka kedua: ";
    cin >> y;
    cout << "Hasil perpangkatan = " << pow(x, y); // perpangkatan dengan suatu fungsi bawaan
}

void integral() {
    double a, b;
    int xkanan, xkiri, n;

    cout << "Masukkan persamaan dalam f(x) = ax + b" << endl; // asumsi fungsi dalam bentuk seperti yg tertulis
    cout << "Nilai a: ";
    cin >> a;
    cout << "Nilai b: ";
    cin >> b;
    cout << "Tentukan range dengan memasukkannya dalam sumbu x" << endl;
    cout << "Masukkan batas kiri: ";
    cin >> xkiri;
    cout << "Masukkan batas kanan: ";
    cin >> xkanan;
    cout << "Masukkan banyak partisi: "; // banyaknya jumlah partisi trapesium
    cin >> n;

    double h = abs(xkanan-xkiri)/n; // adalah deltax

    double count = 0.0; // inisiasi awal perhitungan
    do
    {
        count += (0.5*(xkiri+h-xkiri)*(a*xkiri+2*b+a*(xkiri+h))); // rumus integral riemann
        xkiri += 1;
    } while (xkiri + h <= xkanan);

    cout << "Hasil integral = " << count;
}