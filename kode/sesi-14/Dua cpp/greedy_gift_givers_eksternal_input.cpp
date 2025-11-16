#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

// Definisi struktur Transaction juga diperlukan di sini
struct Transaction {
    string giver;
    int amount;
    int count;
    vector<string> receivers;
};

// Deklarasi fungsi-fungsi yang ada di io.cpp
void bacaInput(const string& namaFile, vector<string>& daftarNama, vector<Transaction>& daftarTransaksi);
void simpanOutput(const string& namaFile, const vector<string>& daftarNama, const map<string,int>& saldo);

/* --------------------------------------------------------
   Menghitung perubahan saldo setiap orang
   -------------------------------------------------------- */
map<string, int> prosesHadiah(
    const vector<string>& daftarNama,
    const vector<Transaction>& daftarTransaksi
) {
    map<string, int> saldo;

    // Semua orang mulai dari 0
    for (const auto& nama : daftarNama) {
        saldo[nama] = 0;
    }

    // Proses setiap transaksi hadiah
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


// g++ io.cpp greedy_gift_givers_eksternal_input.cpp -o hadiah
//hadiah