#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int a = 82, b = 26, c = 10;
	
	cout << "-a = " << -a << endl;
	cout << a << " + " << b << " = " << a+b << endl;
	cout << a << " - " << b << " = " << a-b << endl;
	cout << a << " * " << b << " = " << a*b << endl;
	cout << a << " / " << b << " = " << a/b << endl;
	cout << a << " % " << b << " = " << a%b << endl;
	cout << "(" << a << " - " << b << ")" << " / " << c << " = " << (a-b)/c << endl;
	
	getch();
}

// jadi kesimpulan saya adalah void itu untuk fungsi yang tidak ada nilai yang di kembalikan, dan saat saya menggunakan void, itu hasilnya eror, saya juga baru belajar
// dan sedang mencari dan memperdalam dengan sistem void dan int. saya harap bu ires memperjelas apa perbedaan dan fungsi pada void, dan int.
// lalu pada cout bagian terakhir yaitu
// cout << "(" << a << " - " << b << ")" << " / " << c << " = " << (a-b)/c << endl;
// saya mencari di internet bagaimana cara agar bisa menghasilkan angka real, dan katanya menggunakan float. tapi pas saya coba menggunakan float hasilnya tetap bilangan bulat.
// lalu fungsi getch itu input tapi engga keliatan, awalnya saya berfikir ini seperti fitur di linux yang ketika memasukkan passwd tidak keliatan tapi ada inputnya tapi setelah saya cari di internet ternyata getch ini biasanya ini di pakai buat mengambil 1 karakter dari user dan tidakperlu di tampilkan
// oh ya pada include iostream itu tidak perlu .h karena pada saat ini iostream sudah menjadi library standar yang di gunakan pada cpp. 
// mohonmaaf jika salah kata, karena saya juga baru belajar.
// :)
