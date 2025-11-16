#ifndef IO_H
#define IO_H

#include <vector>
#include <map>
#include <string>
using namespace std;

// Struktur transaksi hadiah
struct Transaction {
    string giver;
    int amount;
    int count;
    vector<string> receivers;
};

// Fungsi membaca input dari file
void bacaInput(
    const string& namaFile,
    vector<string>& daftarNama,
    vector<Transaction>& daftarTransaksi
);

// Fungsi menulis output ke file
void simpanOutput(
    const string& namaFile,
    const vector<string>& daftarNama,
    const map<string,int>& saldo
);

#endif
