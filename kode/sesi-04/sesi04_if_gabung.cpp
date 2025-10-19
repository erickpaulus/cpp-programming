/*    Nama program  :  code_if_bersarang_studiKasus.cpp
       Nama         :  Erick
       NPM		      :  1234
       Tanggal buat	:  29 Agustus 2024
       Deskripsi	  :  Simulasi penggunaan if bersarang
       --------------------------------------------------------- */
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    string levelKeanggotaan;
    double jumlahPembelian;
    double diskon = 0.0;

    // input dari pengguna untuk level keanggotaan dan jumlah pembelian
    cout << "Masukkan tingkat keanggotaan (Silver, Gold, Platinum): ";
    cin >> levelKeanggotaan;
    cout << "Masukkan jumlah total pembelian: Rp";
    cin >> jumlahPembelian;

    diskon = 0.05; // Diskon 5% untuk semua anggota
    // Menentukan diskon berdasarkan tingkat keanggotaan dan jumlah pembelian
    if ((levelKeanggotaan == "Silver") && (jumlahPembelian > 100000)) {        
        diskon += 0.05; // Diskon 5% untuk semua         
    } else if ((levelKeanggotaan == "Gold") && (jumlahPembelian > 250000)){    
        diskon += 0.1; // Diskon 5% untuk semua         
    } else if ((levelKeanggotaan == "Platinum") && (jumlahPembelian > 500000) ) {
        diskon += 0.15; // Diskon 5% untuk semua         
    } else { diskon = 0.0;} // tidak diskon untuk non-anggota

    // Menghitung harga akhir setelah diskon
    double hargaAkhir = jumlahPembelian - (jumlahPembelian * diskon);

    // Menampilkan diskon dan harga akhir
    cout << "Diskon yang diterapkan: " << (diskon * 100) << "%" << endl;
    cout << "Harga akhir setelah diskon: Rp" << hargaAkhir << endl;
    system("pause");
    return 0;
}




