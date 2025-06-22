//dynamic memory allocation
#include <iostream>
using namespace std;

int main(){

    double* ptr = new double;
    *ptr = 45.45;
    cout << *ptr;

    delete ptr;



    return 0;
}