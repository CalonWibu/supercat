#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

const double pi = 3.14;
double volume;

double volume_tabung(int r, int tinggi) {
	volume = pi*r*r*tinggi;
	return volume;
}

int main() {
	double t, r;
	cout << "menghitung volume tabung\nmasukkan jari jari tabung >> ";
	cin >> r;
	cout << "\nmasukkan tinggi tabung : ";
	cin >> t;
	cout << "\n\nvolume tabung = " << volume_tabung(r, t) << endl;
	return 0;
}
