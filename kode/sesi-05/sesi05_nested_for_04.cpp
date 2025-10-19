#include <iostream>
#include <stdlib.h>
using namespace std;
// mencetak nilai diamond

//       1
//    1  1  1
// 1  1  1  1  1
//    1  1  1
//       1



int main() {    
    int baris =0;
    int kolom = 0;
    int nilai = 0;
    // fix this logic to print diamond
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
