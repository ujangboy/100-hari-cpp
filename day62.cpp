//Dynamic Memory Allocation
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int* data = new int[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i+1 << ": ";
        cin >> data[i];
    }

    cout << "Data yang diinput:\n";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    delete[] data; 
    return 0;
}