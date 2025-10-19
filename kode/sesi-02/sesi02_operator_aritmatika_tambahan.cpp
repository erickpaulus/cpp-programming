#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {
    // Initial values
    int m = 24;
    int n = 7;

    // Expression 1: m - 8 - n
    int result1 = m - 8 - n;
    cout << "m - 8 - n: " << result1 << endl;

    // Reset values
    m = 24;
    n = 7;

    // Expression 2: m = n = 3
    m = n = 3;
    cout << "m = n = 3 -> m: " << m << ", n: " << n << endl;

    // Expression 3: m % n
    int result3 = m % n;
    cout << "m % n: " << result3 << endl;

    // Reset values
    m = 3;
    n = 3;

    // Expression 4: m % n++
    int result4 = m % n++;
    cout << "m % n++: " << result4 << ", n (after increment): " << n << endl;

    // Reset values
    m = 3;
    n = 4; // n was incremented in the previous expression

    // Expression 5: m % ++n
    int result5 = m % ++n;
    cout << "m % ++n: " << result5 << ", n (after increment): " << n << endl;

    // Reset values
    m = 4; // m was incremented in the previous expression
    n = 4; // n was incremented in the previous expression

    // Expression 6: ++m - n--
    int result6 = ++m - n--;
    cout << "++m - n--: " << result6 << ", m (after increment): " << m << ", n (after decrement): " << n << endl;

    // Reset values
    m = 4;
    n = 4;

    // Expression 7: m += n -= 2
    n -= 2;
    m += n;
    cout << "m += n -= 2 -> m: " << m << ", n: " << n << endl;

    
    system("pause");
    return 0;
}
