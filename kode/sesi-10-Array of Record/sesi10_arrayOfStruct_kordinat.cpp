#include <iostream>
#include <string>
using namespace std;

struct kordinat {
    string nama;
    float xAxis;
    float yAxis;
};

typedef kordinat segitiga[3];

void inputTitik(kordinat& ttk) {
    cout << "Masukan nama: "; cin >> ttk.nama;
    cout << "Masukan nilai x-axis: "; cin >> ttk.xAxis;
    cout << "Masukan nilai y-axis: "; cin >> ttk.yAxis;
}

void cetakTitik(kordinat ttk) {
    cout << ttk.nama << " = (" << ttk.xAxis << "," << ttk.yAxis << ")\n";
}

void inputSegitiga(segitiga s3) {
    for (int i = 0; i < 3; i++) {     
        cout << "\nTitik ke-" << (i+1) << ":\n";
        inputTitik(s3[i]);
    }
}

void cetakSegitiga(segitiga s3) {
    cout << "\n=== Data Segitiga ===\n";
    for (int i = 0; i < 3; i++) {     // <-- sama di sini
        cetakTitik(s3[i]);
    }
}

int main() {
    segitiga s3;

    inputSegitiga(s3);
    cetakSegitiga(s3);

    return 0;
}
