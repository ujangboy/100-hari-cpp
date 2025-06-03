/*#include <iostream>
using namespace std;

int main(){
    int mangga, apel;

    cout << "masukan angka: ";
    cin >> mangga >> apel;

    if( mangga > apel ){
        cout << mangga << " kurang " << apel; 
    }else if (apel > mangga){
        cout << apel << " kurang " << mangga;
    }
    else {
        cout << mangga << " dana " << apel << " sama";
    }
    return 0;
}*/

#include <iostream>
using namespace std;

int main(){
    double angka1 = 5.2, angka2 = 3.1, angka3 = -6.3;

    if (angka1 >= angka2 && angka1 >= angka3){
        cout << angka1 << " angka yang besar.";

    }else if (angka2 >= angka1 && angka2 >= angka3){
        cout << angka2 << " angka yang besar2.";

    }else {
        cout << angka3 << " angka yang besar3.";

    }
    return 0;
}