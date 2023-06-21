#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main(){
	fstream file;
	int output;
	int number1=10;
	
	file.open("data.bin", ios::out | ios::binary);
	file.write(reinterpret_cast<char*>(&number1),sizeof(number1));
	file.close();
		
	file.open("data.bin", ios::in | ios::binary);
	file.read(reinterpret_cast<char*>(&output),sizeof(output));
	cout <<"ini adalah hasilnya = "<<output<< endl;
}

