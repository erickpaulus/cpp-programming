#include <iostream>
#include <stdlib.h>

using namespace std;

typedef int larik[10];  // Type alias untuk  array 

int binarySearch(const larik& a, int n, int key) {
    int left = 0;         // Indeks awal
    int right = n - 1;    // Indeks akhir

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Hitung indeks tengah untuk menghindari overflow

        // Jika elemen ditemukan di tengah
        if (a[mid] == key) {
            return mid;
        }

        // Jika elemen lebih besar dari elemen tengah, cari di sebelah kanan
        if (a[mid] < key) {
            left = mid + 1;
        }
        // Jika elemen lebih kecil dari elemen tengah, cari di sebelah kiri
        else {
            right = mid - 1;
        }
    }
    return -1;  // Elemen tidak ditemukan
}
// Fungsi untuk mencetak hasil pencarian
void printSearchResult(int result) {
    if (result == -1) {
        cout << "Elemen tidak ditemukan dalam array." << endl;
    } else {
        cout << "Elemen ditemukan di indeks: " << result << endl;
    }
}

int main() {
    larik a = {2, 3, 4, 10, 40};  // Inisialisasi array yang sudah diurutkan
    int n = 5;  // Jumlah elemen dalam array
    int key;    // Elemen yang akan dicari

    cout << "Masukkan elemen yang akan dicari: ";
    cin >> key;

    int result = binarySearch(a, n, key);  // Memanggil fungsi Linear Search
    printSearchResult(result);  // Mencetak hasil pencarian

    system("pause");
    return 0;
}
