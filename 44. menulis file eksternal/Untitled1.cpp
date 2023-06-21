#include <iostream>
#include <fstream>		// stream untuk file ekternal
						// berisi ofstream, ifstream, dan fstream
#include <string>
using namespace std;

int main(){
	
	ofstream fileku;		//mendeklarasikan nama file
	
	// ios::out =operasi output, default
	// ios::app = menuliskan pada akhir baris
	// ios::trunc = membuat file atau menimpa file, default
	
	fileku.open ("data1.txt" , ios::trunc);		//membuat file dan menghubungkan file
	fileku << "menuliskan pada baris pertama\n";	//menuliskan isi file eksternal
	fileku << "menuliskan pada baris kedua\n";
	fileku << 123456 ;
	fileku.close();
	
		//membaca file secara sederhana (hanya mengeksekusi satu kata)
	fstream myfile;
	string hasil;
	myfile.open("data1.txt", ios::in);
	myfile >> hasil;
	cout << "membaca file secara sederhana = " << hasil<< endl;
	return 0;
	
	
}
