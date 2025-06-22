#include <iostream>
#include <string>
using namespace std;

struct Karakter {
    string nama;
    string deskripsi;
};

int main() {
   
    Karakter daftar[] = {
        {"freya", "gadis koleris yang berimajinasi terangi harimu dengan senyuman karamelku"},
        {"christy", "peduli dan berbaik hati siapakah dia?"},
        {"olla", "dengan keajaibanku, aku akan mambuat kalian sealalu tertawa. Halo, aku olla si mechanic gilr!"},
        {"gita", "Diam bukan berarti tak memperhatikanmu"}

    };

    int jumlah_karakter = sizeof(daftar) / sizeof(daftar[0]);

    
    string pilihan;
    cout << "Masukkan nama member (freya, christy, olla, gita ): ";
    cin >> pilihan;

    bool ketemu = false;
    for(int i = 0; i < jumlah_karakter; i++) {
        if (pilihan == daftar[i].nama) {
            cout << daftar[i].deskripsi << endl;
            ketemu = true;
            break;
        }
    }

    if (!ketemu) {
        cout << "Karakter tidak dikenal." << endl;
    }

    return 0;
}
