#include <iostream>
#include <string>
using namespace std;

int main() {
	int pilihan, saldo, total, wadah;
	string pilihanH;
	
	do {
	cout << "Halo ngab, mau cari apa?\n\nmenu:\n1. cari marmer\n2. cari jabatan\n3. cari masalah\n4. cari angin\n\npilih dengan ketik angkanya >> ";
	cin >> pilihan;
	
	if (pilihan != 1) {
		system("CLS");
		cout << "waduh kami tidak ada kalau itu\n\n";
	}
	} while (pilihan != 1);

	if (pilihan == 1) {
		system("CLS");
		cout << "anda mau cari marmer tipe apa ?\npilihan:\n1. marmer kode 1 atau marmer jenis Orca\n2. marmer kode 2 atau marmer jenis pearl\n3. marmer kode 3 atau marmer jenis shade\n4. marmer kode 4 atau marmer jenis laterite\n5. marmer kode 5 atau marmer jenis coal\n\npilih dengan ketik angkanya >> ";
		cin >> pilihan;
		if (pilihan != 1 && pilihan != 2 && pilihan != 3 && pilihan != 4 && pilihan != 5) {
		system("CLS");
		cout << "selain kode marmer di bawah itu kami tidak jual ngab\n\n";
		} 
		
	} 
	
	
	switch (pilihan) {
		case 1:
			system("CLS");
			do {
			cout << "ekhem, untuk marmer orca itu kita open di harga Rp 250.000/m2.\nTapi... jika anda membeli di atas 40m maka anda akan dapat diskon dan harganya menjadi Rp 220.000/m2\n\nJadi anda mau beli berapa m? \n\n>> ";
			cin >> pilihan;
			if (pilihan < 1) {
			system("CLS");
			cout << "mohon untuk membeli di atas 0 meter ngab\n\n";
			}
		} while (pilihan < 1);
			
			if (pilihan >= 40) {
				total = 220000 * pilihan;
				wadah = pilihan;
				cout << "baik ngab, anda ingin beli marmer orca sebesar " << wadah << "m2\n\ntotal:\nlHarga /m = Rp 220.000\nTotal harga = " << total << "\n\nBayar >> Rp ";
				do {
				cin >> saldo;
				
					if (saldo < total) {
						system("CLS");
						cout << "waduh, mohon maaf uang mu kurang.\nmohon bayar sesuai harga total atau lebih\n\n>> Rp";
					} 
				} while (saldo < total);
				total = saldo - total;
				cout << "Terimakasih ngab, anda telah membeli marmer orca sebesar " << wadah << "m2 Kembalian mu adalah " << total;
				
			} else  {
				total = 250000 * pilihan;
				wadah = pilihan;
				cout << "baik ngab, anda ingin beli marmer orca sebesar " << wadah << "m2\n\ntotal:\nHarga /m = Rp 250.000\nTotal harga = " << total << "\n\nBayar >> Rp ";
				do {
				cin >> saldo;
				
					if (saldo < total) {
						system("CLS");
						cout << "waduh, mohon maaf uang mu kurang.\nmohon bayar sesuai harga total atau lebih\n\n>> Rp ";
					} 
				} while (saldo < total);
				total = saldo - total;
				cout << "Terimakasih ngab, anda telah membeli marmer orca sebesar " << wadah << "m2 Kembalian mu adalah Rp " << total;
				
			}
			break;
			
			case 2:
			system("CLS");
			do {
			cout << "ekhem, untuk marmer pearl itu kita open di harga Rp 170.000/m.\nTapi... jika anda membeli di atas 50m maka anda akan dapat diskon dan harganya menjadi Rp 160.000/m\n\nJadi anda mau beli berapa m? \n\n>> ";
			cin >> pilihan;
			if (pilihan < 1) {
			system("CLS");
			cout << "mohon untuk membeli di atas 0 meter ngab\n\n";
			}
		} while (pilihan < 1);
			
			if (pilihan >= 50) {
				total = 160000 * pilihan;
				wadah = pilihan;
				cout << "baik ngab, anda ingin beli marmer pearl sebesar " << wadah << "m\n\ntotal:\nHarga /m = Rp 160.000\nTotal harga = " << total << "\n\nBayar >> Rp ";
				do {
				cin >> saldo;
				
					if (saldo < total) {
						system("CLS");
						cout << "waduh, mohon maaf uang mu kurang.\nmohon bayar sesuai harga total atau lebih\n\n>> Rp ";
					} 
				} while (saldo < total);
				total = saldo - total;
				cout << "Terimakasih ngab, anda telah membeli marmer pearl sebesar " << wadah << "m Kembalian mu adalah Rp " << total;
				
			} else  {
				total = 170000 * pilihan;
				wadah = pilihan;
				cout << "baik ngab, anda ingin beli marmer pearl sebesar " << wadah << "m\n\ntotal:\nHarga /m = Rp 170.000\nTotal harga = " << total << "\n\nBayar >> Rp ";
				do {
				cin >> saldo;
				
					if (saldo < total) {
						system("CLS");
						cout << "waduh, mohon maaf uang mu kurang.\nmohon bayar sesuai harga total atau lebih\n\n>> Rp ";
					} 
				} while (saldo < total);
				total = saldo - total;
				cout << "Terimakasih ngab, anda telah membeli marmer pearl sebesar " << wadah << "m Kembalian mu adalah Rp " << total;
				
			}
			break;
			
			case 3:
			system("CLS");
			do {
			cout << "ekhem, untuk marmer shade itu kita open di harga Rp 200.000/m\n\nJadi anda mau beli berapa m? \n\n>> ";
			cin >> pilihan;
			if (pilihan < 1) {
			system("CLS");
			cout << "mohon untuk membeli di atas 0 meter ngab\n\n";
			}
		} while (pilihan < 1);
			
		
				total = 200000 * pilihan;
				wadah = pilihan;
				cout << "baik ngab, anda ingin beli marmer shade sebesar " << wadah << "m\n\ntotal:\nHarga /m = Rp 200.000\nTotal harga = " << total << "\n\nBayar >> Rp ";
				do {
				cin >> saldo;
				
					if (saldo < total) {
						system("CLS");
						cout << "waduh, mohon maaf uang mu kurang.\nmohon bayar sesuai harga total atau lebih\n\n>> Rp ";
					} 
				} while (saldo < total);
				total = saldo - total;
				cout << "Terimakasih ngab, anda telah membeli marmer shade sebesar " << wadah << "m Kembalian mu adalah Rp " << total;
				
			
			break;
			
			case 4:
			system("CLS");
			do {
			cout << "ekhem, untuk marmer laterite itu kita open di harga Rp 350.000/m.\nTapi... jika anda membeli di atas 40m maka anda akan dapat diskon dan harganya menjadi Rp 300.000/m\n\nJadi anda mau beli berapa m? \n\n>> ";
			cin >> pilihan;
			if (pilihan < 1) {
			system("CLS");
			cout << "mohon untuk membeli di atas 0 meter ngab\n\n";
			}
		} while (pilihan < 1);
			
			if (pilihan >= 40) {
				total = 300000 * pilihan;
				wadah = pilihan;
				cout << "baik ngab, anda ingin beli marmer laterite sebesar " << wadah << "m\n\ntotal:\n\Harga /m = Rp 300.000\nTotal harga = " << total << "\n\nBayar >> Rp ";
				do {
				cin >> saldo;
				
					if (saldo < total) {
						system("CLS");
						cout << "waduh, mohon maaf uang mu kurang.\nmohon bayar sesuai harga total atau lebih\n\n>> Rp ";
					} 
				} while (saldo < total);
				total = saldo - total;
				cout << "Terimakasih ngab, anda telah membeli marmer laterite sebesar " << wadah << "m Kembalian mu adalah Rp " << total;
				
			} else  {
				total = 350000 * pilihan;
				wadah = pilihan;
				cout << "baik ngab, anda ingin beli marmer laterite sebesar " << wadah << "m\n\ntotal:\n\Harga /m = Rp 350.000\nTotal harga = " << total << "\n\nBayar >> Rp ";
				do {
				cin >> saldo;
				
					if (saldo < total) {
						system("CLS");
						cout << "waduh, mohon maaf uang mu kurang.\nmohon bayar sesuai harga total atau lebih\n\n>> Rp ";
					} 
				} while (saldo < total);
				total = saldo - total;
				cout << "Terimakasih ngab, anda telah membeli marmer laterite sebesar " << wadah << "m Kembalian mu adalah Rp " << total;
				
			}
			break;
			
			case 5:
			system("CLS");
			do {
			cout << "ekhem, untuk marmer coal itu kita open di harga Rp 130.000/m.\nTapi... jika anda membeli di atas 40m maka anda akan dapat diskon dan harganya menjadi Rp 100.000/m \ndan jika anda membeli di atas 50m maka anda akan dapat diskon dan harganya menjadi Rp 120.000/m\n\nJadi anda mau beli berapa m? \n\n>> ";
			cin >> pilihan;
			if (pilihan < 1) {
			system("CLS");
			cout << "mohon untuk membeli di atas 0 meter ngab\n\n";
			}
		} while (pilihan < 1);
			
			if (pilihan >= 40 && pilihan <=49) {
				total = 100000 * pilihan;
				wadah = pilihan;
				cout << "baik ngab, anda ingin beli marmer coal sebesar " << wadah << "m\n\ntotal:\n\Harga /m = Rp 100.000\nTotal harga = " << total << "\n\nBayar >> Rp ";
				do {
				cin >> saldo;
				
					if (saldo < total) {
						system("CLS");
						cout << "waduh, mohon maaf uang mu kurang.\nmohon bayar sesuai harga total atau lebih\n\n>> Rp ";
					} 
				} while (saldo < total);
				total = saldo - total;
				cout << "Terimakasih ngab, anda telah membeli marmer laterite sebesar " << wadah << "m Kembalian mu adalah Rp " << total;
				
			} else if (pilihan >=50) {
				total = 120000 * pilihan;
				wadah = pilihan;
				cout << "baik ngab, anda ingin beli marmer coal sebesar " << wadah << "m\n\ntotal:\n\Harga /m = Rp 120.000\nTotal harga = " << total << "\n\nBayar >> Rp ";
				do {
				cin >> saldo;
				
					if (saldo < total) {
						system("CLS");
						cout << "waduh, mohon maaf uang mu kurang.\nmohon bayar sesuai harga total atau lebih\n\n>> Rp ";
					} 
				} while (saldo < total);
				total = saldo - total;
				cout << "Terimakasih ngab, anda telah membeli marmer coal sebesar " << wadah << "m Kembalian mu adalah Rp " << total;
				
			} else {
				total = 130000 * pilihan;
				wadah = pilihan;
				cout << "baik ngab, anda ingin beli marmer coal sebesar " << wadah << "m\n\ntotal:\n\Harga /m = Rp 130.000\nTotal harga = " << total << "\n\nBayar >> Rp ";
				do {
				cin >> saldo;
				
					if (saldo < total) {
						system("CLS");
						cout << "waduh, mohon maaf uang mu kurang.\nmohon bayar sesuai harga total atau lebih\n\n>> Rp ";
					} 
				} while (saldo < total);
				total = saldo - total;
				cout << "Terimakasih ngab, anda telah membeli marmer coal sebesar " << wadah << "m Kembalian mu adalah Rp " << total;
				
			} 
			break;
			
	}
}
