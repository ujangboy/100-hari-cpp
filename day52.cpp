//struct

/*#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
};

int main(){

    Mahasiswa mhs;
    mhs.nama = "cimel";
    mhs.umur = 18;
    mhs.jurusan = "keperawatan";

    cout << "Nama: " << mhs.nama << endl;
    cout << "Umur: " << mhs.umur << endl;
    cout << "jurusan: " << mhs.jurusan << endl;



    return 0;
}*/


//input 2 buku 
#include <iostream>
using namespace std;
   
   struct judulBuku1
    {
        string judul;
        string penulis;
        int tahunTerbit;
    };
    
int main(){

   judulBuku1 mhs;
   mhs.judul = "Pemograman C++";
   mhs.penulis = "John Doe";
   mhs.tahunTerbit = 2021;

   cout << "Judul: " << mhs.judul << endl;
   cout << "Penulis: " << mhs.penulis << endl;
   cout << "Tahun Terbit: " << mhs.tahunTerbit << endl << endl;

   mhs.judul = "Belajar OOP";
   mhs.penulis = "Jane Smith";
   mhs.tahunTerbit = 2020;

   cout << "Judul: " << mhs.judul << endl;
   cout << "Penulis: " << mhs.penulis << endl;
   cout << "Tahun Terbit: " << mhs.tahunTerbit << endl << endl;

   
   
   

    return 0;
}
