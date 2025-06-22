//File I/O Dasar
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string nama, npm;

    // Menulis ke file
    ofstream tulis("mahasiswa.txt");
    cout << "Nama: "; getline(cin, nama);
    cout << "NPM: "; getline(cin, npm);
    tulis << nama << endl << npm << endl;
    tulis.close();

    // Membaca dari file
    ifstream baca("mahasiswa.txt");
    cout << "\nData dari file:\n";
    getline(baca, nama);
    getline(baca, npm);
    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    baca.close();

    return 0;
}