#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <bitset> // For binary conversion
using namespace std;
main(){
    int num = 119; 
    
    // Display in hexadecimal, octal, and decimal
    cout << "hex: " << hex << num << endl;
    cout << "oct: " << oct << num << endl;
    cout << "dec: " << dec << num << endl;

    // Display in binary
    cout << "bin: " << bitset<8>(num) << endl; // 8 bits (can adjust based on range)
    
    system("pause");
}

