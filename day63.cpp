//Fungsi dengan Return Struct
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int nilai;
};

Mahasiswa cariTertinggi(Mahasiswa data[], int n) {
    Mahasiswa tertinggi = data[0];
    for (int i = 1; i < n; i++) {
        if (data[i].nilai > tertinggi.nilai)
            tertinggi = data[i];
    }
    return tertinggi;
}

int main() {
    int n;
    cout << "Jumlah mahasiswa: ";
    cin >> n;
    cin.ignore();

    Mahasiswa* data = new Mahasiswa[n];
    for (int i = 0; i < n; i++) {
        cout << "Nama: "; getline(cin, data[i].nama);
        cout << "Nilai: "; cin >> data[i].nilai;
        cin.ignore();
    }

    Mahasiswa mhsTertinggi = cariTertinggi(data, n);
    cout << "\nMahasiswa dengan nilai tertinggi:\n";
    cout << "Nama: " << mhsTertinggi.nama << ", Nilai: " << mhsTertinggi.nilai << endl;

    delete[] data;
    return 0;
}