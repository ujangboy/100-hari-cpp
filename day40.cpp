#include <iostream>
using namespace std;

int main(){

    int x[4] = {2, 4, 6, 8};

    cout << "elemen kedua: " << *(x + 1) << endl;

    *(x + 2) = 100;

    cout << "elemen ketika: " << x[2] << endl;

    cout << "masukan elemen ke 4:  ";
    cin >> *(x + 3);

    cout << "elemen kedua: " << x[3];




    return 0;
}