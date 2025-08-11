// Day 68: Konstruktor pada Class
// Materi: Apa itu konstruktor dan cara menggunakannya
// Penjelasan:
// Konstruktor adalah method khusus yang otomatis dipanggil saat objek dibuat. Biasanya digunakan untuk inisialisasi.
// Contoh sederhana:
/*#include <iostream>
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
}*/

// Contoh Soal Day 68:
// Buatlah class Siswa dengan konstruktor yang menerima nama dan umur, lalu tampilkan data siswa.

// Poin Penting:
// - Konstruktor namanya sama dengan class.
// - Konstruktor tidak punya tipe kembalian.
// - Konstruktor dipanggil otomatis saat objek dibuat.


/*#include <iostream>
using namespace std;

class siswa{
    public:
        string nama;
        int umur;
        siswa(string n, int u) {
            nama = n;
            umur = u;
        }
};

int main() {

    siswa baikHati("Ujang", 19);
    cout << "nama siswa: " << baikHati.nama << endl;
    cout << "umur siswa: " << baikHati.umur << endl;

    
    return 0;
}*/

/*#include <iostream>
using namespace std;

class mantan{
    public:
        string nama;
        string bulan1;
        string bulan2;
        mantan(string n, string b1, string b2) {
            nama = n;
            bulan1 = b1;
            bulan2 = b2;
        }
};

int main() {

        mantan pertama("amel", "januari", "maret");
        cout << "nama mantan pertama: " << pertama.nama << " dari " << pertama.bulan1 << " sampai " << pertama.bulan2 << endl;

        mantan kedua("nabila", "juni", "agustus");
        cout << "nama mantan kedua: " << kedua.nama << " dari " << kedua.bulan1 << " sampai " << kedua.bulan2 << endl;

        mantan ketiga("syila", "september", "desember");
        cout << "nama mantan ketiga: " << ketiga.nama << " dari " << ketiga.bulan1 << " sampai " << ketiga.bulan2 << endl;

    return 0;
}*/

#include <iostream>
using namespace std;

class mobil{
    public:
        int  kecepatan;
        string warna, jenis_mobil;
        mobil(string jenis, int top_kecepatan,string warna_mobil){ {
            jenis_mobil = jenis;
            kecepatan = top_kecepatan;
            warna = warna_mobil;
        }       
                
    } 
};


int main() {
    
    mobil sport1("BMW M4",340, "grey metalic");
    mobil sport2("civic",240, "red black mamba");
    mobil sport3("Nissan Ariya",220 , "white pearl");
    char pilihan;

    cout << "\n**************************** SELAMAT DATANG DI DERLER UJANG ****************************\n" << endl;

    cout << "pilih jenis mobil: " << endl;
    cout << "1. sport" << endl;
    cout << "2. sedan" << endl;
    cout << "3. SUV" << endl;
    cout << "masukan pilihanmu (1/2/3): ";
    cin >> pilihan;

    if(pilihan == '1'){
        cout << "kamu memilih mobil sport " << endl;
        cout << "ini adalah spesifikasi mobil sport m4 " << endl;
        cout << "jenis mobil: " << sport1.jenis_mobil << endl;
        cout << "kecepatan maksimal: " << sport1.kecepatan << " km/jam" << endl;
        cout << "warna mobil: " << sport1.warna << endl;

    } else if(pilihan == '2'){
        cout << "kamu memilih mobil sedan " << endl;
        cout << "ini adalah spesifikasi mobil sedan " << endl;
        cout << "jenis mobil: " << sport2.jenis_mobil << endl;
        cout << "kecepatan maksimal: " << sport2.kecepatan << " km/jam" << endl;
        cout << "warna mobil: " << sport2.warna << endl;
    } else if(pilihan == '3'){
        cout << "kamu memilih mobil SUV " << endl;
        cout << "ini adalah spesifikasi mobil SUV " << endl;
        cout << "jenis mobil: " << sport3.jenis_mobil << endl;
        cout << "kecepatan maksimal: " << sport3.kecepatan << " km/jam" << endl;
        cout << "warna mobil: " << sport3.warna << endl;
    } else {
        cout << "pilihan tidak valid!" << endl;
    }
   cout << "\n**************************** TERIMA KASIH TELAH BERKUNJUNG DI DERLER UJANG ****************************\n" << endl;
    cout << "sampai jumpa di lain waktu!" << endl;
  
    return 0;
}
