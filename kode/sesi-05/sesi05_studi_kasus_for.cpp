#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    const int TOTAL_JAM = 3;  // Jumlah jam dalam sehari
    double suhu, total_suhu = 0.0;

    // Menggunakan for loop untuk menerima input suhu 24 kali
    for (int i = 0; i < TOTAL_JAM; i++) {
        cout << "Masukkan suhu untuk jam ke-" << (i + 1) << ": ";
        cin >> suhu;
        total_suhu += suhu;
    }

    double rata_rata = total_suhu / TOTAL_JAM;
    cout << "Rata-rata suhu dalam sehari adalah: " << rata_rata << endl;
    system("pause");
    return 0;
}
