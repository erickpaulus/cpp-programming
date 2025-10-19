#include <iostream>
#include <stdlib.h>

using namespace std;

struct koordinat {
     float absis;
     float ordinat;
};
void getPoint( koordinat& ttk){
    cout<<"Masukkan absis   = ";cin >> ttk.absis;
    cout<<"Masukkan ordinat = ";cin >> ttk.ordinat;
}
void printPoint( koordinat ttk){
    cout<< "("<<ttk.absis<<","<<   ttk.ordinat<<")"<<endl;
}
main(){
    koordinat a,b,c;
    cout << "Input Titik a "<<endl; getPoint(a);
    cout << "Input Titik b "<<endl; getPoint(b);
    cout << "Titik a = ";  printPoint(a);
    cout << "Titik b = ";  printPoint(b);
    system("pause");
    return 0;
}

