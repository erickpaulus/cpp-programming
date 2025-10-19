#include <iostream>
#include <stdlib.h>

using namespace std;

typedef int larik[10];  // Type alias untuk  array 


// fungsi cetak array
void printArray(const larik& a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function tukar 2 integer
void tukar(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

// Fungsi insertion Sort 
void insertionSort(larik& a, int n) {
    for (int i = 1; i < n; i++) {
        cout << "proses pertukaran i =" << i <<" : \n";
        int key = a[i];  // Simpan elemen saat ini
        int j = i - 1;

        // Pindahkan elemen yang lebih besar dari key ke posisi setelahnya
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;  // Tempatkan key di posisi yang benar
        printArray(a, n);
    }
}
int main() {
    larik a = {5, 8, 2, 4, 1};  // Inisialisasi array
    int n = 5;                  // jumlah elemen dalam array

    // Cetak array sebelum sorting
    cout << "Array sebelum sorting: ";
    printArray(a, n);

    // panggil fungsi  bubbleSort 
    insertionSort(a, n);

    // Cetak array sesudah sorting
    cout << "Array setelah sorting: ";
    printArray(a, n);

    system("pause");
    return 0;
}
