/*#include <iostream>
using namespace std;

int main() {
	double makanan1, makanan2, jumlah_makanan;

	cout << "Masukan 2 angka: ";
	cin >> makanan1 >> makanan2;

	jumlah_makanan = makanan1 * makanan2;
	cout << "jumlahnya adalah: " << jumlah_makanan;
	return 0;
}/**/

//pertukaran 
#include <iostream>
using namespace std;

int main() {
	int no1 = 4, no2 = 6;
	cout << "no1 sebelum di tukar: " << no1 << "\n";
	cout << "no2 sebelum di tukar: " << no2 << "\n\n";

	int tukar = no1;
	no1 = no2;

	no2 = tukar;
	cout << "no1 setelah di tukar: " << no1 << "\n";
	cout << "no2 setelah di tuakr: " << no2 << "\n";

	return 0;
}