#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {    
    int maxIterasi = 5;  // Batas iterasi

    // Menggunakan for loop
    for (int totalSkor = 0; totalSkor < maxIterasi; totalSkor++) {  // Inisialisasi, Terminasi, Perubahan dalam satu baris
        cout << "Skor: " << totalSkor << endl;  // Aksi
    }
    system("pause");
    return 0;
    
}
