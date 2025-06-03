#include <iostream>
#include <string>
using namespace std;

struct Mahasisswa{
    string nama;
    int umur;
    float ipk;

};

int main(){
    Mahasisswa mhs[3 ];
    for (int i = 0; i < 3; i++){
        cout << "Data Mahasisa ke-" << i+1 << endl;
        cout << "nama: ";
        cin >> mhs[i].nama;
        cout << "umur: ";
        cin >> mhs[i].umur;
        cout << "IPK: ";
        cin >> mhs[i].ipk;
      }
      cout <<"\nData mahasiswa:\n";
      for(int i = 0; i < 3; i++){
        cout << mhs[i].nama << " (" << mhs[i].umur << ") IPK: " << mhs[i].ipk << endl;

      }

      return 0;
}
