#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
main() { 
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int  len ;
    // copy str1 into str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;
    // concatenates str1 and str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;
    // total length of str3 after concatenation
    len = str3.size();
    cout << "str3.size() :  " << len << endl;
    len = str1.size();
    cout << "str1.size() :  " << len << endl;
    getchar();

}

