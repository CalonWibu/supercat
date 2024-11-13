#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main() {
	char x;
	int y;
	
	cout << "apakah kamu laki - laki (Y/N)?? ";
	cin >> x;
	
	if (x == 'y' || x == 'Y') {
		cout  << "Berapakah umurmu? ";
		cin >> y;
		
		if (y <= 20) {
			cout << "Halo mas bro";
		} else {
			cout << "good morning sir";
		}
	} else if (x == 'n' || x == 'N') {
		cout  << "Berapakah umurmu? ";
		cin >> y;
		
		if (y <= 20) {
			cout << "Halo mbak bro";
		} else {
			cout << "good morning mam";
		}
	}
	getch();
}

// jadi saya mengubah pada kondisi di if yaitu (x == 'y' | 'Y') menjadi (x == 'y' || x == 'Y');

// program ini untuk mengetahui kata kata yang cocok sesuai umur dan juga kelamin
