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

void cariJumlahVokalKonsonan(char nFile[], int &konsonan, int &vokal) {
    konsonan = 0;
    vokal = 0;
    
    char karakter;
    ifstream fileteks;
    fileteks.open(nFile);

    while (fileteks.get(karakter)) {
        if (isalpha(karakter)) { // Memastikan hanya memeriksa huruf
            karakter = tolower(karakter); // Mengubah karakter menjadi huruf kecil
            if (karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u') {
                vokal++;
            } else {
                konsonan++;
            }
        }
    }

    fileteks.close();
}

void cariJumlahHurufVocal(char nFile[]){
    char karakter;
    int jumlahVocal=0, jumlahKonsonan=0;
    ifstream fileteks; 
    fileteks.open(nFile);
    while(!fileteks.eof())
    {
        fileteks.get(karakter);
        karakter = toupper(karakter);
        if(isalpha(karakter)){
        if (karakter == 'A' || karakter == 'I' || karakter == 'U' || karakter == 'E' || karakter == 'O')
            jumlahVocal++;
        else if(karakter == ' ' || fileteks.eof()) continue;
        else jumlahKonsonan ++;
        }
    }
    fileteks.close();
    cout << "jumlah huruf vocal : " << jumlahVocal << endl;
    cout << "jumlah huruf konsonan : " << jumlahKonsonan << endl;
}

int main() {
    // Define the file name
    int konsonan, vokal;
    char namaFile[]="test.txt";
// 	char isi[]= "Motto : Hari ini harus lebih baik dari hari kemaren";
// 	bukaTulisIsiFile(namaFile);
// 	tambahIsiFile(namaFile,isi);
// 	periksaFile(namaFile);
// //	isiFilePerKarakter(namaFile);
// 	cetakIsiFilePerKarakter(namaFile);
// 	cout << "Jumlah huruf A = " << cariJumlahHurufA(namaFile);
    cariJumlahVokalKonsonan(namaFile, konsonan, vokal);
    cariJumlahHurufVocal(namaFile);
    cout << endl << "Jumlah konsonan = " << konsonan;
    cout << endl << "Jumlah vokal = " << vokal;
    

    system("pause");
    return 0;
}
