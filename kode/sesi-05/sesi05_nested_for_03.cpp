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

    for (size_t baris  = 0; baris < 5 ; baris++)
    {
        for (size_t kolom = 0; kolom <= baris ; kolom++)
        {
            cout <<  nilai << "\t";
            nilai++;
        }
        cout << endl;
    }
    
    

    system("pause");
    return 0;
    
}
