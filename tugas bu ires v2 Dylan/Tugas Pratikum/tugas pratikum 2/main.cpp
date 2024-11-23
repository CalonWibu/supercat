#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {	
	int barang[5] = {0}, total, uanguser;
	int kembalian, pecahan[6] = {0}, uang[6] = {5000, 1000, 500, 200, 100, 1};
	
	
	cout << "masukkan Barang 1 >> ";
	cin >> barang[0];
	cout << "\nmasukkan Barang 2 >> ";
	cin >> barang[1];
	cout << "\nmasukkan Barang 3 >> ";
	cin >> barang[2];
	cout << "\nmasukkan Barang 4 >> ";
	cin >> barang[3];
	cout << "\nmasukkan Barang 5 >> ";
	cin >> barang[4];
	
	total = barang[0] + barang[1] + barang[2] + barang[3] + barang[4];
	cout << "\nTotal = " << total << "\n\nBayar >> ";
	cin >> uanguser;
	
	kembalian = uanguser - total;
	cout << "kembalian = " << kembalian << "\npecahan uang :\n";
	
	for (int i = 0; i <= 5; i++) {

		while (kembalian >= uang[i]) {
		
					pecahan[i]++;
					kembalian = kembalian - uang[i];
					
			}
 				cout << uang[i] << " = " << pecahan[i] << endl;
				
		}
	
	return 0;
}
