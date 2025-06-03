/*#include <iostream>
using namespace std;

int main() {
	cout << "ada yg beda: \n";
	for (int i = 1; i <= 10; ++i) {
		if (i == 2) {
			cout << "AYO!\n";
		} 
		else if (i == 4) {
			cout << "AYO!\n";
		}
		else if (i == 6) {
			cout << "AYO!\n";
		}
		else if (i == 8) {
			cout << "AYO!\n";
		}
		else if (i == 10) {
			cout << "AYO!\n";
		}
		else {
			cout << "SEMANGAT\n";
		}
	}

	return 0;
}/**/

/*#include <iostream>
using namespace std;

int main() {
	cout << "ada yg beda: \n";
	for (int i = 1; i <= 10; ++i) {
		if (i == 2 || i == 4 || i == 6 || i == 8 || i == 10) {
			cout << "AYOO!!\n";
		}
		else {
			cout << "SEMANGAT!!\n";
		}
	}

	return 0;
}*/

//cetak angka 1-20 
//jika angka habis di bagi 2 dia cetak aku di sini
//jika angka habis di bagi 5 dia cetak bersama mu
//jika habis di bagi 2 dan 5 dia cetak aku di sini bersama mu

#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 20; i++) {
		if (i % 2 == 0) {
			cout << "aku di sini\n";
		}
		else if (i % 5 == 0) {
			cout << "bersama mu\n";

		}
		else if (i % 10 == 0) {
			cout << "aku di sini bersama mu\n";
		}
		else {
			cout << i << "\n";
		}

	}   
	return 0;
}