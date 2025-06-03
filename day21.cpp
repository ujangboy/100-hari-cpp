//block scope
/*#include <iostream>
using namespace std;

int main(){
    int angka = 13;
    if(angka > 0){
        bool flag =1;// alah di sini
    }
    cout << flag; 
    return 0;
}  */ //block salah

#include <iostream>
using namespace std;

int main(){

    int angka = 13;

    bool flag ; //ini benar

    if(angka > 0){
       flag = 1;
    }
    cout << flag; 
    return 0;
}