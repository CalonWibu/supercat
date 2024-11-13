#include <iostream>
using namespace std;

int main() {
	int m, n;
	
	cout << "masukkan nilai m : ";
	cin >> m;
	cout << "\nmasukkan nilai n : ";
	cin >> n;
	cout << endl;
	
	if (m == n) {
		cout << m << " sama dengan " << n << endl;
	} else if (m != n) {
		cout << m << " tidak sama dengan " << n << "\n\n";
	}
	
	if (m > n) {
		cout << m << " lebih besar dari " << n << endl;
	} else if (m < n) {
		cout << m << " lebih kecil dari " << n << endl;
	}
}

// jadi yang salah itu pada cin n itu bukan cin tapi cout, jadi saya ganti cin.
// lalu pada if setelah kondisi itu saya beri kurung kurawal {}.
// dan ada sedikit perubahan kode yang saya lakukan misal mengganti \n dan endl
// pada void, saya juga memiliki alasan yang sama seperti latihan sebelumnya.
