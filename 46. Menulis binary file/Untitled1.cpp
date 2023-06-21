#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	
	fstream myfile;
	int number = 50;
	
	myfile.open("data.bin", ios::out | ios::binary);
	myfile.write(reinterpret_cast<char*>(&number),sizeof(number));
	myfile.close();
	
	
}
