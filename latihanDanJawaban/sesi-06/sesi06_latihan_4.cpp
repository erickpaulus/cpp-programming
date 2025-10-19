#include <iostream>
#include <ctime>
#include <unistd.h> // untuk sleep() di Linux/MacOS
#include <windows.h> // untuk Sleep() di Windows

using namespace std;
void cetakWaktu(){
    int last_minute = -1; // Variabel untuk menyimpan menit terakhir

    while (true) {
        // Baca waktu lokal
        time_t now = time(0);
        tm *ltm = localtime(&now);

        // Cek apakah sudah 5 menit berlalu sejak cetakan terakhir
        if (ltm->tm_min % 1 == 0 && ltm->tm_min != last_minute) {
            // Cetak informasi waktu saat ini
            cout << "Tahun: " << 1900 + ltm->tm_year << endl;
            cout << "Bulan: " << 1 + ltm->tm_mon << endl;
            cout << "Hari: " << ltm->tm_mday << endl;
            cout << "Waktu: " << ltm->tm_hour << ":";
            cout << ltm->tm_min << ":";
            cout << ltm->tm_sec << endl;

            // Convert now ke string form
            char* dt = ctime(&now);
            cout << "Tanggal dan Waktu lokal adalah: " << dt << endl;

            // Convert now ke tm struct untuk UTC
            tm *gmtm = gmtime(&now);
            dt = asctime(gmtm);
            cout << "Tanggal dan waktu UTC adalah: " << dt << endl;

            // Update last_minute ke menit saat ini untuk menandai waktu sudah dicetak
            last_minute = ltm->tm_min;
        }

        // Tunggu selama 1 detik sebelum periksa waktu lagi
        #ifdef _WIN32
            Sleep(1000); // untuk Windows
        #else
            sleep(1); // untuk Linux/MacOS
        #endif
    }
}
int main() {
    cetakWaktu();

    return 0;
}
