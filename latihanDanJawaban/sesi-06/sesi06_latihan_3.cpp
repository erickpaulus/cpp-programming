#include <iostream>
#include <stdlib.h>
using namespace std;
void inputKata(string& input){
    // Meminta input string dari pengguna
    cout << "Masukkan kata (maksimum 255 karakter): ";
    cin >> input;
}

bool isPalindrom(string input){
    bool status = true;
    // Loop untuk membandingkan karakter dari depan dan belakang
    // Ukuran string
    int length = input.length();
    for (__uint128_t i = 0; i < length / 2; i++) {
        if (input[i] != input[length - 1 - i]) {
            status = false;  // Jika ada karakter yang tidak sama
            break;  // Tidak perlu lanjutkan, bukan palindrom
        }
    }
    return status;
}
int main(){
    string input;
    inputKata(input);
    // Menampilkan hasil
    if (isPalindrom(input)) {
        cout << input << " adalah palindrom." << endl;
    } else {
        cout << input << " bukan palindrom." << endl;
    }
    system("pause");
}