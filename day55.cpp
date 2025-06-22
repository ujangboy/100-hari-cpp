//membuat menu CRUD
#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;

struct mahasiswa
{
    string nama;
    string npm;
    string jurusan;
};

void tampilkanmenu() {
    cout << "\n===== DATA MAHASISWA/I =====\n";
    cout << "1. Tambah data\n";
    cout << "2. Lihat data\n";
    cout << "3. ubah data\n";
    cout << "4. Hapus data\n";
    cout << "5. Keluar\n";
    cout << "pilih (1-5): ";
}

int main(){

    mahasiswa daftar [MAX_MAHASISWA];
    int jumlah = 0;
    int pilihan;

    while (true)
    {
        tampilkanmenu();
        cin >> pilihan;
        cin.ignore();

        if(pilihan == 1){
            if (jumlah < MAX_MAHASISWA){
                cout << "Masukan nama: ";
                getline(cin, daftar[jumlah].nama);
                cout << "masukan npm: ";
                getline(cin,daftar[jumlah].npm);
                cout << "masukan jurusan: ";
                getline(cin, daftar[jumlah].jurusan);
                jumlah++;
                cout << "Data berhasil ditambahkan.\n";

            } else {
                if(pilihan == 2){
                    if (jumlah == 0) {
                        cout << "Tidak ada data mahasiswa.\n";
                    } else {
                        cout << "\n===== DAFTAR MAHASISWA/I =====\n";
                        for (int i = 0; i < jumlah; i++) {
                            cout << "Nama: " << daftar[i].nama << ", NPM: " << daftar[i].npm 
                                 << ", Jurusan: " << daftar[i].jurusan << endl;
                        }
                    }
                } else if(pilihan == 3){
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
                            cout << "Data berhasil diubah.\n";
                            break;
                        }
                    }
                    if (!found) {
                        cout << "NPM tidak ditemukan.\n";
                    }
                } else if(pilihan == 4){
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
                            cout << "Data berhasil dihapus.\n";
                            break;
                        }
                    }
                    if (!found) {
                        cout << "NPM tidak ditemukan.\n";
                    }
                } else if(pilihan == 5){
                    cout << "Keluar dari program.\n";
                    return 0;
                } else {
                    cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                }
            }
        }
    }
    



    
    return 0;

}

