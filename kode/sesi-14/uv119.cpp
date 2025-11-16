#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    bool grupPertama = true;
    int jumlahOrang;

    // Selama masih ada grup data yang bisa dibaca
    while (cin >> jumlahOrang) {

        // Baca nama-nama
        vector<string> daftarNama(jumlahOrang);
        unordered_map<string, int> indeksNama;

        for (int i = 0; i < jumlahOrang; i++) {
            cin >> daftarNama[i];
            indeksNama[daftarNama[i]] = i;
        }

        // net[i] menyimpan perubahan saldo bersih orang i
        vector<int> saldoBersih(jumlahOrang, 0);

        // Proses setiap pemberi
        for (int i = 0; i < jumlahOrang; i++) {

            string pemberi;
            int jumlahHadiah, jumlahPenerima;

            cin >> pemberi >> jumlahHadiah >> jumlahPenerima;
            int idxPemberi = indeksNama[pemberi];

            // Jika ada yang menerima hadiah
            if (jumlahPenerima > 0) {
                int hadiahPerOrang = jumlahHadiah / jumlahPenerima;

                // Kurangi saldo pemberi
                saldoBersih[idxPemberi] -= hadiahPerOrang * jumlahPenerima;

                // Tambahkan ke para penerima
                for (int j = 0; j < jumlahPenerima; j++) {
                    string penerima;
                    cin >> penerima;
                    int idxPenerima = indeksNama[penerima];

                    saldoBersih[idxPenerima] += hadiahPerOrang;
                }
            }
        }

        // Pisahkan output antar grup dengan baris kosong
        if (!grupPertama)
            cout << "\n";
        grupPertama = false;

        // Tampilkan hasil akhir untuk grup ini
        for (int i = 0; i < jumlahOrang; i++) {
            cout << daftarNama[i] << " " << saldoBersih[i] << "\n";
        }
    }

    return 0;
}
