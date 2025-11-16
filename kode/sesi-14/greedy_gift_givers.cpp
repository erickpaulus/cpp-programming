#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
    int jumlahOrang;
    cin >> jumlahOrang;

    vector<string> daftarNama(jumlahOrang);
    map<string, int> saldo;

    // Input semua nama
    for (int i = 0; i < jumlahOrang; i++) {
        cin >> daftarNama[i];
        saldo[daftarNama[i]] = 0;
    }

    // Proses pembagian hadiah
    for (int i = 0; i < jumlahOrang; i++) {
        string pemberiHadiah;
        cin >> pemberiHadiah;

        int jumlahUang, jumlahPenerima;
        cin >> jumlahUang >> jumlahPenerima;

        if (jumlahPenerima > 0) {
            int uangPerOrang = jumlahUang / jumlahPenerima;
            int totalTerpakai = uangPerOrang * jumlahPenerima;

            // Uang pemberi berkurang
            saldo[pemberiHadiah] -= totalTerpakai;

            // Bagikan ke penerima
            for (int j = 0; j < jumlahPenerima; j++) {
                string penerima;
                cin >> penerima;
                saldo[penerima] += uangPerOrang;
            }
        } else {
            // Tidak ada penerima, tidak ada perubahan saldo
        }
    }

    // Output saldo akhir
    for (const string &nama : daftarNama) {
        cout << nama << " " << saldo[nama] << endl;
    }

    return 0;
}
