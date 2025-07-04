//array dua dimensi
#include <iostream>
using namespace std;

int main(){
    int bunga[3][2] = {
        {2,4},
        {3,12},
        {10,12}
    };

    for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 2; ++j){
        cout << bunga[i][j]<< " " ;
    }
    cout << endl;
    }

    return 0;
}