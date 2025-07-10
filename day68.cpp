// Day 68: Konstruktor pada Class
// Materi: Apa itu konstruktor dan cara menggunakannya
// Penjelasan:
// Konstruktor adalah method khusus yang otomatis dipanggil saat objek dibuat. Biasanya digunakan untuk inisialisasi.
// Contoh sederhana:
#include <iostream>
using namespace std;

class Mobil {
public:
    string merk;
    Mobil(string m) { // konstruktor
        merk = m;
    }
};



int main() {
    Mobil mobil1("Toyota");
    cout << "Merk mobil: " << mobil1.merk << endl;
    return 0;
}

// Contoh Soal Day 68:
// Buatlah class Siswa dengan konstruktor yang menerima nama dan umur, lalu tampilkan data siswa.

// Poin Penting:
// - Konstruktor namanya sama dengan class.
// - Konstruktor tidak punya tipe kembalian.
// - Konstruktor dipanggil otomatis saat objek dibuat.


#include <iostream>
using namespace std;

