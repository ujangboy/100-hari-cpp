/*#include <iostream>
using namespace std;

void print_number(int number){
    cout << number;
}
int main(){
    int n = 10;
    print_number(n);

    return 0;
}*/

#include <iostream>
using namespace std;

int kuadrat(int angka){
    return angka*angka;
    
}

int main(){
    int nilai = 7;
    int hasil_kuadrat = kuadrat(nilai);
    cout <<"kuadrat dari " << nilai << " adalah " << hasil_kuadrat << endl;
    
    return 0;
}