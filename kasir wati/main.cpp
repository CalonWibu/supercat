#include <iostream>
#include <string>

using namespace std;

int main () {
	int total;
	int uang = 0;
	int kembalian;
	string nama;
	int hargaBarang[5];
	
	cout << "----------------------------------------------" << endl << "Selamat Datang Di kasir wati" << endl << "Masukkan nama anda" << endl;
	cin >> nama;
	cout << "halo " << nama << endl; 
	cout << "----------------------------------------------" << endl;
	
	cout << "masukkan harga barang 1" << endl;
	cin  >> hargaBarang[0];
	cout << "masukkan harga barang 2"<< endl;
	cin  >> hargaBarang[1];
	cout << "masukkan harga barang 3" << endl;
	cin  >> hargaBarang[2];
	cout << "masukkan harga barang 4" << endl;
	cin  >> hargaBarang[3];
	cout << "masukkan harga barang 5" << endl;
	cin  >> hargaBarang[4];
	
	cout << "----------------------------------------------" << endl;
	
	total = hargaBarang[0] + hargaBarang[1] + hargaBarang[2] + hargaBarang[3] + hargaBarang[4];
	
	while (uang < total) {
	

	cout << "total harga yang harus kamu bayar adalah " << total << endl;
	cout << "mohon bayar sesuai total atau lebih" << endl;
	cin >> uang;
	
		if (uang >= total) {
		
		kembalian = uang - total;
		cout << "----------------------------------------------" << endl;
		cout << "kembalian anda adalah "<< kembalian << endl;
		
	} else {
		cout << "uang anda tidak cukup" << endl;
	}
	
						}

}
