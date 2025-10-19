#include <iostream>
#include <stdlib.h>

using namespace std;


void cetakBintang(int baris, int kolom){
	cout << "Pencetakan bintang : " << endl;
	for (int i=1; i<=baris; i++) {
		for (int j=1; j<=kolom; j++) {
		     cout << " * ";
		}
		cout << endl;
	}
}

main() {
    int baris,kolom;
	cout << "Banyak baris : "; cin >> baris;   
	cout << "Banyak kolom : "; cin >> kolom;
	cetakBintang(baris,kolom);   // pemanggilan
    system("pause");
}





