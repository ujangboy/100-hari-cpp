// Day 69: Access Modifier (public, private, protected)
// Materi: Penggunaan public, private, dan protected pada class
// Penjelasan:
// Access modifier menentukan siapa yang bisa mengakses anggota class (atribut/method).
// - public: bisa diakses dari mana saja
// - private: hanya bisa diakses dari dalam class
// - protected: bisa diakses dari class itu sendiri dan turunannya
// Contoh sederhana:
#include <iostream>
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
}

// Contoh Soal Day 69:
// Buatlah class BankAccount dengan atribut private saldo dan method public untuk setoran dan penarikan.

// Poin Penting:
// - Gunakan private untuk data sensitif.
// - public untuk method/atribut yang boleh diakses luar class.
