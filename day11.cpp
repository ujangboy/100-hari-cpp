/*#include <iostream>
using namespace std;

int main(){
    int angka = 10;
    int fakcorial = 1;

    if(angka < 0 ){
        cout << "tidak valid!!";

    }else {
        for (int i = 2; i <= angka; ++i)
          fakcorial *= i;
    }
    cout << "faktorial adalah " << angka << " = " << fakcorial;
    return 0;
}*/

#include <iostream>
using namespace std;

int main(){
    int angka = 80;

    cout << "faotorialnya dari " << angka << " adalah: ";

    for (int i = 1; i <= angka; ++i){
        if(angka % i == 0){
            cout << i << ", ";
        }
    }
    
    return 0;
}