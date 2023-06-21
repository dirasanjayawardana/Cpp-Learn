#include <iostream>
using namespace std;

int main(){
	int i,j;
	cout<<"mambuat tabel perkalian dari : ";cin>>i; cout<<" sampai : ";cin>>j;
	for (i; i<=10; i++){
		for (j;j<=10;j++){
			cout<<i<<" x "<<j<<" = "<< i*j<<endl;
		}cout<<endl;
	}
}
