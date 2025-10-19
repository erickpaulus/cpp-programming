#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

struct Mahasiswa {
    char npm[8];
    string nama;
    int nilai;
};

typedef Mahasiswa LarikMhs[10];
LarikMhs mhs;

void banyakData(int& n) {          // Input banyak data
    cout << "Banyak data: ";
    cin >> n;
}

void inputMahasiswa(LarikMhs& mhs, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Masukan data mahasiswa ke- " << (i + 1) << endl;
        
        cout << "NPM    : ";
        cin >> mhs[i].npm;
        
        cin.ignore(); // Membersihkan buffer sebelum menggunakan getline
        cout << "Nama   : ";
        getline(cin, mhs[i].nama);

        cout << "Nilai  : ";
        cin >> mhs[i].nilai;
    }
}

void cetakMahasiswa(LarikMhs mhs, int n) {
    cout << "\nPENCETAKAN DATA MAHASISWA" << endl;
    for (int i = 0; i < n; i++) {
        cout << "NPM: " << mhs[i].npm << ", Nama: " << mhs[i].nama << ", Nilai: " << mhs[i].nilai << endl;
    }
}

float average(LarikMhs a, int n){
    float total = 0;
    for (int i = 0; i < n; i++){
        total += a[i].nilai;
    }
    return total / n;
}

float nilaiTertinggi(LarikMhs a, int n){
    float terbesar = a[0].nilai;
    for (int i = 1; i < n; i++){
        if (a[i].nilai > terbesar){
            terbesar = a[i].nilai;
        }
    }
    return terbesar;
}

void tukar(Mahasiswa& a, Mahasiswa& b){
    Mahasiswa temp = a;
    a = b;
    b = temp;
}

void ascendingSort(LarikMhs a, int n){
    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (a[j].npm > a[j + 1].npm){
                tukar(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    LarikMhs mhs;
    int n;

    // Input banyak data dan data mahasiswa
    banyakData(n);
    inputMahasiswa(mhs, n);

    // Cetak data sebelum pengurutan
    cout << "\nData Mahasiswa Sebelum Pengurutan:\n";
    cetakMahasiswa(mhs, n);

    // Hitung rata-rata nilai
    float avg = average(mhs, n);
    cout << "\nRata-rata Nilai Mahasiswa: " << avg << endl;

    // Temukan nilai tertinggi
    float nilai_tertinggi = nilaiTertinggi(mhs, n);
    cout << "Nilai Tertinggi Mahasiswa: " << nilai_tertinggi << endl;

    // Urutkan data berdasarkan NPM
    ascendingSort(mhs, n);

    // Cetak data setelah pengurutan
    cout << "\nData Mahasiswa Setelah Pengurutan Berdasarkan NPM:\n";
    cetakMahasiswa(mhs, n);

    system("pause");
    return 0;
}

