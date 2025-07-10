// Day 66: Pengenalan Class di C++
// Materi: Apa itu class, struktur dasar class, dan objek
// Penjelasan:
// Class adalah blueprint (cetakan) untuk membuat objek. Class berisi data (atribut) dan fungsi (method) yang berkaitan.
// Contoh sederhana:
/*#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string nama;
    int umur;
};

int main() {
    Mahasiswa mhs1;
    mhs1.nama = "Budi";
    mhs1.umur = 20;
    cout << "Nama: " << mhs1.nama << endl << "Umur: " << mhs1.umur << endl;
    return 0;
}*/

// Contoh Soal Day 66:
// Buatlah class bernama Buku dengan atribut judul dan pengarang. Buat satu objek Buku dan tampilkan nilainya.

// Poin Penting:
// - Class adalah template untuk membuat objek.
// - Objek adalah instance dari class.
// - Atribut adalah variabel di dalam class.

/*#include <iostream>
using namespace std;

class buku {
    public:
        string judul;
        string pengarang;

};

int main(){

    buku buku1, buku2;
    cout << "********************* PERPUSTAKAAN MANG JAJANG *********************" << endl;
    cout << "Masukan judul buku 1: ";
    getline(cin, buku1.judul);
    cout << "Masukan pengarang buku 1: ";
    getline(cin, buku1.pengarang);

    cout << "Masukan judul buku 2: ";
    getline(cin, buku2.judul);
    cout << "Masukan pengarang buku 2: ";
    getline(cin, buku2.pengarang);
    cout << "*******************************************************************" << endl;
    

    int pilihan;
    cout << "Pilih buku yang ingin ditampilkan:\n";
    cout << "1. Buku 1\n2. Buku 2\n";
    cout << "3. Tampilkan semua buku\n";
    cout << "Masukkan pilihan (1/3): ";
    cin >> pilihan;

    // Menggunakan if else
    if (pilihan == 1) {
        cout << "[IF ELSE]" << endl;
        cout << "judul buku: " << buku1.judul << endl;
        cout << "pengarang buku: " << buku1.pengarang << endl;
    } else if (pilihan == 2) {
        cout << "[IF ELSE]" << endl;
        cout << "judul buku: " << buku2.judul << endl;
        cout << "pengarang buku: " << buku2.pengarang << endl;
    } else if (pilihan == 3) {
        cout << "[IF ELSE]" << endl;
        cout << "judul buku: " << buku1.judul << endl;
        cout << "pengarang buku: " << buku1.pengarang << endl;
        cout << "judul buku: " << buku2.judul << endl;
        cout << "pengarang buku: " << buku2.pengarang << endl;
    } else {
        cout << "Pilihan tidak valid!" << endl;
    }

    
    
    cout << "*******************************************************************" << endl;
    cout << "Terima kasih telah menggunakan layanan perpustakaan kami!" << endl;
    return 0;
}*/


#include <iostream>
using namespace std;

class car{
    public:
        // Atribut dari class car
        int gear, top_speed;
        // Konstruktor
        // Konstruktor adalah method khusus yang dipanggil saat objek dibuat
        car(){
            cout << "Konstruktor dipanggil!" << endl;
            gear = 4;
            top_speed = 200;
        }
};
 
int main(){
    // Membuat objek dari class car
    // Objek adalah instance dari class
    car m4;
    
    cout << "gear: " << m4.gear << endl;
    cout << "top speed: " << m4.top_speed << endl;
    return 0;
}

