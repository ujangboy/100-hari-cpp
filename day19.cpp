/*#include <iostream>
using namespace std;


    void masukan_nomer (int no1, int no2){
        int no = no1 + no2;
        cout << "nomer adalah " << no;
    }
int main(){

    masukan_nomer(8,4);

    return 0;
}*/

/*#include <iostream>
using namespace std;


    int masukan_nomer (int no1, int no2){
        int no;
        no = no1 + no2;
        return no;
    }
    int main(){
        int jawaban;

        jawaban = masukan_nomer(8, 4);
        cout << "nomer adalah " << jawaban;
        
        return 0;
    }*/

    #include <iostream>
    using namespace std;

    double angka_pecahan(double no1, double no2){
        double no = no1 * no2;
        return no;
    }
    int main(){
        double jawaban;
        jawaban = angka_pecahan(8.2, 4.2);
        cout << "jadi jawaban adalah " << jawaban << endl;

        jawaban = angka_pecahan(-15.4, 10.8);
        cout << "jawaban ke 2 adalah " << jawaban;
        return 0;
    }