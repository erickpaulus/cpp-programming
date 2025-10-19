/*    Nama program  :  code_switch.cpp
       Nama         :  Erick
       NPM		    :  1234
       Tanggal buat	:  29 Agustus 2024
       Deskripsi	:  Simulasi penggunaan struktur kendali pemilihan - switch
       --------------------------------------------------------- */
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int tahun ;
    int masaKerja;
    double gaji;
    cout << "tahun :" << endl;
    cin >> tahun;
    cout << "Masa kerja :" << endl;
    cin >> masaKerja;

    if ((tahun >= 2019) && (tahun < 2024)){
        switch (masaKerja){
            case 0 : case 1 : gaji = 2579400; break;
            case 2 : case 3 : gaji = 2660700; break;
            case 4 : case 5 : gaji = 2744500; break;
            case 6 : case 7 : gaji = 2830900; break;
            case 8 : case 9 : gaji = 2920100; break;
        }
    }
    else if (tahun >=2024) {
        switch (masaKerja){
            case 0 : case 1 : gaji = 2785700; break;
            case 2 : case 3 : gaji = 2873500; break;
            case 4 : case 5 : gaji = 2964000; break;
            case 6 : case 7 : gaji = 3057300; break;
            case 8 : case 9 : gaji = 3153600; break;
        }
    }
    else { 
        gaji = 0.0;
        cout << "tidak ada aturan untuk tahun " << tahun << endl;}
        
    cout << "Total gaji pokok tahun" << tahun << "Rp." << gaji * 12 << endl; 
    system("pause");
    return 0;
}
