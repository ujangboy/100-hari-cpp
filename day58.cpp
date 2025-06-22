//aplikasi keuangan sederhana
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_TRANSAKSI = 100;

struct Transaksi
{
    string tanggal;
    string Keterangan;
    double jumlah;
    bool pemasukan; 
};

void tampilkanMenu(){
    cout << "\n=== APLIKASI KEUANGAN SEDERHANA ===\n";
    cout << "1. Tambah Transaksi\n";
    cout << "2. Lihat Semua Transaksi\n";
    cout << "3. Edit Transaksi\n";
    cout << "4. Hapus Transaksi\n";
    cout << "5. Lihat Saldo Saat Ini\n";
    cout << "6. Keluar\n";
    cout << "Pilih menu (1-6): ";
}

void tampilkanTransaksi(Transaksi data [], int jumlah) {
    if (jumlah == 0) {
        cout << "Belum ada transaksi.\n";
        return;
    }
    cout << "\nNo| Tanggal   | Keterangan | Jumlah | Tipe\n";
    for (int i = 0; i < jumlah; i++) {
        cout << i+1 << " | " << data[i].tanggal << " | " << data[i].Keterangan
             << " | " << data[i].jumlah << " | "
             << (data[i].pemasukan ? "pemasukan" : "pengeluaran") << endl; 
    }

}

double hitungSalda(Transaksi data[], int jumlah){
    double saldo = 0;
    for (int i = 0; i < jumlah; i++) {
        if (data[i].pemasukan) 
            saldo += data[i].jumlah;
        else
            saldo -= data[i].jumlah;
        
        
    }
    return saldo;
} 

int main() {

   Transaksi data[MAX_TRANSAKSI];
    int jumlah = 0, pilihan;

    while (true) {
        tampilkanMenu();
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1){
            if (jumlah < MAX_TRANSAKSI){
                cout << "Tanggal (dd-mm-yyyy): ";
                getline(cin, data[jumlah].tanggal);
                cout << "Keterangan: ";
                getline(cin, data[jumlah].Keterangan);
                cout << "Jumlah: ";
                cin >> data[jumlah].jumlah;
                cout << "Tipe (1=untuk Pemasukan, 0=untuk Pengeluaran): ";
                int tipe;
                cin >> tipe;
                data[jumlah].pemasukan = (tipe == 1);
                jumlah++;
                cout << "Transaksi berhasil ditambahkan.\n";
            
            } else {
                cout << "Data transaksi penuh!.\n";
            }
        } else if (pilihan == 2) {
            tampilkanTransaksi(data, jumlah);
        } else if (pilihan == 3) {
            tampilkanTransaksi(data, jumlah);
            cout << "Pilih nomor transaksi yang ingin diedit: ";
            int idx;
            cin >> idx;
            cin.ignore();
            if (idx < 1 || idx > jumlah) {
                cout << "Nomor tidak valid!\n";
            } else {
                cout << "Tanggal baru: ";
                getline(cin, data[idx-1].tanggal);
                cout << "Keterangan baru: ";
                getline(cin, data[idx-1].Keterangan);
                cout << "Jumlah baru: ";
                cin >> data[idx-1].jumlah;
                cout << "Tipe baru (1=Pemasukan, 0=Pengeluaran): ";
                int tipe;
                cin >> tipe;
                data[idx-1].pemasukan = (tipe == 1);
                cin.ignore();
                cout << "Transaksi berhasil diubah!\n";
            }
        } else if (pilihan == 4) {
            tampilkanTransaksi(data, jumlah);
            cout << "Pilih nomor transaksi yang ingin dihapus: ";
            int idx;
            cin >> idx;
            cin.ignore();
            if (idx < 1 || idx > jumlah) {
                cout << "Nomor tidak valid!\n";
            } else {
                for (int i = idx - 1; i < jumlah - 1; i++) {
                    data[i] = data[i + 1];
                }
                jumlah--;
                cout << "Transaksi berhasil dihapus!\n";
            }
        } else if (pilihan == 5) {
            double saldo = hitungSalda(data, jumlah);
            cout << "Saldo saat ini: " << saldo << endl;
        } else if (pilihan == 6) {
            cout << "Terima kasih telah menggunakan aplikasi ini.\n";
            break;
        } else {
            cout << "Pilihan tidak valid! Silakan coba lagi.\n";
        }

    
 }
 return 0;
}


