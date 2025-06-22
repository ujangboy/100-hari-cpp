#include <iostream>
using namespace std;

struct impian
{
    string hobi;
    string makananFaVorit;
    string WotaFavorit;
};

int main(){

    impian imp;

    cout << "Masukan Hobimu: ";
    cin >> imp.hobi;

    cout << "Masukan makanan favoritmu: ";
    cin >> imp.makananFaVorit;

    cout << "woto favoritmu! ";
    cin >> imp.WotaFavorit;

    cout << "\n====== KEHIDUPAN WOTA JKT48 =====\n";
    cout << "Hobinya: " << imp.hobi << endl;
    cout << "makanan favoriynya: " << imp.makananFaVorit << endl;
    cout << "member tercina: " << imp.WotaFavorit << endl;

    cout << "kamu akan menikahi " << imp.WotaFavorit << endl;



    return 0;
}
