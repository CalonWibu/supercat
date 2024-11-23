#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long fibo(long angka) {
	if (angka == 1 || angka == 2) {
		return 1;
	}
	
	return fibo(angka-1) + fibo(angka-2);
}

int main() {
	long a;
	
	cout << "menghitung bilangan fibonanci\nmasukkan angka >> ";
	cin >> a;
	cout << "\nfibo " << a << " = " << fibo(a);
	return 0;
}
