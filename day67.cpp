// Day 67: Method pada Class
// Materi: Menambahkan fungsi (method) ke dalam class
// Penjelasan:
// Method adalah fungsi yang didefinisikan di dalam class dan dapat digunakan oleh objek class tersebut.
// Contoh sederhana:
/*#include <iostream>
using namespace std;

class Persegi {
public:
    int sisi;
    int luas() {
        return sisi * sisi;
    }
};

int main() {
    Persegi p;
    p.sisi = 5;
    cout << "Luas persegi: " << p.luas() << endl;
    return 0;
}*/

// Contoh Soal Day 67:
// Buatlah class Lingkaran dengan atribut jariJari dan method hitungLuas(). Tampilkan hasil luas lingkaran.

// Poin Penting:
// - Method adalah fungsi di dalam class.
// - Method dapat mengakses atribut class.

/*#include <iostream>
using namespace std;

   class lingkaran {
    public:
        double jariJari;
        double hitungLuas(){
            return 3.14 * jariJari * jariJari;
        }
   };

   int main(){
      lingkaran l;
      l.jariJari = 8.5;
      cout << "jadi luas jari jari dengan " << l.jariJari << " adalah " << l.hitungLuas(); 
   

    return 0;
   }*/



#include <iostream>
using namespace std;

double hitungLuas(double r){
    return 3.14 * r * r;
};

int main(){

    double jariJari;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
    if (jariJari <= 0) {
        cout << "jari jari tidak boleh negatif atau nol!" << endl;
        // keluar dari program jika jari-jari tidak valid
    }
    double luas = hitungLuas(jariJari);
    cout << "Luas lingkaran dengan jari-jari " << jariJari << " adalah: " << luas << endl;
    return 0;
}

