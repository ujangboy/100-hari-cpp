#include <iostream>
using namespace std;


    int angka (int a1, int a2){
        return a1 + a2;
    }
int banyak (int a1, int a2){
    return a1 * a2;
}

int main(){
    int no,produk;

    no = angka(5,4);
    cout << "nomer = " << no << endl;

    produk = banyak(5,4);
    cout << "produk adalah=  " << produk;

    return 0;
}