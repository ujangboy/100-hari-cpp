#include <iostream>
using namespace std;

int main() {
	int aku;
	for (int i = 1; i <= 10; ++i) {
		cout << "Masukan angka: " ;
		cin >> aku;

		if (aku > 10) {
			break;
		}
		cout << "Aku adalah: " << aku << "\n";

	}


	return 0;
}