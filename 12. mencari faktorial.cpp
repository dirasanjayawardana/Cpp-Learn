#include <iostream>
using namespace std;

int main(){
	
	int bilangan, hasil=1,i;
	cout<<"masukkan bilangan = ";cin>>bilangan;
	
	for (i=bilangan; i>=1;i--){
		hasil*=i;
	}
	cout<<bilangan<<"! = "<<hasil;
}
