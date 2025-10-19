#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <sys/stat.h>

using namespace std;

// Constants
constexpr char LOG_FILE[] = "log.log";
constexpr char BACKUP_FILE[] = "log_backup.log";
constexpr long MAX_FILE_SIZE = 1024 * 1024; // 1 MB

// Fungsi untuk mendapatkan waktu sebagai  formatted string
string getCurrentTime() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", ltm);
    return string(buffer);
}

// Fungsi untuk mendapatka ukuran  file dalam bytes
long getFileSize(const string &filename) {
    struct stat stat_buf;
    if (stat(filename.c_str(), &stat_buf) == 0) {
        return stat_buf.st_size;
    }
    return -1; // File not found or error
}

// Fungsi tulis pesan di log 
void writeLog(const string &message) {
    long fileSize = getFileSize(LOG_FILE);

    // jika  log file melebihi ukuran  maksimal , maka buat  file backup 
    if (fileSize > MAX_FILE_SIZE) {
        if (rename(LOG_FILE, BACKUP_FILE) != 0) {
            cerr << "Error: Failed to create a backup for '" << LOG_FILE << "'." << endl;
            return;
        }
        cout << "Log file exceeded size limit. Backup created as '" << BACKUP_FILE << "'." << endl;
    }

    
    ofstream logfile(LOG_FILE, ios::app);
    if (logfile.is_open()) {
        logfile << "[" << getCurrentTime() << "] " << message << endl;
        logfile.close();
        cout << "Log written successfully." << endl;
    } else {
        cerr << "Error: Failed to open log file '" << LOG_FILE << "' for writing." << endl;
    }
}

int main() {
    string VERSION= "1.0.0";

    // Tulis version
    writeLog("Application started. Version: " + VERSION);
    // tambah kode lainnya

    // selesai
    writeLog("Application is closed.");
    return 0;
}
