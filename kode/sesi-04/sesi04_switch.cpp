/*    Nama program  :  code_switch.cpp
       Nama         :  Erick
       NPM		    :  1234
       Tanggal buat	:  29 Agustus 2024
       Deskripsi	:  Simulasi penggunaan struktur kendali pemilihan - switch
       --------------------------------------------------------- */
#include <iostream>
using namespace std;
int main() {
  char golongan = 'A';
    switch (golongan){
        case 'A' : cout << "5000000"; break;
        case 'B' : cout << "7500000"; break;
        case 'C' : cout << "1000000"; break;
        case 'D' : cout << "1250000"; break;
        case 'E' : cout << "1500000"; break;
    }
  getchar();
  return 0;
}
