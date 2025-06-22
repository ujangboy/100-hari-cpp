//pointer ganda

/*#include <iostream>
using namespace std;

int main(){


    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;

    cout << "nilai a: " << a << endl;
    cout << "nilai a lewat ptr1: " << *ptr1 << endl;
    cout << "nilai a lewat ptr2: " << **ptr2 << endl; 


    return 0;
}*/



/*#include <iostream>
using namespace std;

int main() {
    int baris, kolom;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    // Buat array 2D dinamis
    int **matriks = new int*[baris];
    for(int i = 0; i < baris; i++) {
        matriks[i] = new int[kolom];
    }

    // Isi matriks
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            matriks[i][j] = i + j;
        }
    }

    // Tampilkan matriks
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    // Hapus memori
    for(int i = 0; i < baris; i++) {
        delete[] matriks[i];
    }
    delete[] matriks;

    return 0;
}*/


#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    for(int i = 0; i < argc; i++) {
        cout << "Argumen ke-" << i << ": " << argv[i] << endl;
    }
    return 0;
}