#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
main() { 
    int bil[5] = {1,2,3,4,5};
    for (int i : bil)
    {
        cout << i << endl;
    }
    cout << bil[9]; // perhatikan jika akses indeks lebih dari yang dideklarasikan
    getchar();

}

