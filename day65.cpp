#include <iostream>
#include <string>
using namespace std;

const int MAKS_TEMAN = 100;

struct Teman {
    string nama;
    string nomorHP;
};

int main() {
    Teman daftar[MAKS_TEMAN];
    int jumlah = 0, pilihan;

    while (true) {
        cout << "\n=== MENU DAFTAR KONTAK TEMAN ===\n";
        cout << "1. Tambah Kontak Teman\n";
        cout << "2. Lihat Daftar Kontak\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            if (jumlah < MAKS_TEMAN) {
                cout << "Nama teman: ";
                getline(cin, daftar[jumlah].nama);
                cout << "Nomor HP: ";
                getline(cin, daftar[jumlah].nomorHP);
                jumlah++;
                cout << "Kontak berhasil ditambahkan!\n";
            } else {
                cout << "Daftar kontak penuh!\n";
            }
        } else if (pilihan == 2) {
            if (jumlah == 0) {
                cout << "Belum ada kontak teman.\n";
            } else {
                cout << "\n=== DAFTAR KONTAK TEMAN ===\n";
                for (int i = 0; i < jumlah; i++) {
                    cout << i+1 << ". " << daftar[i].nama << " - " << daftar[i].nomorHP << endl;
                }
            }
        } else if (pilihan == 3) {
            cout << "Keluar dari program.\n";
            break;
        } else {
            cout << "Pilihan tidak valid!\n";
        }
    }
    return 0;
}