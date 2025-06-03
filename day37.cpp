#include <iostream>
using namespace std;

int main(){

    int pilihan;
    int angka1, angka2, hasil;

    cout << "\n=====Kalkulator Sederhana=====\n";
    cout << "1. penjumlahan (+)\n";
    cout << "2. pengurangan (-)\n";
    cout << "3. perkalian (*)\n";
    cout << "4. pembagian (/)\n";
    cout << "Pilihlah opsi (1-4)";
    cin >> pilihan;

    switch(pilihan){
        case 1:
        cout << "masukan angka pertama: ";
        cin >> angka1;
        cout << "masukan angka kedua: ";
        cin >> angka2;
        hasil = angka1 + angka2; 
        cout << "hasil " << angka1 << "-" << angka2 << "  adalah: " << hasil;
        break;

        case 2:
        cout << "masukan angka pertama:";
        cin >> angka1;
        cout << "masukan angka kedua: ";
        cin >> angka2;
        hasil = angka1 - angka2;
        cout << "hasil " << angka1 << "-" << angka2 << " adalah: " << hasil;
        break;

        case 3:
        cout << "masukan angka pertam: ";
        cin >> angka1;
        cout << "masukan angka kedua: ";
        cin >> angka2;
        hasil = angka1 * angka2;
        cout << "hasil " << angka1 << "*" << angka2 << " adalah: " << hasil;
        break;

        case 4:
        cout << "masukan angka pertama: ";
        cin >> angka1;
        cout << "masukan angka kedua: ";
        cin >> angka2;
        if(angka2 !=0){
            hasil = angka1 / angka2;
            cout << "hasil " << angka1 << "/" << angka2 << " adalah: " << hasil;

        }else {
            cout << "tidak boleh dibagi dengan nol";
        }
        break;

        default:
        cout << "pilihan tidak valid!!";

    }




    return 0;

}