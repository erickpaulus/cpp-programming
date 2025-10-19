#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string nama1;         // Using C++ string for user input
    char nama2[50];      
    char alamat[50];     

    cout << "Contoh baca dan tulis" << endl;
    
    cout << "Ketik Nama anda: "; 
    getline(cin, nama1);    
    cout << "Nama anda adalah : " << nama1 << endl; 

    cout << "Ketik Alamat anda: "; 
    cin.getline(alamat, 50);   // Correctly reading address
    cout << "Alamat anda adalah : " << alamat << endl; // Fixed missing semicolon

    // Read name again using character array
    cout << "Ketik Nama anda lagi : "; 
    cin >> nama2;              
    cout << "Nama anda adalah : " << nama2 << endl;  

    // Replace system("pause") for portability
    cout << "Press Enter to continue..."; 
    cin.ignore(); // To ignore the newline left in the buffer
    cin.get();    // Wait for the user to press Enter
    getchar();
    return 0;
}
