#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main () {
	int a, b, c;
	cout << "masukkan nilai a = ";
	cin >> a;
	
	b = (a+4 < 10);
	c = !(b);
	
	cout << "\nProgram Ekspresi NOT \n" 
	<< "Nilai a = " << a 
	<< "\nNilai b - (a + 4 < 10) = " << b
	<< "\nNilai c = !(b) = " << c;
	
	getch();
}

//saya mengubah beberapa bagian yaitu void saya ganti int, lalu iostream saya ilangin .h, lalu bagian cout Program ekspresi No saya sambung semua
// jadi program ini itu tentang ekspresi not. pada bagian nilai b itu mencari hasil dari a + 4 jika kurang dari 10 maka true dan jika sebaliknya maka false atau 0
// dan c itu membalik nilai b atau kondisi dari b

// saya mengubah void menjadi int karena alasan yang sama

// maaf jika tidak
