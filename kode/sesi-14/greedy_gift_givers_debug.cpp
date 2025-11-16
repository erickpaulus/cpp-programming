#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> names(N);
    map<string, int> balance;

    for (int i = 0; i < N; i++) {
        cin >> names[i];
        balance[names[i]] = 0;
    }

    cout << "=== Tahap Proses Hadiah ===\n";

    for (int i = 0; i < N; i++) {
        string giver;
        cin >> giver;

        int amount, count;
        cin >> amount >> count;

        cout << "\nPemberi: " << giver << endl;
        cout << "Total ingin dibagikan: " << amount << endl;
        cout << "Jumlah penerima: " << count << endl;

        if (count > 0) {
            int gift_each = amount / count;
            int total_given = gift_each * count;

            cout << "Uang diberikan setiap orang: " << gift_each << endl;
            cout << "Total uang keluar: " << total_given << endl;

            balance[giver] -= total_given;

            cout << "Saldo " << giver << " menjadi: " << balance[giver] << endl;

            for (int j = 0; j < count; j++) {
                string receiver;
                cin >> receiver;
                balance[receiver] += gift_each;

                cout << "  -> " << receiver << " menerima " << gift_each
                     << ", saldo sekarang: " << balance[receiver] << endl;
            }
        } else {
            cout << "(Tidak memberi kepada siapa pun)" << endl;
        }
    }

    cout << "\n=== Hasil Akhir ===\n";
    for (string name : names) {
        cout << name << " " << balance[name] << endl;
    }
}
