//fungsion prototype
/*#include <iostream>
using namespace std;

void aku();// panggil dulu fungsion prototype

int main(){

    aku(); //baru panggil fungsi 


    return 0;
}

void aku() {
    cout << "aku disini";
}*/

#include <iostream>
using namespace std;

int masukin_nomer(int,int);

int main(){
    int jawaban = masukin_nomer (10, 12);
    cout << "jawaban adalah " << jawaban;
    return 0;
}

int masukin_nomer(int a, int b){
    int no = a + b;
    return no;
}
