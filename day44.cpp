#include <iostream>
using namespace std;

int main(){

    int nilai;
    cout << "masukan nilai: ";

    cin >> nilai;

    float* ptr = new float[nilai];

    cout << "\nmasukin nilai yang tampil: ";
    for(int i = 0; i < nilai; ++i){
        cout << "murid" << i + 1 << ": " << *(ptr + i ) << endl; 
    }

    delete[] ptr;


    return 0;
}