#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


void bikinsegitiga(int tinggi) {
	for (int i = 0; i < tinggi; i++) {
		int h = 2*i+1;
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = h; j < tinggi*2; j++) {
			cout << "*";
		}
		
		cout << endl;
	}
}
int main() {
	int n = 3;
	
	cout << "membuat segitiga kebalik\nmasukkan tinggi segitiga >> ";
	cin >> n;
	cout << "\n\n";
	
	bikinsegitiga(n);
	return 0;
}
