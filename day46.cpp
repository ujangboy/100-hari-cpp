//pointer ke array

/*#include <iostream>
using namespace std;

int main(){

    int arr[] = {11, 14, 17, 18, 20};
    int *ptr = arr;

    cout << "Nilai arr[0]: " << *ptr << endl;
    cout << "alamat arr[0]: " << ptr << endl;

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main(){

    int arr[] = {11, 14, 17, 18, 20};
    int *ptr = arr;

    for(int i= 0; i < 5; ++i){
        cout << "araay yang muncul["<< i << "] = " << *(ptr + i) << endl;
    }

    return 0;
}*/

#include <iostream>
using namespace std;

int main(){

    int arr[] = {11, 14, 17, 18, 20};
    int *ptr = arr;

    for(int i= 0; i < 5; ++i){
       *(ptr + i) *=2; // setiap elemen di kali 2
    }
 
    for (int i =0; i < 5; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}