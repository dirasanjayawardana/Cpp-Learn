#include <iostream>
using namespace std;

//enum = tipe data yang konstan, sudah ditentukan
enum warna{
	merah, kuning, hijau, biru, putih
};

//untuk mengubah indeks contoh hijau=10, maka indeks hijau adalah 10 dan lanjut seterusnya

int main(){
	warna baju;
	baju = putih;
	// akan menampilkan indeks dari warna putih
	cout << baju << endl;
}
