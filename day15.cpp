#include <iostream>
using namespace std;

void sapa_satu(string nama){
    cout << "haii, " << nama << endl;

}

void sapa_dua (string nama1, string nama2){
    cout << "haii, " << nama1 << " dan " << nama2 << endl;
}

int main(){
    sapa_satu("amel");
    sapa_satu("jaka");
    sapa_dua("bila", "jono");
    
    return 0;
}

