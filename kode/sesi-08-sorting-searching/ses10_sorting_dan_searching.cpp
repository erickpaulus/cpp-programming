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

// Fungsi Bubble Sort 
void bubbleSort(larik& a, int n) {
    
    for (int i = 0; i < n-1; i++) {
        // lihat proses
        cout << "proses pertukaran i =" << i+1 <<" : \n";

        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j + 1])
                tukar(a[j], a[j + 1]);                
                printArray(a, n);
        }
    }
}

void bubbleSort(larik& a, int n) {
    // lihat proses
    cout << "proses pertukaran: \n";

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (a[j] > a[j + 1])
                tukar(a[j], a[j + 1]);                
                printArray(a, n);
        }
    }
}

int main() {
    larik a = {5, 8, 2, 4, 1};  // Inisialisasi array
    int n = 5;                  // jumlah elemen dalam array

    // Cetak array sebelum sorting
    cout << "Array sebelum sorting: ";
    printArray(a, n);

    // panggil fungsi  bubbleSort 
    bubbleSort(a, n);

    // Cetak array sesudah sorting
    cout << "Array setelah sorting: ";
    printArray(a, n);

    system("pause");
    return 0;
}
