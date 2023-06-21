#include <iostream>
using namespace std;
int main(){
	
	int y=1;
	while (y<=2){
		int z;
		cout<<"MENU :"<<endl;
		cout<<" 1. bilangan ganjil"<<endl;
		cout<<" 2. bilangan genap"<<endl;
		cout<<"masukkan pilihan menu = ";cin>>z;
		if (z==1){
			int i=1,a;
			cout<<"masukkan rentang bilangan ganjil = ";
			cin>>a;
			cout<<"bilangan ganjil antara 1 sampai "<<a<<" adalah = ";
			for (i; i<=a; i++){
				if (i%2==1){
					cout<<i<<" ";
				}
			}
		}else if(z==2) {
			int j=1,b;
			cout<<"masukkan rentang bilangan genap = ";
			cin>>b;
			cout<<"bilangan genap antara 1 sampai "<<b<<" adalah = ";
			for (j; j<=b; j++){
				if (j%2==0){
					cout<<j<<" ";
				}
			}
		}else{
			cout<<"menu yang anda masukkan salah ";
		}
		cout<<endl<<endl;
	}
	
	
	
}

