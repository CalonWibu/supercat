#include <iostream>

using namespace std;

int main(){
	int pilih; 

	cout<<"Program Untuk Memilih Menu Perhitungan Luas Bangun"<<endl;
	do 
	{
		cout<<"Pilih Luas Bangun yang akan dicari: "<<endl;
		cout<<"1. Luas Lingkaran"<<endl;
		cout<<"2. Luas Segitiga"<<endl;
		cout<<"3. Luas Persegi"<<endl;
		cout<<"4. Luas Persegi Panjang"<<endl;
		cout<<"Silahkan masukkan pilihanmu :";
		cin>>pilih;
		
	} while(pilih < 1 || pilih > 4);
	
	if(pilih == 1)
	{
		int jari;
		float Llingkaran;  
		cout<<"Inputkan jari - jari :";
		cin>>jari;
		Llingkaran = 3.14 * (jari*jari);
		cout<<"Luas lingkaran dengan jari - jari = "<<jari<<" adalah "<< Llingkaran;
	}
	else if(pilih == 2)
	{
		int alas, tinggi;
		float Lsegitiga;
		cout << "masukkan alas :";
		cin >> alas;
		cout << "\nmasukkan tinggi :";
		cin >> tinggi;
		Lsegitiga = (alas* tinggi) / 2;
		cout << "\nLuas segitiga dengan tinggi dan alas di atas adalah = " << Lsegitiga;
	} else if (pilih == 3) {
		int s;
		float Lpersegi;
		cout << "masukkan sisi persegi :";
		cin >> s;
		Lpersegi = s*s;
		cout << "\nLuas persegi dengan sisi di atas adalah  = " << Lpersegi; 
	} else if (pilih == 4) {
		int p, l;
		float LpersegiP;
		cout << "masukkan lebar persegi panjang : ";
		cin >> l;
		cout << "\nmasukkan panjang persegi panjang : ";
		cin >> p;
		LpersegiP = p*l;
		cout << "\nLuas persegi panjang dengan panjang dan lebar di atas adalah = " << LpersegiP;
	} else {
		cout << "erorr ngab";
	}
}
		

