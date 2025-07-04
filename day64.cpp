#include <iostream>
#include <string>
using namespace std;

const int MAKS_BARANG = 100;

struct Barang {
    string nama;
    int jumlah;
};

int main() {
    Barang daftar[MAKS_BARANG];
    int jumlah = 0, pilihan;

    while (true) {
        cout << "\n=== MENU DAFTAR BELANJA ===\n";
        cout << "1. Tambah Barang\n";
        cout << "2. Lihat Daftar Belanja\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            if (jumlah < MAKS_BARANG) {
                cout << "Nama barang: ";
                getline(cin, daftar[jumlah].nama);
                cout << "Jumlah: ";
                cin >> daftar[jumlah].jumlah;
                cin.ignore();
                jumlah++;
                cout << "Barang berhasil ditambahkan!\n";
            } else {
                cout << "Daftar penuh!\n";
            }
        } else if (pilihan == 2) {
            if (jumlah == 0) {
                cout << "Belum ada barang dalam daftar.\n";
            } else {
                cout << "\n=== DAFTAR BELANJA ===\n";
                for (int i = 0; i < jumlah; i++) {
                    cout << i+1 << ". " << daftar[i].nama << " - " << daftar[i].jumlah << endl;
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