#include <iostream>
#include <stdlib.h>

using namespace std;

struct waktu {
     int jam;
     int menit;
     int detik;
};
void getWaktu(waktu& wkt) {
  cout<<"Masukkan jam   = ";cin >> wkt.jam;
  cout<<"Masukkan menit = ";cin >> wkt.menit;
  cout<<"Masukkan detik = ";cin >> wkt.detik;
}
void printWaktu( waktu wkt) {
  cout << wkt.jam << ":"<< wkt.menit << ":" << wkt.detik ; 
}

int cariJumlahDetik(waktu wkt){         		// Jadikan void ??
    return (wkt.jam * 3600 + wkt.menit*60 + wkt.detik);
}

void konversiWaktu(int jDetik, waktu& wkt){      	// Jadikan fungsi??
	int sisa;
	wkt.jam = jDetik / 3600;
	sisa = jDetik % 3600;
	wkt.menit = sisa / 60;
	wkt.detik = sisa % 60;
}

main(){
    waktu mulai;
    cout << "Input Waktu "<<endl; getWaktu(mulai);    
    cout << "Cetak Waktu = ";  printWaktu(mulai);
    cout << "\nKonversi Waktu ke detik = " <<  cariJumlahDetik(mulai);
    system("pause");
    return 0;
}

