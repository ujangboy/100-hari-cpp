#include <iostream>
using namespace std;

int main(){
    int data[5];

    cout << "maskan angka: " << endl;
    for(int i = 0; i < 5; ++i){
        cin >> data[i];
    }

    cout << "hasilnya adalah= ";
    for(int i = 0; i < 5; ++i ){
        cout << data[i] << " ";
    }


    return 0;
}
