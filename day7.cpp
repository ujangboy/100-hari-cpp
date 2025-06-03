#include <iostream>
using namespace std;
int main (){

    int angka;
    for (int i = 1; i <= 5; i++){
        cout << " masukan angka: \n";
        cin >> angka;
        
        if (angka < 0){
            continue;
        }
        cout << "angka adalah: \n" << angka;
    }
    


    return 0;
}