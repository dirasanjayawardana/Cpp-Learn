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


void cekdata(fstream file){
	file.open("data.bin", ios::out | ios::in| ios::binary);
	if (file.is_open()){
		cout <<"data ditemukan "<<endl;
	}
	else{
		cout << "data tidak ditemukan, buat data baru"<<endl;
		file.close();
		file.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	}
}


void isidata(){
	fstream file;
	int nomor;
	int nilai;
	cout <<"masukkan nomor mahasiwa yang akan diisi = "; cin>>nomor;
	cout<<"masukkan nilai = "; cin>>nilai;
	file.open("data.bin", ios::out | ios::binary);
	file.seekp((nomor-1)*sizeof(int));
	file.write((char*)&nilai,sizeof(nilai));
}


void lihatnilai(int a){
	int output;
	fstream file;
	file.open("data.bin", ios::in | ios::binary);
	file.seekp((a-1)*sizeof(int));
	file.read((char*)&output,sizeof(output));
	cout << output <<endl;
}


void lihatdata(){
	cout << "no.\t"<<"nama\t\t\t"<<"nilai"<<endl;
	cout <<"______________________________________"<<endl;
	cout << "1.\t"<<"dira\t\t\t"; lihatnilai(1);
	cout << "2.\t"<<"udin\t\t\t"; lihatnilai(2);
	cout << "3.\t"<<"andi\t\t\t"; lihatnilai(3);
	cout << "4.\t"<<"doni\t\t\t"; lihatnilai(4);
}


int main(){
	int pilihan;
	char lanjutkan;
	pilihan = menu();
	
	while(pilihan != 3){
		switch (pilihan){
			case 1 :
				cout << "Isi nilai Mahasiswa"<<endl;;
				isidata();
				break;
			case 2 :
				cout << "Daftar Mahasiswa"<<endl;
				lihatdata();
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




/* void cekdata(fstream file){
	file.open("data.bin", ios::out | ios::in| ios::binary);
	if (file.is_open()){
		cout <<"data ditemukan "<<endl;
	}
	else{
		cout << "data tidak ditemukan, buat data baru"<<endl;
		file.close();
		file.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	}
}


int besardata(fstream file){
	int awal, akhir;
	file.seekg(0,ios::beg);
	awal = file.tellg();
	file.seekg(0,ios::end);
	akhir = file.tellg();
	return (awal-akhir)/sizeof(int);
}




void isidata(fstream file, int posisi, int nilai){
	file.seekp((posisi - 1)*sizeof(int), ios::beg);
	file.write((char*)&nilai,sizeof(nilai));
}

*/ 
