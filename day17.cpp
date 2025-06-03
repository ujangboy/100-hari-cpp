#include <iostream>
#include <string>
using namespace std;

string sapaan(bool kondisi){
    if(kondisi){
        return "haii";
    }else {
        return "haloo";
    }
}

void sapa(const string& nama, const string& sapaan_khusus){
    cout << sapaan_khusus << " " << nama << "!";
}
int main(){

string nama = "sankaru";
bool status = false;
string sankaru = sapaan(status);
sapa(nama,sankaru);

}
