#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {
    int x, y, z;
    x = y = z = 5;

    x *= y += z -= 1;

    cout << "x: " << x << endl; // x = 45
    cout << "y: " << y << endl; // y = 9
    cout << "z: " << z << endl; // z = 4

    system("pause");
    return 0;
}
