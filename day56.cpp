//Faktorial dengan Rekursi
/*#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n <= 1) 
        return 1;
    else 
        return n * faktorial(n -1);
    
}

int main (){
    int angka;
    cout << "masukan angka: ";
    cin >> angka;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;
 
    return 0;
}*/

//Deret Fibonacci dengan Rekursi
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0; 
        if (n == 1) return 1; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int n;
    cout << "Masukkan jumlah suku Fibonacci: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}