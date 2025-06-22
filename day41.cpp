#include <iostream>
using namespace std;



    void perubahn(int* ptr){
        *ptr = 100;
    }

    int main(){

        int angka = 5;
        cout << "angka sebelum diubah: " << angka << endl;
        
        perubahn (&angka);
        cout << "angka setelah diubah: " << angka << endl;
            return 0;
    }


  
