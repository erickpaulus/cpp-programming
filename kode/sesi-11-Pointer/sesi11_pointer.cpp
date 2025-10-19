#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
    int n=5;
    int* p= &n;
    int& r= *p;
    cout<<"n = "<<n<<",&n = "<<&n<<endl; 	// 5 , F001h
    cout<<"p = "<<p<<",&p = "<<&p<<endl; 	// F001h,F005h
    cout<<"*p = "<<*p<<endl;          // 5
    cout<<"r = "<<r<<endl;  

    int* a;
    a = new int;
    *a = 1;
    cout<<"a = "<<a<<",&a = "<<&a<<endl; 	// 
    system("pause");
    return 0;
}
