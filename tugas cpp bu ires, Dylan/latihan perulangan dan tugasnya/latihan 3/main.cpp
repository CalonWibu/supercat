#include <iostream>

using namespace std;

int main(){
	int tinggi; 

	cout<<"Program Untuk menampilkan segitiga Siku - siku"<<endl;
	do {
		cout<<"Inputkan Tinggi Segitiga: ";
		cin>>tinggi;
		
	}
	while(tinggi <= 0);
	 //berati dia  setiap baris menambahkan 1 karakter
	for(int i = 1; i <= tinggi; i++) {
		//bakal ngecek dan nampilin bintang sesuai jumlahnya i
		for (int j = 1; j <= i; j++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}

