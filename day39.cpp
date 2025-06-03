//pointer
/*#include <iostream>
using namespace std;

int main(){

  int num = 5;
  int *ptr = &num;

  cout << "nilai num " << num << endl;
  cout << "alamat num " << &num << endl;
  cout << "nilai ptr " << ptr << endl;
  cout << "nilai yang ditunjuk ptr " << *ptr;

   

       
    return 0;
}*/


/*
#include <iostream>
using namespace std;

int main(){

  int angka = 7;
  int *ptr = &angka;

  cout << "nilai awal: " << angka << endl;
  *ptr = 10;
  cout << "nilai setelah di ubah dari alamat ptr ke int: " << angka;



  return 0;
}*/

//mengunakan pass by reference
/*#include <iostream>
using namespace std;

  void tambah_nilai (int *nilai){
    *nilai += 5;
  }


  int main(){
    int ubah = 20;

    tambah_nilai(&ubah);
    cout << "nilai yang udah di ubah " << ubah;
    return 0;
  }*/

  /*#include <iostream>
  using namespace std;

  int main(){
    int size = 5;
    int *arr = new int [size];

    for(int i = 0; i < size; i++){
      arr[i] = i * 2;

    }

    for(int i = 0; i < size; i++){
      cout << arr[i] << " "; 
      
    }

    delete[] arr; //unruk menghindari leak bisa juga untuk menghapus memory
    return 0;
  }*/

  /*
  jika ingin mengunakan pointer harus didekklarasikan mengunakan * sebelum nama variabel dan
  harus diinisiasi dengan alamat memorti yang valid sebelum digunakan

  int c, *pc;
  pc = c; ini akan error karna pc alamat sedangkan c bukan

  *pc = &c ini juga akan error karna &c alamat sedangkan *pc bukan

  pc = &c; ini akan valid pc dan &c adalah alamat

  *pc = c; ini akan valid *pc dan c adalah alamat


  
  */  
  

  #include <iostream>
  using namespace std;

  int main(){
    int x[3];
    for(int i = 0; i < 3; ++i){
      cout << "kalo &x " << &x[i] << endl;
    }
       cout << "alamat array dari x: " << x;
    return 0;
  }