//menu sederhana
#include <iostream>
using namespace std;

int main(){
    int pilihan, jumlah;
    float total = 0.0;
    cout << "=== MENU RESTORAN UJANG ===\n";

    cout << "1. Nasi liwet ikan bakar\t\tRP 20.000\n";
    cout << "2. Jengkol balado\t\t\tRP 12.000\n";
    cout << "3. Ayam bakar sambal udang\t\tRP 30.000\n";
    cout << "4. Es kelapa muda\t\t\tRP 5.000\n";
    cout << "5. Es jeruk\t\t\t\tRP 6.000\n";
    cout << "0. Selesai!";
    cout << "======================================================\n";

    do{
        cout << "\nPilih menu (masukan angka): ";
        cin >> pilihan;

        switch (pilihan){
            case 1:
            cout << "Berapa porsi";
            cin >> jumlah;
            total += 20000 * jumlah;
            cout << jumlah << " x Nasi liwet ikan bakar = RP " << 20000 * jumlah << endl;
            break;

            case 2:
            cout << "Berapa porsi";
            cin >> jumlah;
            total += 12000 * jumlah;
            cout << jumlah << " x Jengkol balado = RP " << 12000 * jumlah << endl;
            break;

            case 3:
            cout << "Berapa porsi";
            cin >> jumlah;
            total += 30000 * jumlah;
            cout << jumlah << " x Ayam bakar sambal udang = RP " << 30000 * jumlah << endl;
            break;

            case 4:
            cout << "Berapa gelas";
            cin >> jumlah;
            total += 5000 * jumlah;
            cout << jumlah << " x Es kelapa muda =Rp " << 5000 * jumlah << endl;
            break;

            case 5:
            cout << "Berapa gelas";
            cin >> jumlah;
            total += 6000 * jumlah;
            cout << jumlah << " x Es jeruk =Rp " << 6000 * jumlah << endl;
            break;

            case 0:
            cout << "Terima kasih silahkan bayar: RP " << total << endl;
            break;

            default:
            cout << "Tidak tersedia di menu! " << endl;

        }
        
    }while (pilihan != 0);
    



    return 0;
    
}