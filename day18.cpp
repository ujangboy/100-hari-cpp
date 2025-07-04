#include <iostream>
using namespace std;

namespace pertama{
    int x = 3;
}

namespace angka2{
    int x = 8;
}

int main(){
   using namespace angka2;

    cout << angka2 :: x;

}