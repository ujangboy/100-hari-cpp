#include <iostream>
using namespace std;

int tambah (int a, int b) {return a + b;}
int kurang (int a, int b) {return a - b;}
int kali (int a, int b) {return a *  b;}

typedef int (*operasiPtr) (int, int);

int main(){

    operasiPtr operasi[] = {tambah, kurang, kali};
    
    int angka1 = 8, angka2 = 4;

    cout << "Hasil tambah: " << operasi[0](angka1, angka2) << endl;
    cout << "Hasil kurang: " << operasi[1](angka1, angka2 ) << endl;
    cout << "Hasil kali: " << operasi[2](angka1, angka2) << endl;
    
    


    return 0;
}