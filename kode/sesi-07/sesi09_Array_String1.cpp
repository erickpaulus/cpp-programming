#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
int main() {
    // contoh  dalam C
    char str[] = "Hallo"; // Secara otomatis menjadi {'H', 'a', 'l', 'l', 'o', '\0'}    
    // char str [] = {'H', 'a' ,'l', 'l', 'o', '\0' };

    // contoh dalam C++
    // string str = "Hallo";
    // cout << str << endl;    
    // cout << "Karakter akhir (null character) di index ke-5: "<<  str[5]; 

    printf("String: %s\n", str); // Mencetak "Hello"
    printf("Karakter akhir (null character) di index ke-5: %d\n", str[5]); // Menampilkan 0, yaitu nilai ASCII dari '\0'
    system("pause");
    return 0;
}
