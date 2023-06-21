#include <iostream>
#include <string>
using namespace std;

// struct merupakan sebuah data yang dibentuk dari beberapa data
struct buah{
	string warna;
	float berat;
	int harga;
	string rasa;
};

int main(){
	//deklarasi
	buah apel;
	buah jeruk;
	
	apel.warna = "merah";
	apel.berat = 5;
	apel.harga = 20000;
	apel.rasa = "manis";
	
	jeruk.warna = "orange";
	jeruk.berat = 3;
	jeruk.harga = 15000;
	jeruk.rasa = "asam";
	
	cout<<apel.warna<<endl;
	cout<<apel.berat<<endl;
	cout<<apel.harga<<endl;
	cout<<apel.rasa<<endl<<endl;
	
	cout<<jeruk.warna<<endl;
	cout<<jeruk.berat<<endl;
	cout<<jeruk.harga<<endl;
	cout<<jeruk.rasa<<endl;
}
