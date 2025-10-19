#include <iostream>
#include <stdlib.h>

using namespace std;

typedef int larik[10];  // Type alias untuk  array 

// Fungsi Linear Search
int linearSearch(const larik& a, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;  // Jika elemen ditemukan, kembalikan indeksnya
        }
    }
    return -1;  // Jika elemen tidak ditemukan, kembalikan -1
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
    larik a = {10, 23, 45, 70, 11, 15};  // Inisialisasi array
    int n = 6;  // Jumlah elemen dalam array
    int key;    // Elemen yang akan dicari

    cout << "Masukkan elemen yang akan dicari: ";
    cin >> key;

    int result = linearSearch(a, n, key);  // Memanggil fungsi Linear Search
    printSearchResult(result);  // Mencetak hasil pencarian

    system("pause");
    return 0;
}
