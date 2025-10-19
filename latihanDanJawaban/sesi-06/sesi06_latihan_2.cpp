#include <iostream>
#include <stdlib.h>
using namespace std;

void inputJumlahBaris(int& jmlBaris){
    cout << "Jumlah baris : " ;
    cin >> jmlBaris;
}

void cetakSegitigaPascal(int jmlBaris){
    for (size_t baris = 0; baris < jmlBaris; baris++)
    {
        // Inisialisasi nilai pertama dari segitiga pascal pada setiap baris
        int value = 1;  // Nilai pertama selalu 1

        // Loop untuk menghitung dan menampilkan setiap angka di baris ke-i
        for (size_t kolom = 0; kolom <= baris; kolom++) {
            cout << value << " ";
            
            // Update value untuk elemen berikutnya di baris yang sama
            value = value * (baris - kolom) / (kolom + 1);
        }
        cout << endl;  // Pindah ke baris berikutnya
    }
}
int main(){
    int jmlBaris;
    inputJumlahBaris(jmlBaris);
    cetakSegitigaPascal(jmlBaris);
    
    system("pause");
}