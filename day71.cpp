// inheretabce
#include <iostream>
using namespace std;

class Kendaraan {
public:
    string jenis;
    int roda;

    void info() {
        cout << "Jenis Kendaraan: " << jenis << ", Roda: " << roda << endl;
    }
};

class SepedaMotor : public Kendaraan {
public:
    string merek;

    void infoSepedaMotor() {
        cout << "Merek Sepeda Motor: " << merek << endl;
        info(); // Memanggil method info dari class induk
    }
};

int main() {
    SepedaMotor motor;
    motor.jenis = "Sepeda Motor";
    motor.roda = 2;
    motor.merek = "Yamaha";

    motor.infoSepedaMotor(); // Menampilkan informasi sepeda motor

    return 0;
}
// Poin Penting:
// - Class Kendaraan sebagai class induk dengan atribut jenis dan roda.
// - Class SepedaMotor sebagai class turunan yang mewarisi dari Kendaraan dan menambahkan atribut merek.
// - Method info() di class Kendaraan
//   digunakan untuk menampilkan informasi dasar kendaraan.
// - Method infoSepedaMotor() di class SepedaMotor menampilkan informasi spesifik sep
//   ada motor dan memanggil method info() dari class induk untuk menampilkan informasi umum kendaraan.
// - Penggunaan inheritance memungkinkan reuse kode dan memperjelas struktur hierarki antar class.
// - Gunakan ": public NamaClassInduk" untuk pewarisan agar akses ke atribut dan method class induk tetap
//   dapat dilakukan di class turunan.
// - Pastikan untuk menginisialisasi atribut di class turunan agar informasi yang ditampilkan lengkap.  
// - Contoh ini menunjukkan bagaimana inheritance dapat digunakan untuk membuat struktur class yang lebih terorganisir
//   dan mudah dipahami, serta memudahkan pengelolaan kode dalam proyek yang lebih besar.
// - Inheritance juga memungkinkan kita untuk memperluas fungsionalitas class induk tanpa mengubah kode yang sudah ada, 
//   sehingga meningkatkan maintainability dan scalability dari kode yang kita tulis.   
// - Dengan inheritance, kita dapat membuat hierarki class yang jelas, di mana class turunan dapat memiliki perilaku dan atribut
//   yang lebih spesifik, sementara tetap mempertahankan akses ke atribut dan method umum dari class induk.
// - Ini juga memungkinkan kita untuk membuat kode yang lebih modular dan reusable, sehingga memudahkan pengembangan aplikasi yang kompleks.
// - Pastikan untuk memahami konsep dasar inheritance sebelum mengimplementasikannya dalam proyek yang lebih
//   besar, karena ini akan membantu dalam merancang struktur class yang efisien dan mudah dipahami.

        