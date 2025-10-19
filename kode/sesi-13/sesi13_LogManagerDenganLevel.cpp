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
    int logLevel = 0; // Default level (0 = DEBUG)

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
    // Enum untuk tipe log
    enum LogType { DEBUG = 0, INFO = 1, WARNING = 2, ERROR = 3 };

    // Set level log
    void setLogLevel(int level) {
        if (level >= DEBUG && level <= ERROR) {
            logLevel = level;
        } else {
            throw invalid_argument("Level log tidak valid!");
        }
    }

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
    void writeLog(const string &message, LogType logType = INFO) {
        if (logType < logLevel) {
            return; // Abaikan log jika levelnya lebih rendah dari logLevel
        }

        try {
            // Cek ukuran file log
            long fileSize = getFileSize(logFile);
            if (fileSize > maxFileSize) {
                backupLog();
            }

            // Konversi tipe log ke string
            string logTypeStr;
            switch (logType) {
                case DEBUG:   logTypeStr = "DEBUG"; break;
                case INFO:    logTypeStr = "INFO"; break;
                case WARNING: logTypeStr = "WARNING"; break;
                case ERROR:   logTypeStr = "ERROR"; break;
                default:      logTypeStr = "UNKNOWN"; break;
            }

            // Tulis log ke file
            ofstream logfile(logFile, ios::app); // Mode append
            if (logfile.is_open()) {
                logfile << "[" << getCurrentTime() << "] [" << logTypeStr << "] : " << message << endl;
                logfile.close();
            } else {
                throw runtime_error("Gagal membuka file log!");
            }

            cout << "Log berhasil ditulis: [" << logTypeStr << "] " << message << endl;
        } catch (const exception &e) {
            cerr << "Error menulis log: " << e.what() << endl;
        }
    }
};

int main() {
    LogManager logManager;

    try {
        // Set log level
        logManager.setLogLevel(LogManager::DEBUG); // Ubah ini untuk mencoba level lainnya

        // Simulasi aplikasi berjalan
        string currentVersion = logManager.readVersion();
        logManager.writeLog("Aplikasi dijalankan. Versi " + currentVersion, LogManager::INFO);

        // Simulasi debug
        logManager.writeLog("Debugging konfigurasi awal.", LogManager::DEBUG);

        // Simulasi warning
        logManager.writeLog("Peringatan: Konfigurasi belum lengkap.", LogManager::WARNING);

        // Simulasi error (misalnya, file konfigurasi hilang)
        try {
            ifstream configFile("config.ini");
            if (!configFile.is_open()) {
                throw runtime_error("File konfigurasi tidak ditemukan!");
            }
            configFile.close();
        } catch (const exception &e) {
            logManager.writeLog("Kesalahan: " + string(e.what()), LogManager::ERROR);
        }

        // Aplikasi berjalan normal
        logManager.writeLog("Aplikasi berjalan normal.", LogManager::INFO);

        // Tutup aplikasi
        logManager.writeLog("Aplikasi ditutup.", LogManager::INFO);
    } catch (const exception &e) {
        cerr << "Kesalahan: " << e.what() << endl;
        logManager.writeLog("Kesalahan fatal: " + string(e.what()), LogManager::ERROR);
    }

    return 0;
}
