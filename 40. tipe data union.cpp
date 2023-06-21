#include <iostream>
#include <string>
using namespace std;

// union untuk mengalokasikan satu memory (satu address), mirip struct
union data{
	int a;
	char b[4];
	
};


int main(){
	
	data data1;
	
	data1.a = 10;
	data1.b[0]='s';
	data1.b[1]='a';
	data1.b[2]='y';
	data1.b[3]='a';
	
	
	cout << "data a : "<< data1.a << endl;
	cout << "data b : "<< data1.b << endl;
	
	
}
