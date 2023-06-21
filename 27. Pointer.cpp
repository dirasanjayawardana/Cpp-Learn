#include <iostream>
using namespace std;

int main(){
	// int a memmpunyai nilai dan alamat
	int a = 5;
	cout<<"nilai dari a = "<<a<<endl;
	
	//cara mencari addres (alamat a) dengan tanda &
	cout << "alamat dari a : " << &a << endl;
	
	//variabel pointer (akan selalu bertipe data integer), pointer dengan tanda *
	int *b = &a;
	
	//derefencing (mengambil data dari sebuah pointer)
	cout << "alamat dari pointer = " << b<< endl;
	cout << "mengambil data dari pointer = " << *b << endl;
	
}
