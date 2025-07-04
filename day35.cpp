/*#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "\n===Absen harian!====\n\n";
    string absen[5] = {
        {"andi"},
        {"bedul"},
        {"candra"},
        {"debby"},
         {"elina"},
    };

    for(int i = 0; i < 5; i++){
        cout << "Yang hadir: " << absen[i]  << endl;
         
    }

    return 0;
}*/

//di ubah ke input dan output

#include <iostream>
#include <string>
using namespace std;

int main(){

    const int max = 5;
    string absen[max];

    cout << "\n====Absen harian====\n";

    for(int i = 0; i < max; i++){
        cout << "Nama ke-" << i + 1 << ": ";
        cin >> absen[i];
    }

    cout << "\n====Daftar Hadir====\n";

    for(int i = 0; i < max; i++){
        if (!absen[i].empty()) { //agar nama enggak kosong 
            cout << "Yang hadir: " << absen[i] << endl;
        }
    }
    

    return 0;

}