#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {    
    int maxIterasi = 5;  // Batas iterasi

    int totalSkor = 0; // Inisialisasi
    while  (totalSkor < maxIterasi) {  //  Terminasi
        cout << "Skor: " << totalSkor << endl;
        totalSkor++; // Perubahan 
    }
    system("pause");
    return 0;
    
}
