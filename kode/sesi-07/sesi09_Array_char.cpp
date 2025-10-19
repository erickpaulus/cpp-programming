#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <iostream>


using namespace std;
int main() {
   char str1[10] = "Hello"; // Increased size to accommodate concatenation
    char str2[10] = "World";
    char str3[10];           // Increased size for the copied string
    int len;

    // Copy str1 into str3
    strcpy(str3, str1);
    cout << "strcpy(str3, str1) : " << str3 << endl;

    // Concatenate str1 and str2
    strcat(str1, str2);
    cout << "strcat(str1, str2): " << str1 << endl;

    // Total length of str1 after concatenation
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
    system("pause");
    return 0;
}
