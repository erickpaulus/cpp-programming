#include <iostream>
#include <stdlib.h>

using namespace std;


int pangkat2(int x);        //Header / deklarasi fungsi

main() {
    int n;
    cin >> n;
    cout << pangkat2(n) << endl;  //Testing fungsi
    system("pause");
}

int pangkat2(int x) {        // definisi fungsi di bawah main
    cout << x/3;
    return ( x * x);    //perhatikan apa yang terjadi tanpa return
}







