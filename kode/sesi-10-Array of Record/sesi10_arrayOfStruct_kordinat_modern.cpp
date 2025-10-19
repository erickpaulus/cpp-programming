#include <iostream>
#include <string>
#include <array>

using namespace std;

struct kordinat {
    string nama;
    float xAxis;
    float yAxis;
};

const int JML_SEGITIGA =3;
// typedef kordinat segitiga[3];

void inputTitik(kordinat& ttk) {
    cout << "Masukan nama: "; cin >> ttk.nama;
    cout << "Masukan nilai x-axis: "; cin >> ttk.xAxis;
    cout << "Masukan nilai y-axis: "; cin >> ttk.yAxis;
}

void cetakTitik(kordinat ttk) {
    cout << ttk.nama << " = (" << ttk.xAxis << "," << ttk.yAxis << ")\n";
}

void inputSegitiga(array<kordinat,JML_SEGITIGA>& s3) {
    // for (int i = 0; i < 3; i++) {     
    //     cout << "\nTitik ke-" << (i+1) << ":\n";
    //     inputTitik(s3[i]);
    // }
    int i = 1;
    for (auto& ttk:s3){
        cout << "\nTitik ke-" << i++ << ":\n";
        inputTitik(ttk);
    }
}

void cetakSegitiga(array<kordinat,JML_SEGITIGA>& s3) {
    cout << "\n=== Data Segitiga ===\n";
    for (int i = 0; i < s3.size(); i++) {     // <-- sama di sini
        cetakTitik(s3[i]);
    }
    
}

int main() {
    // segitiga s3;
    array<kordinat, JML_SEGITIGA> s3;

    inputSegitiga(s3);
    cetakSegitiga(s3);

    return 0;
}
