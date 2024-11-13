#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main() {
	int x, y, a, z;
	cout << "masukkan nilai x = ";
	cin >> x;
	cout << "masukkan nilai y = ";
	cin >> y;
	cout << "operasi yang dapat di lakukan \n1. penjumlahan\n2. pembagian\n3. pengurangan\n4. perkalian\nmasukan pilihan operasi = ";
	cin >> a;
	
	switch (a) {
			case 1:
			z = x+y;
			cout << "nilai x + y  = " << z;
			break;
			
			case 2:
			z = x/y;
			cout << "nilai x / y  = " << z;
			break;
			
			case 3:
			z = x-y;
			cout << "nilai x - y  = " << z;
			break;
			
			case 4:
			z = x*y;
			cout << "nilai x * y  = " << z;
			break;
			
			default :
				cout << "pilihan tidak di ketahui";
			
	}
	getch();
}

// Ini adalah program kalkulator sederhana dengan 2 variable yang bisa memilih antara +, -, *, atau /
// mungkin kode yang saya buat akan sedikit berbeda
