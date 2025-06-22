#include <iostream>
using namespace std;

int* tambahkan(int* data){
    for(int i = 0; i < 5; ++i){
        *(data + i) = *(data + i ) + 10;

    }
    return data;    
}

int main(){

    int data[5] = {1, 2, 3, 4, 5};
    int *jawab;
    jawab = tambahkan(data);

    for(int i = 0; i < 5; ++i ){
        cout << *(jawab + i) << " "; 
    }


    return 0;

}