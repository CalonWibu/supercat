#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int a, b ,c;
	cout << "masukkan sisi A >> ";
	cin >> a;
	cout << "masukkan sisi B >> ";
	cin >> b;
	cout << "masukkan sisi C >> ";
	cin >> c;
	
	if (a + b > c && a + c > b && b + c > a) {
		cout << "angka a, b, dan c yang anda inputkan termasuk bentuk segitiga ";
		if ((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (b * b) + (c * c) == (a * a)) {
            cout << "siku-siku";
        } else if ((a * a) + (b * b) > (c * c) && (a * a) + (c * c) > (b * b) && (b * b) + (c * c) > (a * a)) {
            cout << "lancip";
        } else {
            cout << "tumpul";
        }
        
        
         if (a == b && b == c) {
	            cout << " dan sama sisi";
	        } else if (a == b || a == c || b == c) {
	            cout << " dan sama kaki";
	        } else {
	            cout << " dan sembarang";
	        }
	} else {
		cout << "tidak ini bukan segitiga";
	}
	
	
	return 0;
}
