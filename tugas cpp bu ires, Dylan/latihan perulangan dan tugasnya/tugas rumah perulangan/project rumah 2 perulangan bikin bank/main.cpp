#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, selesai = "t", inputhuruf;
    int inputangka, saldo = 100000;
    
    
    cout << "PERHATIAN !!! Jika anda pengguna linux atau mcos mohon maaf karena beberapa kode tidak akan berjalan dengan mulus\nGunakan Windows Untuk Pengalaman Lebih\n--------------------------------\n";
    cout << "Masukkan nama anda: ";
    getline(cin, nama);
    system("CLS");

    do {
        do {
            cout << "\tBANK SMEA\n--------------------------------\n";
            cout << "Halo " << nama << "\nSaldo anda adalah : Rp " << saldo << "\n";
            cout << "--------------------------------\nMenu:\n1. Setor uang\n2. Ambil uang\n3. Keluar\n\n>> ";
            cin >> inputangka;
            system("CLS");

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "MOHON MASUKKAN ANGKA SESUAI PILIHAN YANG ADA!\n--------------------------------\n";
                inputangka = 0;
            } else if (inputangka < 1 || inputangka > 3) {
                cout << "MOHON MASUKKAN ANGKA SESUAI PILIHAN YANG ADA!\n--------------------------------\n";
                inputangka = 0;
            }
        } while (inputangka < 1 || inputangka > 3);

        switch (inputangka) {
            case 1:
                do {
                    cout << "\n--------------------------------\nAnda ingin setor berapa?\n\n>> Rp ";
                    cin >> inputangka;
                    system("CLS");

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "MOHON MASUKKAN ANGKA YANG BENAR!\n--------------------------------\n";
                        inputangka = 0;
                    } else if (inputangka <= 0) {
                    	cout << "MOHON MASUKKAN ANGKA YANG BENAR dan lebih dari 0!\n--------------------------------\n";
					}
                } while (inputangka <= 0);

                do {
                    cout << "Apa kamu yakin ? y/t\n\n>> ";
                    cin >> inputhuruf;
                    system("CLS");

                    if (cin.fail() || (inputhuruf != "y" && inputhuruf != "Y" && inputhuruf != "t" && inputhuruf != "T")) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "MOHON INPUTKAN y/t!\n--------------------------------\n";
                    }
                } while (inputhuruf != "y" && inputhuruf != "Y" && inputhuruf != "t" && inputhuruf != "T");

                if (inputhuruf == "y" || inputhuruf == "Y") {
                saldo += inputangka;
                cout << "\n--------------------------------\nSaldo anda berhasil ditambahkan\n\nSebanyak = Rp " << inputangka << "\nSaldo akhir = Rp " << saldo << "\n--------------------------------\n";
                system("pause");
                system("CLS");
                }
                break;

            case 2:
            if (saldo > 50000) {
        do {
            cout << "\n--------------------------------\nAnda ingin mengambil berapa?\nMasukkan angka\n\n>> Rp ";
            cin >> inputangka;
            system("CLS");

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "MOHON MASUKKAN ANGKA YANG VALID!\n--------------------------------\n";
                inputangka = 0;
            } else if (inputangka > saldo) {
                cout << "Saldo tidak mencukupi! Saldo anda saat ini: Rp " << saldo << "\n--------------------------------\n";
                inputangka = 0;
            } else if (saldo - inputangka < 50000) {
                cout << "Minimal saldo yang harus tersisi adalah Rp 50.000. Maaf, tidak bisa mengambil uang sebanyak itu.\n";
                inputangka = 0;
            }
        } while (inputangka <= 0 || inputangka > saldo);

        if (inputangka > 0) {
            do {
                cout << "Apa kamu yakin ? y/t\n\n>> ";
                cin >> inputhuruf;
                system("CLS");

                if (cin.fail() || (inputhuruf != "y" && inputhuruf != "Y" && inputhuruf != "t" && inputhuruf != "T")) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "MOHON INPUTKAN Y/T!\n--------------------------------\n";
                }
            } while (inputhuruf != "y" && inputhuruf != "Y" && inputhuruf != "t" && inputhuruf != "T");

            if (inputhuruf == "y" || inputhuruf == "Y") {
                saldo -= inputangka;
                cout << "\n--------------------------------\nSaldo anda berhasil diambil\nSebanyak = " << inputangka
                     << "\nSaldo akhir = " << saldo << "\n--------------------------------\n";
                system("pause");
                system("CLS");
            }
        }

    } else {
        cout << "Minimal saldo yang anda miliki adalah 50k, maaf tidak bisa mengambil uang.\n";
        system("pause");
        system("CLS");
    }
                
                break;

            case 3:
                selesai = "y";
                cout << "\nselamat datang kembali " << nama << ":)";
                break;
        }

    } while (selesai == "t");
    
    return 0;
}

