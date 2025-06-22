//pointer ke fungsi

/*#include <iostream>
using namespace std;


int tambah(int a, int b){
    return a + b;
}




int main(){

    int (*ptrFunc) (int, int);

    ptrFunc = &tambah;


int hasil =ptrFunc(7, 10);
cout << "Hasil: " << hasil << endl;

    return 0;
}*/

/*#include <iostream>
using namespace std;

int tambah (int a, int b) {return a + b;}
int kurang (int a, int b) {return a - b;}

void hitung(int x, int y, int (*func) (int, int)) {
    int hasil = func(x,y);
    cout << "Hasil: " << hasil << endl;
}

int main(){

    hitung(34, 34, tambah);
    hitung(77, 40, kurang);

    return 0;
}*/

#include <iostream>
using namespace std;

int tambah (int a, int b) {return a + b;}
int kurang (int a, int b) {return a - b;}
int kali (int a, int b) {return a * b;}

int main(){

    int (*operasi[]) (int, int ) = {tambah, kurang, kali};
    int pilihan, a = 10, b = 5;

    cout << "pilih operasi (0: +, 1: -, 2: *): ";
    cin >> pilihan;

    if(pilihan >= 0 && pilihan <=2){
        int hasil = operasi[pilihan](a, b);
        cout << "hasil: " << hasil << endl;
    }else {
        cout << "pilihan tidak valid!" << endl;
    }
    return 0;
}