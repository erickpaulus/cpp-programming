/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

struct kordinat{
  string nama;
  float xAxis;
  float yAxis;
};

typedef kordinat segitiga[3];

void inputTitik(kordinat& ttk){
    cout << "masukan nama: "; cin >>ttk.nama;
    cout << "masukan nilai x-axis: "; cin >>ttk.xAxis;
    cout << "masukan nilai y-axis: "; cin >>ttk.yAxis;
}

void cetakTitik(kordinat ttk){
    cout << "(" << ttk.xAxis << "," << ttk.yAxis << ")\n";
}

void inputSegitiga(segitiga s3){
    for(int i = 0; i<sizeof(s3); i++){
        inputTitik(s3[i]);
    }
}

void cetakSegitiga(segitiga s3){
    for(int i = 0; i<sizeof(s3);i++){
        cetakTitik(s3[i]);
    }
}
int main()
{
    kordinat A;
    inputTitik(A);
    cetakTitik(A);

    return 0;
}