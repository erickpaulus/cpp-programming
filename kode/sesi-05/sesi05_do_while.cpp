#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {    
    int maxIterasi = 5;  // Batas iterasi
    int totalSkor = 0; // Inisialisasi
    do{
        cout << "Skor: " << totalSkor << endl; //aksi
        totalSkor++; // Perubahan 
    }
    while  (totalSkor < maxIterasi) ;  //  Terminasi
        
    system("pause");
    return 0;
    
}
