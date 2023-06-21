#include <iostream>
using namespace std;
int main()
{	cout<<"program untuk mencari fpb"<<endl<<endl;
	int a=1;
	while (a<=2){
		int bil1,bil2,fpb,terkecil,i;
		cout<<"masukkan bilangan pertama = "; cin>>bil1;
		cout<<"asukkan bilangan kedua = "; cin>>bil2;
		if (bil1<bil2){
			terkecil = bil1;
		}else
			terkecil = bil2;
		for (i=1; i<=terkecil; i++){
			if (bil1%i==0&&bil2%i==0){
				fpb = i;
				
			}
		}cout<<"FPB = "<< fpb<<endl<<endl;
	}
	
	
}
