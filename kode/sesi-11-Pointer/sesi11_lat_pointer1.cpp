#include<stdlib.h>
#include<iostream>

using namespace std;

void swap(int *kotakA,int *kotakB){
    int temp = *kotakA;
    *kotakA = *kotakB;
    *kotakB = temp;
}
int main(){
    int kotakA=4, kotakB=6;
    int *kotakC = new int;
    kotakC = &kotakA;
    int *kotakD;
    kotakD = &kotakA;
    swap(&kotakA, &kotakB);
    cout << "kotakA=" << kotakA << endl;
    cout << "kotakB=" << kotakB << endl;
    cout << "kotakC=" << *kotakC << endl;
    cout << "kotakD=" << *kotakD << endl;
    return 0;
}