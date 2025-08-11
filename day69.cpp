// Day 69: Access Modifier (public, private, protected)
// Materi: Penggunaan public, private, dan protected pada class
// Penjelasan:
// Access modifier menentukan siapa yang bisa mengakses anggota class (atribut/method).
// - public: bisa diakses dari mana saja
// - private: hanya bisa diakses dari dalam class
// - protected: bisa diakses dari class itu sendiri dan turunannya
// Contoh sederhana:
/*#include <iostream>
using namespace std;

class Akun {
private:
    string password;
public:
    string username;
    void setPassword(string pw) {
        password = pw;
    }
    void showPassword() {
        cout << "Password: " << password << endl;
    }
};

int main() {
    Akun a;
    a.username = "user1";
    a.setPassword("rahasia");
    a.showPassword();
    return 0;
}*/

// Contoh Soal Day 69:
// Buatlah class BankAccount dengan atribut private saldo dan method public untuk setoran dan penarikan.

// Poin Penting:
// - Gunakan private untuk data sensitif.
// - public untuk method/atribut yang boleh diakses luar class.

/*#include <iostream>
using namespace std;

class belajar {
    // Atribut public dapat diakses dari luar class
    // data ini bisa diakses langsung
    public:
        int id;
        int nilai;

};

int main(){
   // Membuat objek dari class belajar
    belajar ujang;
    ujang.id = 123;
    ujang.nilai = 80;

    cout << "ID: " << ujang.id << endl;
    cout << "Nilai: " << ujang.nilai << endl;


    return 0;
}*/

//membuat data private
/*#include <iostream>
using namespace std;

class belajar_data_ujang{
    // Atribut private hanya bisa diakses dari dalam class
    private:
        int id;
      
        // Atribut public dapat diakses dari luar class
        // data ini bisa diakses langsung  
    public:
        int nilai;

        
};

int main (){

    belajar_data_ujang ujang;
    //ujang.id = 123; // Error, id tidak bisa diakses langsung
    ujang.nilai = 80; // Nilai bisa diakses karena public
    cout << "ID: " << ujang.id << endl; // Error, id tidak bisa diakses langsung   
    cout << "Nilai: " << ujang.nilai << endl;
    return 0;
}

// Poin Penting:
// - Gunakan private untuk data sensitif yang tidak boleh diakses langsung dari luar class.
// - public untuk method/atribut yang boleh diakses luar class.
// - Gunakan getter/setter untuk mengakses data private jika diperlukan.
// - Ini membantu menjaga enkapsulasi dan keamanan data dalam class.
// - Pastikan untuk memahami perbedaan antara public, private, dan protected agar dapat mengatur aksesibilitas data dengan benar.
// - Gunakan private untuk atribut yang tidak perlu diakses langsung dari luar class.
// - Gunakan public untuk method yang perlu diakses dari luar class.
// - Gunakan protected untuk atribut yang perlu diakses oleh class turunan.
// - Ini akan membantu menjaga struktur kode yang bersih dan mudah dipahami.
// - Dengan menggunakan access modifier yang tepat, kita dapat mengontrol akses ke data dan method dalam class, sehingga meningkatkan keamanan dan integritas data.
// - Pastikan untuk selalu menggunakan access modifier yang sesuai untuk setiap atribut dan method dalam class.

*/


//contoh soal 
//bankaccount

#include <iostream>
using namespace std;

class BankAccount {
private:
    double saldo; // Atribut private hanya bisa diakses dari dalam class    
public:
    BankAccount() : saldo(0) {} // Konstruktor untuk inisialisasi saldo

    void setoran(double jumlah) {
        if (jumlah > 0) {
            saldo += jumlah;
            cout << "Setoran berhasil. Saldo saat ini: " << saldo << endl;
        } else {
            cout << "Jumlah setoran tidak valid." << endl;
        }
    }

    void penarikan(double jumlah) {
        if (jumlah > 0 && jumlah <= saldo) {
            saldo -= jumlah;
            cout << "Penarikan berhasil. Saldo saat ini: " << saldo << endl;
        } else {
            cout << "Jumlah penarikan tidak valid." << endl;
        }
    }

    double getSaldo() const { // Method public untuk mendapatkan saldo
        return saldo;
    }
};

int main() {
    BankAccount akun; // Membuat objek BankAccount

    akun.setoran(1000); // Setoran awal
    akun.penarikan(500); // Penarikan
    akun.penarikan(600); // Penarikan melebihi saldo

    cout << "Saldo akhir: " << akun.getSaldo() << endl; // Menampilkan saldo akhir
  return 0;
}
// Poin Penting:
// - Gunakan private untuk data sensitif seperti saldo.
// - public untuk method yang boleh diakses luar class.
// - Gunakan konstruktor untuk inisialisasi data saat objek dibuat.
// - Pastikan untuk memvalidasi input pada method setoran dan penarikan untuk menjaga integritas data.
// - Ini membantu menjaga enkapsulasi dan keamanan data dalam class.
// - Dengan menggunakan access modifier yang tepat, kita dapat mengontrol akses ke data dan method dalam class, sehingga meningkatkan keamanan dan integritas data.
// - Pastikan untuk selalu menggunakan access modifier yang sesuai untuk setiap atribut dan method dalam class.
// - Gunakan getter/setter untuk mengakses data private jika diperlukan.
// - Ini akan membantu menjaga struktur kode yang bersih dan mudah dipahami.