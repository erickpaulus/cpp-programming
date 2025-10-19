#include <iostream>
#include <stdlib.h>

using namespace std;


// Mendefinisikan inline function
inline int kuadrat(int x) {
    return x * x;
}

main() {
    int num = 5;

    // Memanggil fungsi inline
    cout << "kuadrat dari " << num << " adalah: " << kuadrat(num) << endl;

    // Memanggil fungsi inline dengan literal
    cout << "Kuadrat dari  10 adalah : " << kuadrat(10) << endl;
    system("pause");
}








