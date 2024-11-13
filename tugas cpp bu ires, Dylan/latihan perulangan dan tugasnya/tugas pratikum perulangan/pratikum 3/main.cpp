#include <iostream>
using namespace std;

int main() {
	int tinggi;
	cout << "masukkan tinggi segitiga : ";
	cin >> tinggi;
	
	for (int i = 0; i < tinggi; i++) {
		
		int panjangspasi = tinggi - 1;
		for (int j = 0; j < panjangspasi; j++) {
			cout << " ";
		}
		for (int k = tinggi; k > i; k-=1) {
			cout << "*";	
		}
		cout << endl;
		
		
	}
	
	for (int i = 1; i <= tinggi; i++) {
        for (int j = 0; j < tinggi - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
