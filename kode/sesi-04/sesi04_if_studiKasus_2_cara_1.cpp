/*    Nama program  :  code_if_studiKasus_2_cara_1.cpp
       Nama         :  Erick
       NPM		      :  1234
       Tanggal buat	:  29 Agustus 2024
       Deskripsi	  :  Studi kasus penentuan gaji berdasarkan golongan
       --------------------------------------------------------- */
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
  char golongan = 'A';
  if (golongan == 'A'){
    cout << "5000000";
    }
  else if (golongan == 'B') {
    cout << "7500000";
  }
  else {
    cout << "10000000";
  }
  system("pause");
  return 0;
}


