#include <iostream>
using namespace std;

int main(){
    int no[5] = {32, 22, 10, 11, 8,};
    int angka = 0;

    for (int i = 0; i < 5; ++i){
        angka = angka + no[i];
    }
    cout << "angka adalah =" << angka <<endl; 
    

    return 0;
}
