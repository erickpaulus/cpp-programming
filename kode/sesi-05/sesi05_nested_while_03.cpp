#include <iostream>
#include <stdlib.h>
using namespace std;
// mencetak nilai segitiga
// 0
// 1 2
// 3 4 5 
// 6 7 8 9



int main() {    
    
    int nilai = 0;
    size_t baris  = 0;
    while ( baris < 5 )
    {
        size_t kolom = 0; 
        while (kolom <= baris )
        {
            cout <<  nilai << "\t";
            nilai++;
            kolom++;
        }
        cout << endl;
        baris++;
    }  
    
    system("pause");
    return 0;
    
}
