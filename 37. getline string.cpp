#include <iostream>
#include <string>
using namespace std;

int main(){
	string kalimat;
	
	//getline(cin, variabel);
	cout<<"masukkan kalimat : ";
	getline(cin, kalimat);
	
	cout<<"kalimat yang anda input : "<< kalimat<<endl;
	
	// jumalh kata dari input
	int indeks = 0;
	int jumlah = 0;
	
	while(true){
		indeks = kalimat.find(" ", indeks+1);
		jumlah ++;
		if (indeks<0){
			break;
		}
	}cout<<"jumlah spasi adalah : "<< jumlah;
}
