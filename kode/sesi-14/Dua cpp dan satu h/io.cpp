#include "io.h"
#include <fstream>
#include <iostream>

void bacaInput(
    const string& namaFile,
    vector<string>& daftarNama,
    vector<Transaction>& daftarTransaksi
) {
    ifstream fin(namaFile);
    if (!fin) {
        cout << "Gagal membuka file input: " << namaFile << endl;
        exit(1);
    }

    int N;
    fin >> N;

    // Baca nama-nama orang
    daftarNama.resize(N);
    for (int i = 0; i < N; i++) {
        fin >> daftarNama[i];
    }

    // Baca transaksi
    daftarTransaksi.resize(N);

    for (int i = 0; i < N; i++) {
        Transaction t;
        fin >> t.giver >> t.amount >> t.count;

        t.receivers.resize(t.count);
        for (int j = 0; j < t.count; j++) {
            fin >> t.receivers[j];
        }

        daftarTransaksi[i] = t;
    }
}

void simpanOutput(
    const string& namaFile,
    const vector<string>& daftarNama,
    const map<string,int>& saldo
) {
    ofstream fout(namaFile);
    if (!fout) {
        cout << "Gagal membuka file output: " << namaFile << endl;
        exit(1);
    }

    for (const auto& nama : daftarNama) {
        fout << nama << " " << saldo.at(nama) << endl;
    }
}
