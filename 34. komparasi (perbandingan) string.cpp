#include <iostream>
#include <string>
using namespace std;

int main(){
	string kata;
	string password("dira");
	
	while(true){
		cout<<"masukkan password : ";
		cin>> kata;
		
		if (kata == password){
			cout <<"password benar";
			break;
		}else{
			cout <<"password salah!!!\n";
		}
	}
	
}
