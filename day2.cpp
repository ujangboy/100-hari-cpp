
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	
	char jawaban;
	string pilihan;
	
	cout << ("====================================== SELAMAT DATANG DIPETUALANGAN KABAYAN =========================================\n\n\n");
	cout << ("Kabayan sangat ingin sekali pergi ke kota untuk melihat keindahan kota yang indah\n");
	cout << ("tetapi kabayan kebinguan harus memakai apa untuk sampai ke kota\n");
	cout << ("Karna jarak desa ke kota sanggtlah jauh.\n\n");

	cout << ("Apakah kamu siap membantu kabayan menuju ke kota?\n");
	cout << ("pilih y/n: ");
	cin >> jawaban;

	if (jawaban == 'y' || jawaban == 'Y') {
		cout << "Kamu memilih lanjut membantu kabayan ke kota!!\n";
		cout << "MARI KITA KE KOTA!!\n";
	}
	else if (jawaban == 'n' || jawaban == 'N') {
		cout << "Kabayan sedih kamu tidak mau membantunya :(\n";
		return 0;
	}
	else {
		cout << "Pilihan y/n tidak valid.\n";
	}  

		transform(pilihan.begin(), pilihan.end(), pilihan.begin(), ::tolower);

		cout << "WAHH GAWATT!!\n";
		cout << "Kabayan butuh kendaraan.\n";
		cout << "bantu kabayan untuk memilih kendaraan apa yang cocock untunknya.\n";
		cout << "Untuk pergi ke kota yang saat jauh.\n\n";
		cout << "PILIHLAH KENDARAAN YANG COCOK UNTUK KABAYAN\n";

		cout << "1.Naik kuda untuk sampai kota\n";
		cout << "2.Naik karpet om jin untuk sampai kota\n";
		cout << "3.Naik ojek dengan mesin turbin untuk sampai kota\n";
		cout << "4.Naik bajai racing untuk sampai kota\n";

		cin.ignore();
		getline(cin, pilihan);

		if (pilihan == "Naik kuda") {
			cout << "Kabayan naik kuda untuk sampai ke kota\n";
			cout << "tetapi sanggat lama membutuhkan waktu yang cukup melelaskan untuk sampai ke kota\n";
			cout << "karna perjalanan yang cukup jauh kabayan dan kuda akhirnya tidak memutuskan perjalanannya kerna melelahkan\n";
		}
		else if (pilihan == "Naik karpet" || pilihan == "naik karpet") {
			cout << "Kabayan naik karpet om jin untuk sampai ke kota\n";
			cout << "bisa melihat pemandangan dari atas kota yang indah\n";
			cout << "kabayan sangat senang sekali menaiki karpet om jin\n";
		}
		else if (pilihan == "Naik ojek" || pilihan == "naik ojek") {
			cout << "Kabayan naik ojek mesin turbin untuk sampai ke kota\n";
			cout << "kabayan cpat sampai ke kota karna ojek yang sanggat kencang\n";
			cout << "kabayan sangat senang sekali karna cepat sampai di kota\n";
		}
		else if (pilihan == "Naik bajai" || pilihan == "naik bajai") {
			cout << "Kabayan naik bajai racing untuk sampai ke kota\n";
			cout << "kabayan sangant cepkat sampai di kota dengan bajai racingnya\n";
			cout << "kabayan sangat senang sekalikarna cepkat sanpai kekota dan ingin menikmati indahnya kota\n";
		}
		else {
			cout << "pilihan tidak valid";
			cout << "TIDAK BISA DI INPUT!!";
		}

	
	
	return 0;
}