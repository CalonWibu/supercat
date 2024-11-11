#include <iostream>
#include <string>

using namespace std;

int main() {
	string mamdisplay[5] ={"seblak impor pontianak", "Mie ayam mommy ires", "geprek juna", "mie nyemek ngawi", "ikan bakar belimbingsari"}; 
    string mam[5] =
	{"seblak impor pontianak  ",
	"Mie ayam mommy ires     ",
	"geprek Juna             ",
	"mie nyemek ngawi        ",
	"ikan bakar belimbingsari"};
    int harga[5] = {34000, 21000, 14000, 99000, 210000};
    
    //penyimpanan data
	int pesanan[5] = {0, 0, 0, 0, 0};

    //aksi dari user
    string pilihanhuruf, sudah, lewati, menu, status, keluar;
    int pilihanangka, pilihantetap, pilihan, hargatotal, uanguser;
    status = "t";
    menu = "y";
    sudah = "t";
    keluar = "t";
    hargatotal = 0;

    while (sudah == "t") {
        if (menu == "y") {
            //menu
            system("CLS");
            cout << "--------------------------------------------" << endl;
            cout << "Menu: " << endl;
            cout << "" << endl;
            cout << "1. Tampilkan Menu Makanan" << endl;
            if (status == "y") {
                cout << "2. Tampilkan pesanan Saya" << endl;
                cout << "3. Bayar" << endl;
                cout << "4. Keluar" << endl;
            } else if (status == "t") {
                cout << "2. Keluar" << endl;
            }
            cout << "--------------------------------------------" << endl;
            
            

            //cek input user 
            lewati = "t";
            while (lewati == "t") {
                cout << "Silahkan pilih dengan mengetik angkanya? \n\n>> ";
                cin >> pilihanangka;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan di atas." << endl;
                } else if (status == "t") {
                	
                	
                    if (pilihanangka == 1) {
                        menu = "t";
                        lewati = "y";
                        system("CLS");
                    } else if (pilihanangka == 2) {
                    	
                        pilihanangka = 4;
                        menu = "t";
                        lewati = "y";
                     	keluar = "y";
                     	system("CLS");
                    } else {
                        cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan di atas." << endl;
                    }
                    
                    
                    
                } else if (status == "y") {
                	
                	
                    if (pilihanangka > 0 && pilihanangka < 5) {
                        menu = "t";
                        lewati = "y";
                        system("CLS");
                        
                    } else {
                        cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan di atas." << endl;
                    }
                    
                    
                } else {
                    cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan di atas." << endl;
                }
            }
            system("CLS");
        }

        

        //cek ngarahnya ke mana dari menu yang di pilih
        switch (pilihanangka) {
            case 1:
            	//tampilin menu makanan
            	cout << "--------------------------------------------" << endl;
            	cout << "|          Makanan          |     Harga    |\n"; 
            	cout << "--------------------------------------------" << endl;
            	 
            	 for (int i = 0; i < 5; i++) {
            	 	cout << i+1 << ". " << mam[i] << " = Rp " << harga[i] << endl;
				 }
				 
				 cout << "0. menu" << endl;
				 cout << "--------------------------------------------" << endl;
				 
				 
				 //input user + validasi
				 lewati = "t";
				 while (lewati == "t") {
				 	cout << "Pilih Dengan Mengetikkan nomor angkanya! \n\n>> ";
				 	cin >> pilihanangka;
				 	if (cin.fail()) {
				 		cin.clear();
				 		cin.ignore(1000, '\n');
                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan di atas." << endl;
					 } else if (pilihanangka > -1 && pilihanangka < 6) {
					 	lewati = "y";
					 	pilihan = pilihanangka;
					 	pilihantetap = pilihanangka - 1;
					 } else {
					 	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan di atas." << endl;
					 }
				 }
				 
				 //yakin atau engga jadi sama pesanan
				 system("CLS");
				 
						 	cout << "--------------------------------------------" << endl;
				 		pilihanhuruf = "reset";
				 		lewati = "t";
				 		
				 		
				 		// jika plih 0 atau menu
				 		
				 		if (pilihanangka == 0) {
				 			lewati = "y";
				 			sudah = "t";
				 			menu = "y";
//				 			cout << "dia pilih 0" << endl;
						 }
//						 cout << pilihanangka << endl;
//						 cout << lewati << endl;
//						 
						 while (lewati == "t") {
				 			cout << "apakah anda yakin? ketik y jika ya dan t jika engga jadi! \n\n>> ";
					 	cin >> pilihanhuruf;
					 	if (cin.fail()) {
					 		cin.clear();
					 		cin.ignore(1000, '\n');
	                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
						 } else if (pilihanhuruf == "y" || pilihanhuruf == "t" || pilihanhuruf == "Y" || pilihanhuruf == "t") {
						 	lewati = "y";
						 	
						 } else {
						 	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
						 }
					 }
					 
					 
					
				 
				 
				 
				 
				 //kemana arah pilihannya
				if (pilihanhuruf == "y" || pilihanhuruf == "Y") {
					
					//beli berapa
					 pilihanhuruf = "reset";
				 		lewati = "t";
				 		
				 		pilihanangka = 0;
						 system("CLS");
						 	cout << "--------------------------------------------" << endl;
						 while (lewati == "t") {
						 	
				 			cout << "anda mau Beli berapa? \n\n>> ";
					 	cin >> pilihanangka;
					 	if (cin.fail()) {
					 		cin.clear();
					 		cin.ignore(1000, '\n');
	                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik angka di atas 0" << endl;
						 } else if (pilihanangka > 0) {
						 	lewati = "y";
						 } else {
						 	cout << "HEI! Pilihanmu tidak valid, mohon ketik angka di atas 0" << endl;
						 }
					 }
					 system("CLS");
					 
					 
					 
					 		pilihan = 0;
//							cout << pilihan << " ini pilihan\n";
//							cout << pesanan[pilihantetap] << " ini pesanan\n";
							if (status == "y") {
								pilihan = pesanan[pilihantetap];
								pesanan[pilihantetap] = pesanan[pilihantetap] + pilihanangka;
							} else {
								pilihan = pesanan[pilihantetap];
								pesanan[pilihantetap] = pilihanangka;
							}
							
							
//							cout << pesanan[pilihan] << " << ini pesanan pilihan" << endl;
				 			cout << "--------------------------------------------" << endl;
				 			if (pilihan > 0) {
				 				cout << "Baiklah pesananmu yaitu " << mamdisplay[pilihantetap] << " dengan jumlah " << pilihanangka << " telah di tambahkan\nSekarang total jumlah pesananmu untuk " << mamdisplay[pilihantetap] << " adalah " << pesanan[pilihantetap] << endl;
							 } else {
							 	cout << "Baiklah pesananmu yaitu " << mamdisplay[pilihantetap] << " dengan jumlah " << pilihanangka << " telah di tambahkan" << endl;
							 }
				 			
				 			cout << "--------------------------------------------" << endl;
				 			status = "y";
				 			pilihan = 0;
				 			//lanjutkan mesan atau engga
				 			
				 			pilihanhuruf = "reset";
				 		lewati = "t";
						 
						 while (lewati == "t") {
		 					cout << "apakah ada barang lain? y/t \n \n" << "Hint: \n - jika y akan ke menu makanan \n - jika t akan ke menu \n\n>> ";  
					 	cin >> pilihanhuruf;
					 	if (cin.fail()) {
					 		cin.clear();
					 		cin.ignore(1000, '\n');
	                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
						 } else if (pilihanhuruf == "y" || pilihanhuruf == "t" || pilihanhuruf == "Y" || pilihanhuruf == "t") {
						 	lewati = "y";
						 	system("CLS");
						 } else {
						 	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
						 }
					 }
					 
					 if (pilihanhuruf == "y") {
					 	sudah = "t";
					 	menu = "t";
					 	pilihanangka= 1;
					 } else {
					 	sudah = "t";
					 	menu = "y";
					 }
			
				 	
			} else if (pilihanhuruf == "t" || pilihanhuruf == "T") {
				sudah = "t";
				menu = "t";
				system("CLS");
				pilihantetap = 0;
				pilihanangka = 1;
			}
//				 arah pilihan selesai
				 
				 
                
                break;
            case 2:
//                
//                //tampilkan semua menu yang sudah di tambahkan
                cout << "---------------------------------------------" << endl;
            	cout << "|          Makanan          |     Jumlah    |\n"; 
            	cout << "---------------------------------------------" << endl;
                if (pesanan[0] > 0) {
                	cout << "> " << mam[0] << "  = " << pesanan[0] << endl;
				} if (pesanan[1] > 0) {
                	cout << "> " << mam[1] << "  = " << pesanan[1] << endl;
				} if (pesanan[2] > 0) {
                	cout << "> " << mam[2] << "  = " << pesanan[2] << endl;
				} if (pesanan[3] > 0) {
                	cout << "> " << mam[3] << "  = " << pesanan[3] << endl;
				} if (pesanan[4] > 0) {
                	cout << "> " << mam[4] << "  = " << pesanan[4] << endl;
				}
                cout << "\n---------------------------------------------" << endl;
                
                lewati = "t";
                while (lewati == "t") {
						 	
				 			cout << "\nMenu:\n9. Hapus\n0. Kembali Ke Menu\n\n>> ";
					 	cin >> pilihanangka;
					 	if (cin.fail()) {
					 		cin.clear();
					 		cin.ignore(1000, '\n');
	                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik angka sesuai pilihan di atas" << endl;
						 } else if (pilihanangka < 1 && pilihanangka > -1) {
						
						 	lewati = "y";
						 	sudah = "t";
					 		menu = "y";
					 		
						 } else {
						 	if (pilihanangka = 9) {
						 		system("CLS");
						 		cout << "----------------------------------------------" << endl;
			            		cout << "|id|        Makanan            |    Jumlah   |\n"; 
			            		cout << "----------------------------------------------" << endl;
			                	for (int i = 0; i < 5; i++) {
								    cout << "|" << i + 1 << "|  " << mam[i] << "  = " << pesanan[i] << endl;
								}
								cout << "|0|  " << "kembali\n";
			                cout << "\n---------------------------------------------" << endl;
			                lewati = "t";
			                while (lewati == "t") {
		 					cout << "ketik id untuk pilih pesanan mana yang ingin di hapus\n\n>> ";  
							 	cin >> pilihanangka;
							 	if (cin.fail()) {
							 		cin.clear();
							 		cin.ignore(1000, '\n');
			                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan angka di atas\n" << endl;
								 } else if (pilihanangka == 0) {
								 	lewati = "y";
								 	system("CLS");
								 } else if (pilihanangka > 0 && pilihanangka < 6) {
								 	lewati = "y";
								 	system("CLS");
								 }
							 }
						}
//							 
							 switch (pilihanangka) {
							 	case 0:
							 		sudah = "t";
							 		menu = "t";
							 		pilihanangka = 2;
							 		break;
							 	case 1:
							    
							 		if (pesanan[0] > 0) {
							 			pilihan = pilihanangka - 1;
							 			pilihantetap = pilihanangka;
							 			cout << "---------------------------------------------\n> id yang kamu pilih adalah " << mamdisplay[0] << "\n  yang sekarang jumlah di pesananmu adalah " << pesanan[0] << "\n---------------------------------------------\n";
							 			
							 			lewati = "t";
										 while (lewati == "t") {
							 				cout << "apakah kamu yakin untuk menghapus semua? y/t \n\n>> ";  
										 	cin >> pilihanhuruf;
										 	if (cin.fail()) {
										 		cin.clear();
										 		cin.ignore(1000, '\n');
						                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
											 } else if (pilihanhuruf == "y" || pilihanhuruf == "t" || pilihanhuruf == "Y" || pilihanhuruf == "t") {
											 	lewati = "y";
											 	system("CLS");
											 } else {
											 	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
											 }
										 }
										 
										 if (pilihanhuruf == "y" || pilihanhuruf == "Y") {
										 	pesanan[0] = 0;
										 	system("CLS");
										 	cout << "---------------------------------------------\nPesananmu yaitu " << mamdisplay[0] << " berhasil di hapus\n";
										 	sudah = "t";
									 		menu = "t";
									 		pilihanangka = 2;
										 }
									 } else {
									 	system("CLS");
									 	cout << "---------------------------------------------\n> id yang kamu pilih adalah " << mamdisplay[0] << " tidak memenuhi syarat penghapusan \n";
									 	sudah = "t";
									 	menu = "t";
									 	pilihanangka = 2;
									 
									 }
									break;
									
									case 2:
							    
							 		if (pesanan[1] > 0) {
							 			pilihan = pilihanangka - 1;
							 			pilihantetap = pilihanangka;
							 			cout << "---------------------------------------------\n> id yang kamu pilih adalah " << mamdisplay[1] << "\n  yang sekarang jumlah di pesananmu adalah" << pesanan[1] << "\n---------------------------------------------\n";
							 			
							 			lewati = "t";
										 while (lewati == "t") {
							 				cout << "apakah kamu yakin untuk menghapus semua? y/t \n\n>> ";  
										 	cin >> pilihanhuruf;
										 	if (cin.fail()) {
										 		cin.clear();
										 		cin.ignore(1000, '\n');
						                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
											 } else if (pilihanhuruf == "y" || pilihanhuruf == "t" || pilihanhuruf == "Y" || pilihanhuruf == "t") {
											 	lewati = "y";
											 	system("CLS");
											 } else {
											 	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
											 }
										 }
										 
										 if (pilihanhuruf == "y" || pilihanhuruf == "Y") {
										 	pesanan[1] = 0;
										 	system("CLS");
										 	cout << "---------------------------------------------\nPesananmu yaitu " << mamdisplay[1] << " berhasil di hapus\n";
										 	sudah = "t";
									 		menu = "t";
									 		pilihanangka = 2;
										 }
									 } else {
									 	system("CLS");
									 	cout << "---------------------------------------------\n> id yang kamu pilih adalah " << mamdisplay[1] << " tidak memenuhi syarat penghapusan \n";
									 	sudah = "t";
									 	menu = "t";
									 	pilihanangka = 2;
									 
									 }
									break;
									
									case 3:
							    
							 		if (pesanan[2] > 0) {
							 			pilihan = pilihanangka - 1;
							 			pilihantetap = pilihanangka;
							 			cout << "---------------------------------------------\n> id yang kamu pilih adalah " << mamdisplay[2] << "\n  yang sekarang jumlah di pesananmu adalah " << pesanan[2] << "\n---------------------------------------------\n";
							 			
							 			lewati = "t";
										 while (lewati == "t") {
							 				cout << "apakah kamu yakin untuk menghapus semua? y/t \n\n>> ";  
										 	cin >> pilihanhuruf;
										 	if (cin.fail()) {
										 		cin.clear();
										 		cin.ignore(1000, '\n');
						                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
											 } else if (pilihanhuruf == "y" || pilihanhuruf == "t" || pilihanhuruf == "Y" || pilihanhuruf == "t") {
											 	lewati = "y";
											 	system("CLS");
											 } else {
											 	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
											 }
										 }
										 
										 if (pilihanhuruf == "y" || pilihanhuruf == "Y") {
										 	pesanan[2] = 0;
										 	system("CLS");
										 	cout << "---------------------------------------------\nPesananmu yaitu " << mamdisplay[2] << " berhasil di hapus\n";
										 	sudah = "t";
									 		menu = "t";
									 		pilihanangka = 2;
										 }
									 } else {
									 	system("CLS");
									 	cout << "---------------------------------------------\n> id yang kamu pilih adalah " << mamdisplay[2] << " tidak memenuhi syarat penghapusan \n";
									 	sudah = "t";
									 	menu = "t";
									 	pilihanangka = 2;
									 
									 }
									break;
									
									case 4:
							    
							 		if (pesanan[3] > 0) {
							 			pilihan = pilihanangka - 1;
							 			pilihantetap = pilihanangka;
							 			cout << "---------------------------------------------\n> id yang kamu pilih adalah " << mamdisplay[3] << "\n  yang sekarang jumlah di pesananmu adalah" << pesanan[3] << "\n---------------------------------------------\n";
							 			
							 			lewati = "t";
										 while (lewati == "t") {
							 				cout << "apakah kamu yakin untuk menghapus semua? y/t \n\n>> ";  
										 	cin >> pilihanhuruf;
										 	if (cin.fail()) {
										 		cin.clear();
										 		cin.ignore(1000, '\n');
						                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
											 } else if (pilihanhuruf == "y" || pilihanhuruf == "t" || pilihanhuruf == "Y" || pilihanhuruf == "t") {
											 	lewati = "y";
											 	system("CLS");
											 } else {
											 	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
											 }
										 }
										 
										 if (pilihanhuruf == "y" || pilihanhuruf == "Y") {
										 	pesanan[3] = 0;
										 	system("CLS");
										 	cout << "---------------------------------------------\nPesananmu yaitu " << mamdisplay[3] << " berhasil di hapus\n";
										 	sudah = "t";
									 		menu = "t";
									 		pilihanangka = 2;
										 }
									 } else {
									 	system("CLS");
									 	cout << "---------------------------------------------\n> id yang kamu pilih adalah " << mamdisplay[3] << " tidak memenuhi syarat penghapusan \n";
									 	sudah = "t";
									 	menu = "t";
									 	pilihanangka = 2;
									 
									 }
									break;
									
									case 5:
							    
							 		if (pesanan[4] > 0) {
							 			pilihan = pilihanangka - 1;
							 			pilihantetap = pilihanangka;
							 			cout << "---------------------------------------------\n> id yang kamu pilih adalah " << mamdisplay[4] << "\n  yang sekarang jumlah di pesananmu adalah" << pesanan[4] << "\n---------------------------------------------\n";
							 			
							 			lewati = "t";
										 while (lewati == "t") {
							 				cout << "\napakah kamu yakin untuk menghapus semua? y/t \n\n>> ";  
										 	cin >> pilihanhuruf;
										 	if (cin.fail()) {
										 		cin.clear();
										 		cin.ignore(1000, '\n');
						                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
											 } else if (pilihanhuruf == "y" || pilihanhuruf == "t" || pilihanhuruf == "Y" || pilihanhuruf == "t") {
											 	lewati = "y";
											 	system("CLS");
											 } else {
											 	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai pilihan y/t" << endl;
											 }
										 }
										 
										 if (pilihanhuruf == "y" || pilihanhuruf == "Y") {
										 	pesanan[4] = 0;
										 	system("CLS");
										 	cout << "---------------------------------------------\nPesananmu yaitu " << mamdisplay[4] << " berhasil di hapus\n";
										 	sudah = "t";
									 		menu = "t";
									 		pilihanangka = 2;
										 }
									 } else {
									 	system("CLS");
									 	cout << "---------------------------------------------\n> id yang kamu pilih adalah " << mamdisplay[2] << " tidak memenuhi syarat penghapusan \n";
									 	sudah = "t";
									 	menu = "t";
									 	pilihanangka = 2;
									 
									 }
									break;							

					 //selesai yang pilihan 2 di menu utama
            }
                
                
                break;
            case 3:
                cout << "---------------------------------------------" << endl;
            	cout << "|          Makanan          |     Jumlah    |\n"; 
            	cout << "---------------------------------------------" << endl;
                if (pesanan[0] > 0) {
                	cout << "> " << mam[0] << "  = " << pesanan[0] << endl;
				} if (pesanan[1] > 0) {
                	cout << "> " << mam[1] << "  = " << pesanan[1] << endl;
				} if (pesanan[2] > 0) {
                	cout << "> " << mam[2] << "  = " << pesanan[2] << endl;
				} if (pesanan[3] > 0) {
                	cout << "> " << mam[3] << "  = " << pesanan[3] << endl;
				} if (pesanan[4] > 0) {
                	cout << "> " << mam[4] << "  = " << pesanan[4] << endl;
				}
                cout << "\n---------------------------------------------" << endl;
                if (pesanan[0] > 0) {
                	pilihan = pesanan[0] * harga[0];
                	hargatotal = hargatotal + pilihan;
				} if (pesanan[1] > 0) {
                	pilihan = pesanan[1] * harga[1];
                	hargatotal = hargatotal + pilihan;
				} if (pesanan[2] > 0) {
                	pilihan = pesanan[2] * harga[2];
                	hargatotal = hargatotal + pilihan;
				} if (pesanan[3] > 0) {
                	pilihan = pesanan[3] * harga[3];
                	hargatotal = hargatotal + pilihan;
				} if (pesanan[4] > 0) {
                	pilihan = pesanan[4] * harga[4];
                	hargatotal = hargatotal + pilihan;
				}
                cout << "Di atas ini adalah semua pesananmu yang telah kamu pesan\n\nTotal:\nHarga > Rp " << hargatotal << "\n\nuang pembeli >> ";
                lewati = "t";
				 while (lewati == "t") {
				 	cin >> pilihanangka;
				 	if (cin.fail()) {
				 		cin.clear();
				 		cin.ignore(1000, '\n');
                    	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai harga atau lebih" << endl;
					 } else if (pilihanangka >= hargatotal) {
					 	lewati = "y";
					 	
					 	system("CLS");
					 		uanguser = pilihanangka;
					 		
					 		cout << "---------------------------------------------" << endl;
			            	cout << "|          Makanan          |     Jumlah    |\n"; 
			            	cout << "---------------------------------------------" << endl;
			                if (pesanan[0] > 0) {
			                	cout << "> " << mam[0] << "  = " << pesanan[0] << endl;
							} if (pesanan[1] > 0) {
			                	cout << "> " << mam[1] << "  = " << pesanan[1] << endl;
							} if (pesanan[2] > 0) {
			                	cout << "> " << mam[2] << "  = " << pesanan[2] << endl;
							} if (pesanan[3] > 0) {
			                	cout << "> " << mam[3] << "  = " << pesanan[3] << endl;
							} if (pesanan[4] > 0) {
			                	cout << "> " << mam[4] << "  = " << pesanan[4] << endl;
							}
			                cout << "\n---------------------------------------------" << endl;
					 		cout << "\n\nTotal:\n Harga Total >> Rp " << hargatotal << "\n uang pembeli >> Rp " << uanguser <<endl;
					 		uanguser = uanguser - hargatotal;
					 	if (pilihanangka > hargatotal) {
					 		cout << " kembalian >> Rp " << uanguser;
						 }
						 cout << "\n\nterimakasih\n\n\n\n\n";
						 sudah = "y";
					 } else {
					 	cout << "HEI! Pilihanmu tidak valid, mohon ketik sesuai harga atau lebih" << endl;
					 }
				 }
                
                break;
            case 4:
                cout << "keluar\n\n\n";
                sudah = "y";
                break;
        }
    }

        
    }

    
}
cout << "Sistem selesai";
}

