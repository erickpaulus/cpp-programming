#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
main() { 
    typedef int tipeArray[5];
    tipeArray bil;
    
    int jmlData;
    // cout  << "Banyak Data : "; cin >> jmlData;
    //baca
    // for (size_t i = 0; i < jmlData; i++)
    // {
    //     cout << "masukan data: "; cin >> bil[i];

    // }
    
    for (int i = 0; i < size(bil); i++)
    {
        cout << "masukan data: "; cin >> bil[i];
    }
    

    //cetak
    for (int item : bil)
    {
        cout << item << endl;
    }
    system("pause");

}

