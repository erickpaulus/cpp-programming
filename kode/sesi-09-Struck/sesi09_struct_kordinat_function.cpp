/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

struct kordinat{
  void cetakPesan(){ //deklrasi fungsi
    cout << "Masukan nilai titik \n";
  }
  string nama;
  float xAxis;
  float yAxis;
};

typedef kordinat segitiga[3];

void inputTitik(kordinat& ttk){
    cout << "nama: "; cin >>ttk.nama;
    cout << "x-axis: "; cin >>ttk.xAxis;
    cout << "y-axis: "; cin >>ttk.yAxis;
}

void cetakTitik(kordinat ttk){
    cout << ttk.nama << "(" << ttk.xAxis << "," << ttk.yAxis << ")\n";
}

void inputSegitiga(segitiga s3){
    for(int i = 0; i<3; i++){
        inputTitik(s3[i]);
    }
}

void cetakSegitiga(segitiga s3){
    for(int i = 0; i<3;i++){
        cetakTitik(s3[i]);
    }
}
int main()
{
    kordinat A;
    A.cetakPesan();
    inputTitik(A);
    cetakTitik(A);

    return 0;
}