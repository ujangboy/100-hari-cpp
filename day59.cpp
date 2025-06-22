//Array of Struct (Data Buku)
#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    int tahun;
};

int main() {
    const int MAKS_BUKU = 3;
    Buku perpustakaan[MAKS_BUKU];

    
    for (int i = 0; i < MAKS_BUKU; i++) {
        cout << "Buku ke-" << i+1 << endl;
        cout << "Judul: ";
        getline(cin, perpustakaan[i].judul);
        cout << "Penulis: ";
        getline(cin, perpustakaan[i].penulis);
        cout << "Tahun terbit: ";
        cin >> perpustakaan[i].tahun;
        cin.ignore();
    }

    
    cout << "\nDaftar Buku di Perpustakaan:\n";
    for (int i = 0; i < MAKS_BUKU; i++) {
        cout << i+1 << ". " << perpustakaan[i].judul << " oleh " 
             << perpustakaan[i].penulis << " (" << perpustakaan[i].tahun << ")\n";
    }
    return 0;
}