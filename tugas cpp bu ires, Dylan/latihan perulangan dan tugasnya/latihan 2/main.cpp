#include <iostream>

using namespace std;

int main(){
	int awal; 
	int akhir; 
	cout<<"Program untuk menampilkan deret bilangan genap dengan awal dan akhir yang sudah ditetapkan bilangannya "<<endl;
	do {
		cout<<"Inputkan bilangan awal: ";
		cin>>awal;
		cout<<"Inputkan bilangan akhir: ";
		cin>>akhir;
		
	}
	while(awal <= 0 || akhir <= 0 || (akhir - awal) <= 0);
	 
	for(awal; awal <= akhir; awal++) {
		if(awal % 2 == 0) {
			cout<<awal<<endl;
		}
	}
	return 0;
}

