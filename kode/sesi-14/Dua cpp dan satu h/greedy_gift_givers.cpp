#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "io.h"
using namespace std;

/* --------------------------------------------------------
   Proses pembagian hadiah
   -------------------------------------------------------- */
map<string, int> prosesHadiah(
    const vector<string>& daftarNama,
    const vector<Transaction>& daftarTransaksi
) {
    map<string, int> saldo;

    // Inisialisasi saldo
    for (const auto& nama : daftarNama) {
        saldo[nama] = 0;
    }

    // Proses setiap transaksi
    for (const auto& t : daftarTransaksi) {
        if (t.count == 0) continue;

        int bagian = t.amount / t.count;
        int totalKeluar = bagian * t.count;

        saldo[t.giver] -= totalKeluar;

        for (const auto& penerima : t.receivers) {
            saldo[penerima] += bagian;
        }
    }

    return saldo;
}

/* --------------------------------------------------------
   MAIN PROGRAM
   -------------------------------------------------------- */
int main() {
    vector<string> daftarNama;
    vector<Transaction> daftarTransaksi;

    // 1. Baca input dari file
    bacaInput("input.txt", daftarNama, daftarTransaksi);

    // 2. Proses logika hadiah
    map<string, int> saldoAkhir = prosesHadiah(daftarNama, daftarTransaksi);

    // 3. Simpan hasil ke file
    simpanOutput("output.txt", daftarNama, saldoAkhir);

    cout << "Proses selesai. Hasil tersimpan di output.txt\n";
    return 0;
}

// g++ io.cpp greedy_gift_givers.cpp -o hadiah
// ./hadiah
