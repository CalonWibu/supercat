#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main() {
	int x, a, b, c, d, e, y;
	cout << "masukkan Nilai X = ";
	cin >> x;
	
	a = x;
	b = x;
	a = a << 1;
	cout << "\n hasil dari geser 1 bit ke kiri = " << a << endl;
	b = b >> 1;
	cout << "\n hasil dari geser 1 bit ke kanan = " << b << endl;
	cout << "masukkan nilai y = ";
	cin >> y;
	c = x & y;
	d = x | y;
	e = x ^ y;
	cout << "\nHasil dari x Bitwise And Y = " << c << endl; 
	cout << "\nHasil dari x Bitwise OR Y = " << d << endl;
	cout << "\nHasil dari x Bitwise XOR Y = " << e << endl;
	getch();

}

// jadi yang saya ubah adalah pada bagian iostream, .h nya saya hapus karena sudah di standarisasi. lalu pada bagian x di cout geser 1 bit ke kiri dan kekanan saya ubah menjadi yang kiri adalah a dan yang kanan adalah b
// program ini tetang cara menggunakan bitwise dan pergeseran bit pada cpp
// pada bit, jika di geser ke kanan itu membagi dan jika ke kiri itu mengkali
