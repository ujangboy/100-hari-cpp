//pointer ke struct
/*#include <iostream>
using namespace std;

// Definisi struct
struct Mahasiswa {
    string nama;
    int umur;
};

int main() {
    // Deklarasi variabel struct dan pointer
    Mahasiswa mhs;
    Mahasiswa *ptr = &mhs;

    // Akses member dengan pointer menggunakan operator arrow (->)
    ptr->nama = "Andi";
    ptr->umur = 20;

    // Tampilkan hasil
    cout << "Nama: " << ptr->nama << endl;
    cout << "Umur: " << ptr->umur << endl;

    return 0;
}*/


/*#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
};

int main() {
    // Buat objek struct secara dinamis
    Mahasiswa *ptr = new Mahasiswa;

    // Isi nilai
    ptr->nama = "Budi";
    ptr->umur = 22;

    // Tampilkan
    cout << "Nama: " << ptr->nama << endl;
    cout << "Umur: " << ptr->umur << endl;

    // Hapus dari memori setelah selesai
    delete ptr;

    return 0;
}*/

#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
};

int main() {
    // Buat objek struct secara dinamis
    Mahasiswa *ptr = new Mahasiswa;

    // Isi nilai
    ptr->nama = "Budi";
    ptr->umur = 22;

    // Tampilkan
    cout << "Nama: " << ptr->nama << endl;
    cout << "Umur: " << ptr->umur << endl;

    // Hapus dari memori setelah selesai
    delete ptr;

    return 0;
}