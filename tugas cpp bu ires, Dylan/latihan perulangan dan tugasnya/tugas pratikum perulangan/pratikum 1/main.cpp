#include <iostream>
#include <string>

using namespace std;

int main() {
    string kalimat;

    cout << "Masukkan kalimat: ";
    //getline itu buat baca semua yang di inputkan user misal sepasi
    getline(cin, kalimat);
	//size_t fungsinya di sini untuk melihat berapa banyak karakter dalam kalimat 
    for (size_t i = 0; i < kalimat.length(); i++) {
    	//substr itu buat munculin huruf yang di mulai dari mana misal budi dan substrnya itu 2 dia cuma munculin di
        cout << kalimat.substr(i) << endl;
    }

    return 0;
}

