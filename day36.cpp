#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "\n===Jadwal Pelajarn!===\n";
    string jadwal[5][3] = {
        {"Matematika", "Bahasa indonesia", "Pancasila"},
        {"Sejarah", "Penjas", "Seni budaya"},
        {"Agama", "Fisika", "Sasis dan penggerak"},
        {"Teknik kendaraan ringan", "gambar teknik", "kelistrikan"},
        {"kewirausaan", "Fisika", "bahasa inggris"}
    };

    for(int hari = 0; hari < 5; hari++){
        cout << "\nHari ke-" << hari + 1<< ":\n";
        for(int jam = 0; jam < 3; jam++) {
            cout << "jam " << jam + 1 << ": " << jadwal[hari][jam] << endl ;
        }
    }


    return 0;
}