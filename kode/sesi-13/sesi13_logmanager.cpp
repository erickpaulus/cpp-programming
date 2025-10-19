#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <sys/stat.h> // Untuk mendapatkan ukuran file
#include <stdexcept>  // Untuk exception

using namespace std;

class LogManager {
private:
    const string logFile = "log.log";
    const string versionFile = "version.txt";
    const long maxFileSize = 1024 * 1024; // Batas ukuran 1 MB

    // Fungsi untuk mendapatkan waktu sekarang dalam format string
    string getCurrentTime() {
        time_t now = time(0); // Mendapatkan waktu saat ini
        tm *ltm = localtime(&now); // Mengonversi ke waktu lokal
        char buffer[80];

        // Format waktu: YYYY-MM-DD HH:MM:SS
        strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", ltm);
        return string(buffer);
    }

    // Fungsi untuk mendapatkan ukuran file dalam byte
    long getFileSize(const string &filename) {
        struct stat stat_buf;
        if (stat(filename.c_str(), &stat_buf) == 0) {
            return stat_buf.st_size;
        }
        return -1; // Jika file tidak ditemukan atau error
    }

    // Fungsi untuk membuat backup file log
    void backupLog() {
        string backupFile = "log_backup.log";
        if (rename(logFile.c_str(), backupFile.c_str()) != 0) {
            throw runtime_error("Gagal membuat backup file log!");
        }
        cout << "File log terlalu besar. Membuat backup sebagai '" << backupFile << "'." << endl;
    }

public:
    // Fungsi untuk membaca versi dari version.txt
    string readVersion() {
        ifstream versionFileIn(versionFile);
        string version = "";

        if (versionFileIn.is_open()) {
            versionFileIn >> version;
            versionFileIn.close();
        } else {
            throw runtime_error("File version.txt tidak ditemukan.");
        }

        return version;
    }

    

    // Fungsi untuk menulis log ke file
    void writeLog(const string &message) {
        try {
            // Cek ukuran file log
            long fileSize = getFileSize(logFile);
            if (fileSize > maxFileSize) {
                backupLog();
            }

            // Tulis log ke file
            ofstream logfile(logFile, ios::app); // Mode append
            if (logfile.is_open()) {
                logfile << "[" << getCurrentTime() << "] : " << message << endl;
                logfile.close();
            } else {
                throw runtime_error("Gagal membuka file log!");
            }

            cout << "Log berhasil ditulis." << endl;
        } catch (const exception &e) {
            cerr << "Error menulis log: " << e.what() << endl;
        }
    }
};

int main() {
    LogManager logManager;

    try {
        // Baca versi terakhir dan tingkatkan
        string currentVersion = logManager.readVersion();
        logManager.writeLog("Aplikasi dijalankan. Versi  " + currentVersion );
        
        // Tulis log untuk fungsi lainnya
        logManager.writeLog("Fungsi dijalankan.");

        // Proses selanjutnya
        logManager.writeLog("Aplikasi ditutup."); 
    } catch (const exception &e) {
        cerr << "Kesalahan: " << e.what() << endl;
    }

    return 0;
}
