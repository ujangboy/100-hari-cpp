/*#include <iostream>
using namespace std;

void greet(){
    cout << "hello, how are you";
}
int main(){
    greet();
    cout << endl;
    greet();
    return 0;
}*/

#include <iostream>
using namespace std;

void greet(){
    cout << "hello, how are you";
}
int main(){
    for (int i = 0; i < 3; ++i){
        greet();
        cout << endl;
    }
    return 0;
}

