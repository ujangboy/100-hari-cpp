#include <iostream>
using namespace std;

int  cek(int n){
    if (n == 0 || n == 1){
        return 0;
    }

for (int i = 2; i < n / 2; ++i){
    if (n % i == 0)
    return 0;
}
return 1;
}

int main(){

    bool jawab = cek (67);

    if (jawab == 1)
    cout << "jawaban adalah benar ";

    else {
        cout << "bukan jawaban ";
    }
    return 0;
}

