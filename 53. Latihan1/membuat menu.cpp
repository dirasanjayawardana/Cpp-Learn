#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int menu(){
	int nomor;
	system("cls");
	cout << "DATA MAHASISWA" <<endl;
	cout << "=========================" <<endl;
	cout << "MENU" <<endl;
	cout << "=========================" <<endl;
	cout << "1. Isi nilai Mahasiswa" <<endl;
	cout << "2. Lihat Data Mahasiswa" <<endl;
	cout << "3. Tutup Program" <<endl;
	cout << "=========================" <<endl;
	cout << "Pilih Menu (1-3) : ";
	cin >> nomor;
	return nomor;
}



int main(){
	int pilihan;
	char lanjutkan;
	pilihan = menu();
	
	while(pilihan != 3){
		switch (pilihan){
			case 1 :
				cout << "Isi nilai Mahasiswa"<<endl;;
				break;
			case 2 :
				cout << "Daftar Mahasiswa"<<endl;
				break;
			default :
				cout << "Pilihan Tidak Ditemukan"<<endl;
				break;
		}
		ulangi_disini:

		cout << "Lanjutkan?(y/n) : ";
		cin >> lanjutkan;
		if ( (lanjutkan == 'y') | (lanjutkan == 'Y')){
			pilihan = menu();
		} else if ((lanjutkan == 'n') | (lanjutkan == 'N')){
			break;
		} else {
			goto ulangi_disini;
		}
			
	}
	
	cout << "program telah berakhir"<<endl;
	
	return 0;
}
