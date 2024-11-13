#include <iostream>

using namespace std;

int main(){
	int angka; 
	cout<<"Program untuk menampilkan bilangan bulat dimulai dari 1 sampai angka yang di inputkan\n";
	do {
		cout<<"Inputkan Angka antara 1 - 100 : ";
		cin>>angka;
	}
	while(angka <= 0 || angka > 100);
	for(int i = 1; i <= angka; i++) {
		cout<<"angka "<<i<<endl;
	}
	return 0;
}

