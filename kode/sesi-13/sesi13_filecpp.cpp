#include <iostream>
#include <fstream> // Required for ofstream
#include <string>

using namespace std;

// Function to write to the file
void bukaTulisIsiFile(const char nFile[]) {
    ofstream fileteks;
    fileteks.open(nFile);
    if (fileteks.is_open()) {
        fileteks << "Selamat Datang Mahasiswa Teknik Informatika Unpad" << endl;
        fileteks << "dalam Mata Kuliah Algoritma dan Pemrograman" << endl;
        fileteks << "Semester 1 th ajaran baru" << endl;
        fileteks << "Selamat Belajar dan Semoga Sukses" << endl;
        fileteks.close();
        cout << "File berhasil ditulis!" << endl;
    } else {
        cout << "Gagal membuka file!" << endl;
    }
}

void tambahIsiFile(char nFile[], char isi[]){
	ofstream fileteks;
	fileteks.open(nFile, ios::app);
	fileteks << endl;
	fileteks << "Oleh: Akmal"<<  endl;
	fileteks << isi << endl;	
	fileteks.close();
}

void periksaFile(char nFile[]){
	ifstream fileteks; 			// u/ membaca file 
	fileteks.open(nFile);
	if (fileteks.fail()) 
	   cout<< "File tak dapat dibuka / tidak ditemukan";
	else
	   cout << "File ditemukan " << endl;
	
	fileteks.close();
}

void isiFilePerKarakter(char nFile[]){
	ofstream fileteks;
	fileteks.open(nFile);
	fileteks.put('A');
	fileteks.put('B');
	fileteks.put('C');
	fileteks.close();
}

void cetakIsiFilePerKarakter(char nFile[]){
	char karakter;
	ifstream fileteks; 
	fileteks.open(nFile);
	while(!fileteks.eof())
	{
		fileteks.get(karakter);
		cout << karakter;
	}
	fileteks.close();
}

int cariJumlahHurufA(char nFile[]){
	char karakter;
	int jumlahA=0;
	ifstream fileteks; 
	fileteks.open(nFile);
	while(!fileteks.eof())
	{
		fileteks.get(karakter);
		if (karakter == 'A' || karakter == 'a')
			jumlahA=jumlahA+1;
	}
	fileteks.close();
	return jumlahA;
}



int main() {
    // Define the file name
    char namaFile[]="algoritma.txt";
	char isi[]= "Motto : Hari ini harus lebih baik dari hari kemaren";
	bukaTulisIsiFile(namaFile);
	tambahIsiFile(namaFile,isi);
	periksaFile(namaFile);
//	isiFilePerKarakter(namaFile);
	cetakIsiFilePerKarakter(namaFile);
	cout << "Jumlah huruf A = " << 
               cariJumlahHurufA(namaFile);

    system("pause");
    return 0;
}
