#include<stdlib.h>
#include<iostream>
using namespace std;
const int bykELemen = 3;
typedef int larik[bykELemen];
int main(){
    larik bilangan={2,3,6};
   
    for (int i=0 ;i<bykELemen;i++){
        cout << bilangan[i] << endl;
    }
    return 0;
}