#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;

struct mahasiswa {
    string nama;
    string npm;
    string jurusan;
};

void tampilkanmenu() {
    cout << "\n===== DATA MAHASISWA/I =====\n";
    cout << "1. Tambah data\n";
    cout << "2. Lihat data\n";
    cout << "3. Ubah data\n";
    cout << "4. Hapus data\n";
    cout << "5. Keluar\n";
    cout << "Pilih (1-5): ";
}

void simpanKeFile(mahasiswa daftar[], int jumlah) {
    ofstream file("mahasiswa.txt");
    file << jumlah << endl;
    for (int i = 0; i < jumlah; i++) {
        file << daftar[i].nama << endl
             << daftar[i].npm << endl
             << daftar[i].jurusan << endl;
    }
    file.close();
}

void bacaDariFile(mahasiswa daftar[], int &jumlah) {
    ifstream file("mahasiswa.txt");
    if (!file) return;
    file >> jumlah;
    file.ignore();
    for (int i = 0; i < jumlah; i++) {
        getline(file, daftar[i].nama);
        getline(file, daftar[i].npm);
        getline(file, daftar[i].jurusan);
    }
    file.close();
}

int main() {
    mahasiswa daftar[MAX_MAHASISWA];
    int jumlah = 0;
    int pilihan;

    bacaDariFile(daftar, jumlah);

    while (true) {
        tampilkanmenu();
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            if (jumlah < MAX_MAHASISWA) {
                cout << "Masukan nama: ";
                getline(cin, daftar[jumlah].nama);
                cout << "Masukan npm: ";
                getline(cin, daftar[jumlah].npm);
                cout << "Masukan jurusan: ";
                getline(cin, daftar[jumlah].jurusan);
                jumlah++;
                simpanKeFile(daftar, jumlah);
                cout << "Data berhasil ditambahkan.\n";
            } else {
                cout << "Data penuh!\n";
            }
        } else if (pilihan == 2) {
            if (jumlah == 0) {
                cout << "Tidak ada data mahasiswa.\n";
            } else {
                cout << "\n===== DAFTAR MAHASISWA/I =====\n";
                for (int i = 0; i < jumlah; i++) {
                    cout << "Nama: " << daftar[i].nama << ", NPM: " << daftar[i].npm
                         << ", Jurusan: " << daftar[i].jurusan << endl;
                }
            }
        } else if (pilihan == 3) {
            string npm;
            cout << "Masukan NPM yang ingin diubah: ";
            getline(cin, npm);
            bool found = false;
            for (int i = 0; i < jumlah; i++) {
                if (daftar[i].npm == npm) {
                    cout << "Masukan nama baru: ";
                    getline(cin, daftar[i].nama);
                    cout << "Masukan jurusan baru: ";
                    getline(cin, daftar[i].jurusan);
                    found = true;
                    simpanKeFile(daftar, jumlah);
                    cout << "Data berhasil diubah.\n";
                    break;
                }
            }
            if (!found) {
                cout << "NPM tidak ditemukan.\n";
            }
        } else if (pilihan == 4) {
            string npm;
            cout << "Masukan NPM yang ingin dihapus: ";
            getline(cin, npm);
            bool found = false;
            for (int i = 0; i < jumlah; i++) {
                if (daftar[i].npm == npm) {
                    for (int j = i; j < jumlah - 1; j++) {
                        daftar[j] = daftar[j + 1];
                    }
                    jumlah--;
                    found = true;
                    simpanKeFile(daftar, jumlah);
                    cout << "Data berhasil dihapus.\n";
                    break;
                }
            }
            if (!found) {
                cout << "NPM tidak ditemukan.\n";
            }
        } else if (pilihan == 5) {
            cout << "Keluar dari program.\n";
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }
    return 0;
}