#include <iostream>
using namespace std;

int main() {
	int inputuser,a,b,c,wadah;
	
	cout << "masukkan angka : ";
	cin >> inputuser;
	
	cout << "\tA\t\tB\t\tC\n---------------------------------------------------\n";
	for (int i = 0; i < inputuser; i++) {
		wadah = inputuser - i;
		a = inputuser - i;
		b = 0 + i;
		c = a + b;
	cout << "\t" << a << "\t\t" << b  << "\t\t" << c  << "\t\t\n";
	}
	cout << "---------------------------------------------------\n\a";
	
}
