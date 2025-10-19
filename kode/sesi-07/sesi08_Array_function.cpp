#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

// Definisi struktur untuk menyimpan array dan ukurannya
struct DataArray {
    int arr[100]; // Array dengan kapasitas maksimum 100 elemen
    int size;     // Ukuran efektif dari array
};

// Fungsi untuk membaca elemen array dari pengguna
void readArray(DataArray &data) {
    cout << "Masukkan jumlah elemen array: ";
    cin >> data.size; // Baca ukuran array dari pengguna

    cout << "Masukkan " << data.size << " elemen array: " << endl;
    for(int i = 0; i < data.size; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> data.arr[i]; // Baca elemen array satu per satu
    }
}

// Fungsi untuk menampilkan elemen array
void showArray(const DataArray &data) {
    cout << "\nIsi Array: ";
    for(int i = 0; i < data.size; ++i) {
        cout << data.arr[i] << " "; // Tampilkan elemen array satu per satu
    }
    cout << endl;
}

int main() {
    DataArray data; // Membuat variabel dari struktur DataArray

    // Baca array dari pengguna
    readArray(data);

    // Tampilkan isi array
    showArray(data);
    _getwche();
    return 0;
}


