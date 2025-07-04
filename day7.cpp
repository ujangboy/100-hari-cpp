#include <iostream>
using namespace std;

int main() {
    int angka;
    int jumlahInput = 0;
    int total = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> angka;

        if (angka < 0) {
            cout << "Angka negatif di-skip.\n";
            continue;
        }
        cout << "Angka adalah: " << angka << endl;
        total += angka;
        jumlahInput++;
    }

    cout << "\nJumlah angka positif yang diinput: " << jumlahInput << endl;
    cout << "Total semua angka positif: " << total << endl;
    
    return 0;
}