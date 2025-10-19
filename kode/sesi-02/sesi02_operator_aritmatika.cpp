#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {
    int x = 5; // Misalkan nilai x adalah 5
    int y = 3; // Misalkan nilai y adalah 3
    int z = 10; // Misalkan nilai z adalah 10

    // Gabungkan kedua operasi dalam satu baris
    z -= (x + y);
    y += 1;

    // Tampilkan hasil
    cout << "z: " << z << endl;
    cout << "y: " << y << endl;

    int m = 5;
    int n = 2;

    m *= n++;
    cout << "After m *= n++:" << endl;
    cout << "m: " << m << endl; // m = 10
    cout << "n: " << n << endl; // n = 3
     
    m = 5;
    n = 2;
    m += --n;
    cout << "After m += --n:" << endl;
    cout << "m: " << m << endl; // m = 6
    cout << "n: " << n << endl; // n = 1
    system("pause");
    return 0;
}
