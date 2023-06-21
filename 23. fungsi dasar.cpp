#include <iostream>
using namespace std;

/* sebuah fungsi =  tipedata namafungsi(argumen){}
*/

int fungsi(int x){
	return x*x;
}

// menggunakan dua input
int fungsi2(int a, int b){
	int c = a + b;
	return c; 
}

//fuungsi void tanpa nilai kembalian, 
//void merupakan tipe data kosong, 
//tidak bisa menggunakan return
//cara mengakses fungsi void langsung dipanggil saja3
void fungsi3(int input){
	cout<<"menampilkan dengan void = ";
	cout<<input<<endl;

}

int main(){
	
	int input, hasil, hasil2, inputa, inputb;
	cout<<"masukkan kkuadrat dari = ";
	cin>>input;
	hasil = fungsi(input);
	cout<<"kuadrat dari "<<input<<" adalah "<<hasil<<endl;
	
	cout<<"masukkan nilai a = ";
	cin>>inputa;
	cout<<"masukkan nilai b = ";
	cin>>inputb;
	hasil2 = fungsi2(inputa, inputb);
	cout<< "hasil dari "<< inputa <<" + "<<inputb<<" adalah "<< hasil2 <<endl;
	
	//cara mengakses fungsi void langsung dipanggil saja
	fungsi3(hasil2);
	
	return 0;
	
}
