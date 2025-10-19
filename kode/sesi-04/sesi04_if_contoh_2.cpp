/*    Nama program  :  code_if_contoh_2.cpp
       Nama         :  Erick
       NPM		      :  1234
       Tanggal buat	:  29 Agustus 2024
       Deskripsi	  :  Simulasi penggunaan struktur kendali pemilihan - if - Analisa kasus dua komplementer
       --------------------------------------------------------- */
#include <iostream>
#include <stdlib.h>
using namespace std;
main() {
  string status = "pegawai";
  cin >> status;
  if (status == "pegawai") {
    cout << "layak terima gaji" ;
  }
  else{
    cout << "tidak layak terima gaji" ;
  }
  
  system("pause");
}
