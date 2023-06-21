#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct mahasiswa{
	int npm;
	string nama;
	string jurusan;
};


int main(){
	
	fstream myfile;	
	//membaca file
	mahasiswa bacadata;
	myfile.open("data.bin", ios::in | ios::binary);
	
	cout<< "ukuran data = "<<sizeof(mahasiswa)<<endl;
	// 0---24---|---24---|---24---|
	myfile.seekp(0*sizeof(mahasiswa));		//untuk menentukan data keberapa yang akan dibaca
											// 0 = data pertama, 1= data kedua, 2= data ketiga
	
	myfile.read(reinterpret_cast<char*>(&bacadata),sizeof(bacadata));
	cout << bacadata.npm <<endl;
	cout << bacadata.nama <<endl;
	cout << bacadata.jurusan <<endl;
	
	myfile.close();
	
	
	
	
}
