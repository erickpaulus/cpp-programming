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

    for (int i = 0; i < jumlahOrang; i++) {
        cin >> daftarNama[i];
        saldo[daftarNama[i]] = 0;
    }

    for (int i = 0; i < jumlahOrang; i++) {
        string pemberiHadiah;
        cin >> pemberiHadiah;

        int jumlahUang, jumlahPenerima;
        cin >> jumlahUang >> jumlahPenerima;

        if (jumlahPenerima > 0) {
            int uangPerOrang = jumlahUang / jumlahPenerima;
            int totalTerpakai = uangPerOrang * jumlahPenerima;

            saldo[pemberiHadiah] -= totalTerpakai;

            for (int j = 0; j < jumlahPenerima; j++) {
                string penerima;
                cin >> penerima;
                saldo[penerima] += uangPerOrang;
            }
        } else {
            // tetap membaca format tapi tidak ada penerima
        }
    }

    for (string nama : daftarNama) {
        cout << nama << " " << saldo[nama] << endl;
    }
}
