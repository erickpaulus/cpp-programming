#include <iostream>
#include <stdlib.h>
using namespace std;

int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base Case
    }
    return n * faktorial(n - 1);  // Recursive Case
}

int main() {
    cout << "Faktorial 5: " << faktorial(5) << endl;
    system("pause");
    return 0;
}