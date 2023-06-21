/*buatlah program untuk menginput 10 elemen dalam array
program harus menghitung = banyaknya input bilangan yang lebih dari 5*/

#include <iostream>
using namespace std;
int main(){
	
	int jumlah,i,j;
	int a[10];
	cout<<"masukan sepuluh angka"<<endl;
	for (i=0; i<10; i++){
		cout <<"masukkan angka ke "<< i+1<< " = ";
		cin>>a[i];
		if (a[i]>10){
			jumlah++;
		}
	}cout <<"banyaknya bilangan yang lebih dari 10 sebanyak = "<< jumlah << " bilangan";
}
