#include <iostream>
#include <stdlib.h>
using namespace std;
// mencetak nilai matriks
int main() {    
    int baris =0;
    int kolom = 0;
    int nilai = 0;

    for (size_t baris  = 0; baris < 3 ; baris++)
    {
        for (size_t kolom = 0; kolom < 5; kolom++)
        {
            cout << "(" << baris << "," << kolom << "):" << nilai << endl;
            nilai++;
        }
        
    }
    
    

    system("pause");
    return 0;
    
}
