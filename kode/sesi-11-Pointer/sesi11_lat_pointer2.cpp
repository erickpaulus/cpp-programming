#include<stdlib.h>
#include<iostream>

using namespace std;
const int jmlElemen = 4;
typedef int larik[jmlElemen];

int main(){
    larik data = {4,5,2,1};
    // for(int i=0 ; i<jmlElemen;i++){
    //     cout << data[i] << endl;
    // }
    // for(int *elemenData = data;elemenData<data+jmlElemen;elemenData++){
    //     cout << *elemenData << endl;
    // }
    for(int i=0; i<jmlElemen; i++){
        cout << *(data + i) << endl;
    }
    return 0;
}