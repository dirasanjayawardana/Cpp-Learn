#include <iostream>
#include <string>
using namespace std;

// nesting struct (struct bersarang)

struct aktor{
	string nama;
	int tahun_lahir;
};

struct film{
	string judul;
	string genre;
	int tahun;
	// struct aktor
	aktor pemeran1;
	aktor pemeran2;
};

int main(){
	
	aktor aktor1, aktor2;
	film film1;
	
	// buat aktor 1
	
	aktor1.nama ="andi";
	aktor1.tahun_lahir=1980;
	//buat aktor 2
	
	aktor2.nama = "deni";
	aktor2.tahun_lahir = 1985;
	
	//buat film
	film1.judul ="cerita hidup";
	film1.genre = "komedian";
	film1.tahun = 2020;
	film1.pemeran1 = aktor1;
	film1.pemeran2 = aktor2;
	
	cout << film1.judul <<endl;
	cout << film1.pemeran1.nama << endl;
	cout << film1.pemeran2.nama << endl;
	
	
}
