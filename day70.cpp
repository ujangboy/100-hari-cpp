// Day 70: Inheritance (Pewarisan)
// Materi: Konsep inheritance pada class
// Penjelasan:
// Inheritance adalah konsep di mana sebuah class dapat mewarisi atribut dan method dari class lain.
// Contoh sederhana:
#include <iostream>
using namespace std;

class Hewan {
public:
    string nama;
    void makan() {
        cout << nama << " sedang makan" << endl;
    }
};

class Kucing : public Hewan {
public:
    void meong() {
        cout << nama << " berkata: Meong!" << endl;
    }
};

int main() {
    Kucing k;
    k.nama = "Mimi";
    k.makan();
    k.meong();
    return 0;
}

// Contoh Soal Day 70:
// Buatlah class Induk bernama Kendaraan dan class Turunan bernama SepedaMotor. Tambahkan atribut dan method sederhana.

// Poin Penting:
// - Inheritance memudahkan reuse kode.
// - Gunakan ": public NamaClassInduk" untuk pewarisan.
