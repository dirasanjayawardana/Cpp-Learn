#include <iostream>
#include <conio.h>

using namespace std;

int menu();
float tambah(float nilai1, float nilai2);
float kurang(float nilai1, float nilai2);
float kali(float nilai1, float nilai2);
float bagi(float nilai1, float nilai2);
float kuadrat(float nilai);

int main()
{
	int input;
	float hasiltambah, hasilkurang, hasilkali, hasilbagi, hasilkuadrat, angka1, angka2;
	char lanjut;
	input = menu();
	while (input != 6){
		switch (input){
			// pilihan pertama
			case 1:
			cout <<"=============================="<<endl;
			cout << "         Penjumlahan" << endl;
			cout <<"=============================="<<endl;
			cout << "Masukkan Angka Pertama  = ";
			cin >> angka1;
			cout << "Masukkan Angka Kedua    = ";
			cin >> angka2;
			hasiltambah = tambah(angka1, angka2);
			cout << "Hasil Dari "<< angka1 <<" + "<<angka2;
			cout << " adalah = "<<hasiltambah<<endl;
			cout <<"=============================="<<endl;
			break;
			
			//pilihan kedua
			case 2:
			cout <<"=============================="<<endl;
			cout << "         Pengurangan" << endl;
			cout <<"=============================="<<endl;
			cout << "Masukkan Angka Pertama  = ";
			cin >> angka1;
			cout << "Masukkan Angka Kedua    = ";
			cin >> angka2;
			hasilkurang = kurang(angka1, angka2);
			cout << "Hasil Dari "<< angka1 <<" - "<<angka2;
			cout << " adalah = "<<hasilkurang<<endl;
			cout <<"=============================="<<endl;
			break;
			
			//pilihan ketiga
			case 3:
			cout <<"=============================="<<endl;
			cout << "          Perkalian" << endl;
			cout <<"=============================="<<endl;
			cout << "Masukkan Angka Pertama  = ";
			cin >> angka1;
			cout << "Masukkan Angka Kedua    = ";
			cin >> angka2;
			hasilkali = kali(angka1, angka2);
			cout << "Hasil Dari "<< angka1 <<" x "<<angka2;
			cout << " adalah = "<<hasilkali<<endl;
			cout <<"=============================="<<endl;
			break;
			
			//pilihan keempat
			case 4:
			cout <<"=============================="<<endl;
			cout << "          Pembagian" << endl;
			cout <<"=============================="<<endl;
			cout << "Masukkan Angka Pertama  = ";
			cin >> angka1;
			cout << "Masukkan Angka Kedua    = ";
			cin >> angka2;
			hasilbagi = bagi(angka1, angka2);
			cout << "Hasil Dari "<< angka1 <<" : "<<angka2;
			cout << " adalah = "<<hasilbagi<<endl;
			cout <<"=============================="<<endl;
			break;
			
			//pilihan kelima
			case 5:
			cout <<"=============================="<<endl;
			cout << "           Kuadrat" << endl;
			cout <<"=============================="<<endl;
			cout << "Masukkan Kuadrat Dari  = ";
			cin >> angka1;
			hasilkuadrat = kuadrat(angka1);
			cout << "Kuadrat Dari = " << angka1;
			cout << " adalah ="<< hasilkuadrat<<endl; cout<<"=============================="<<endl;
			break;
		}
		
		lanjut_disini:
		cout << "Lanjutkan ? (y/n) = ";
		cin >> lanjut;
		if ((lanjut == 'y') | (lanjut =='Y')){
			input = menu();
		}
		else if ((lanjut == 'n') | (lanjut == 'N') ){
			break;
		}
		else{
			goto lanjut_disini;
		}
	}
	
	cout<<"=============================="<<endl;
	cout << "Program Berakhir"<<endl;
	cout<<"=============================="<<endl;
	return 0;
	
		
}

int menu (){
	int pilihan;
	system ("cls");
	cout << "=============================="<<endl;
	cout << "     KALKULATOR DENGAN C++"<<endl;
	cout << "=============================="<<endl;
	cout << "1. Tambah"<<endl;
	cout << "2. Kurang "<<endl;
	cout << "3. Kali "<<endl;
	cout << "4. Bagi"<<endl;
	cout << "5. Kuadrat "<<endl;
	cout << "6. Tutup Program "<<endl;
	cout << "=============================="<< endl;
	cout << "Pilih Menu (1-5) = ";
	cin >> pilihan;
	return pilihan;
}


float tambah (float nilai1, float nilai2){
	float hasil = nilai1+nilai2;
	return hasil;
}

float kurang (float nilai1, float nilai2){
	float hasil = nilai1-nilai2;
	return hasil;
}

float kali (float nilai1, float nilai2){
	float hasil = nilai1*nilai2;
	return hasil;
}

float bagi (float nilai1, float nilai2){
	float hasil = nilai1/nilai2;
	return hasil;
}

float kuadrat (float nilai){
	float hasil = nilai*nilai;
	return hasil;
}
