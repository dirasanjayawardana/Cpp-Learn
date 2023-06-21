#include <iostream>
using namespace std;
//funsi void merupakan fungsi tanka kembalian

//jika tanpa parameter
void cetak();
main (){
	cetak();
}
void cetak(){
	for (int i=1; i<=10; i++){
		cout<<i<<;
	}
}



//menggunakan parameter
//jika fungsi berada dibawah main, maka harus di deklarasikan prototype nya
void cetak(int a);

//cara memanggil fungsi
main (){
	cetak(100);
}

//cara mendeklarasikan fungsi
void cetak(int a){
	for (int i=1; i<=a; i++){
		cout<<i<<;
	}
}




