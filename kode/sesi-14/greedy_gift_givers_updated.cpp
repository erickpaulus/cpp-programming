#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
    bool pertama = true;   // untuk mengatur blank line antar grup
    int jumlah_orang;

    while (cin >> jumlah_orang) {   // baca hingga EOF
        vector<string> daftar_nama(jumlah_orang);
        map<string, int> saldo;     // saldo bersih setiap orang

        // Input daftar nama
        for (int i = 0; i < jumlah_orang; i++) {
            cin >> daftar_nama[i];
            saldo[daftar_nama[i]] = 0;
        }

        // Proses pemberian hadiah
        for (int i = 0; i < jumlah_orang; i++) {
            string pemberi;
            cin >> pemberi;

            int jumlah_uang, jumlah_penerima;
            cin >> jumlah_uang >> jumlah_penerima;

            if (jumlah_penerima > 0) {
                int per_orang = jumlah_uang / jumlah_penerima;
                int total_keluar = per_orang * jumlah_penerima;

                saldo[pemberi] -= total_keluar;

                for (int j = 0; j < jumlah_penerima; j++) {
                    string penerima;
                    cin >> penerima;
                    saldo[penerima] += per_orang;
                }
            } else {
                // tidak ada penerima → tidak melakukan apa-apa
            }
        }

        // Output: beri blank line antar grup (kecuali grup pertama)
        if (!pertama) cout << "\n";
        pertama = false;

        for (const string& nama : daftar_nama) {
            cout << nama << " " << saldo[nama] << "\n";
        }
    }

    return 0;
}
