
//merubah int menjadi double
/*#include <iostream>
using namespace std;
int main()
{
    int a = 16;
    double b;
    b = a + 4.6;

    cout << "b sekarang adalah: " << b;

    return 0;
}/**/


//double ke int
#include <iostream>
using namespace std;
int main()
{
    double angka1 = 6.2, angka2 = 20.12;

    int angka_1 = (int)angka1;
    int angka_2 = (int)angka2;

    cout << "angka1 sekarang adalah: " << angka_1 << "\n";
    cout << "angka2 sekarang adalah: " << angka_2 << "\n\n";

    cout << "versi lain dari double ke int\n";

    double jambu = 8.4;
    int mangga = jambu * 44;

    double kembali = (double)jambu;
    

    cout << "\njambu berubah menjadi: " << mangga << "\n";
    cout << "\nmanggga berubah menjadi: " << kembali;

    return 0;
}