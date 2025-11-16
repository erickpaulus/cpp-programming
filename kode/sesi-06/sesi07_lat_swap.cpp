#include<stdlib.h>
#include<iostream>

using namespace std;

void swap(int &kotakA,int &kotakB){
    int temp = kotakA;
    kotakA = kotakB;
    kotakB = temp;
}
int main(){
    int kotakA=4, kotakB=6;
    swap(kotakA, kotakB);
    cout << "kotakA=" << kotakA << endl;
    cout << "kotakB=" << kotakB << endl;
    return 0;
}