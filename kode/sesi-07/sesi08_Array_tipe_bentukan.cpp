#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
main() { 
    typedef int tipeArray[5];
    tipeArray bil = {1,2,3,4,5};
    
    for (int i : bil)
    {
        cout << i << endl;
    }
    getchar();

}

