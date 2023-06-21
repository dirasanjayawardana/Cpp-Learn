#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	
	fstream myfile;
	int number1 = 100, number2=200, number3 = 300 , number4=400, number5=500;
	
	//menulis file binary
	myfile.open("data.bin", ios::out | ios::binary);
	myfile.write(reinterpret_cast<char*>(&number1),sizeof(number1));
	myfile.write(reinterpret_cast<char*>(&number2),sizeof(number2));
	myfile.write(reinterpret_cast<char*>(&number3),sizeof(number3));
	myfile.seekp(3*sizeof(int));		// akan menimpa data pada posisi kedua
	myfile.write(reinterpret_cast<char*>(&number4),sizeof(number4));
	myfile.close();
	
	myfile.open("data.bin", ios::out |ios::app | ios::binary);
	myfile.write(reinterpret_cast<char*>(&number5),sizeof(number5));
	myfile.close();
		
	// membaca file binary
	int hasil;
	myfile.open("data.bin", ios::in | ios::binary);
	for (int i=0; i<=4; i++){
		myfile.seekp(i*sizeof(int));			// meletakkan kursor pada posisi 0=pertama, 1=kedua, dst)
		myfile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));
		cout <<"ini adalah hasilnya = "<<hasil<< endl;
	}myfile.close();
	
	cout<<endl;
	myfile.open("data.bin", ios::in | ios::binary);
	for (int i=0; i<=4; i++){
		myfile.seekp(i*sizeof(int));			// meletakkan kursor pada posisi 0=pertama, 1=kedua, dst)
		myfile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));
		cout <<"ini adalah hasilnya pada proses kedua = "<<hasil<< endl;
	}myfile.close();
	
}













