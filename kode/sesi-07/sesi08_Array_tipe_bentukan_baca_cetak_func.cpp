#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
typedef int tipeArray[5];

void inputArray(tipeArray& inputBil){
    for (int i = 0; i < size(inputBil); i++)
    {
        cout << "masukan data: "; cin >> inputBil[i];
    }    
}

void cetakArray(tipeArray& bil){
    //cetak
    for (int item : bil)
    {
        cout << item << endl;
    }
}

main() {
    tipeArray bil;
    inputArray(bil);
    
    cetakArray(bil);
    system("pause");

}

