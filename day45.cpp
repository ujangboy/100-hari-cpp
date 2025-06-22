//voin in pointer
#include<iostream>
using namespace std;

int main(){
    void* ptr;
    float f = 2.4f;

    ptr = &f;

    cout << "alamat dari f: " << &f << endl;
    cout << "alamat dari ptr: " << ptr ;

    return 0;
}

    

