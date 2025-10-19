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
    

    // input dari pengguna untuk level keanggotaan dan jumlah pembelian
    cout << "Masukkan tingkat keanggotaan (Silver, Gold, Platinum): ";
    cin >> levelKeanggotaan;
    cout << "Masukkan jumlah total pembelian: Rp";
    cin >> jumlahPembelian;
    
    double diskon = 0.0;
    // Menentukan diskon berdasarkan tingkat keanggotaan dan jumlah pembelian
    if (levelKeanggotaan == "Silver") {
        if (jumlahPembelian > 100000) {
            diskon = 0.05; // Diskon 5% untuk anggota Silver pada pembelian di atas Rp100.000
        }
    } else if (levelKeanggotaan == "Gold") {
        if (jumlahPembelian > 100000) {
            diskon = 0.10; // Diskon 10% untuk anggota Gold pada pembelian di atas Rp100.000
        }
        if (jumlahPembelian > 500000) {
            diskon += 0.05; // Tambahan diskon 5% untuk anggota Gold pada pembelian di atas Rp500.000
        }
    } else if (levelKeanggotaan == "Platinum") {
        diskon = 0.15; // Diskon 15% untuk anggota Platinum pada semua pembelian
        if (jumlahPembelian > 500000) {
            diskon += 0.10; // Tambahan diskon 10% untuk anggota Platinum pada pembelian di atas Rp500.000
        }
    }

    // Menghitung harga akhir setelah diskon
    double hargaAkhir = jumlahPembelian - (jumlahPembelian * diskon);

    // Menampilkan diskon dan harga akhir
    cout << "Diskon yang diterapkan: " << (diskon * 100) << "%" << endl;
    cout << "Harga akhir setelah diskon: Rp" << hargaAkhir << endl;
    system("pause");
    return 0;
}




