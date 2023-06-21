#include <iostream>
using namespace std;
int main(){
	int i=1,a;
	cout<<"masukkan rentang bilangan genap = ";
	cin>>a;
	for (i; i<=a; i++){
		if (i%2==0){
			cout<<i<<" ";
		}
	}cout<<endl<<endl;
	int j=1,b;
	cout<<"masukkan rentang bilangan ganjil = ";
	cin>>b;
	for (j; j<=b; j++){
		if (j%2==1){
			cout<<j<<" ";
		}
	}
}

