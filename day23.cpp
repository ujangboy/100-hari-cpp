//isdigit fungsion
#include <cctype>
#include <iostream>
using namespace std;

int main(){
    char c1 = 'g';

    if(isdigit(c1)){
        cout << c1 << "karakter numerik ";

    }else {
        cout << c1 << " bukan karakter numerik ";
    }

    return 0;
}