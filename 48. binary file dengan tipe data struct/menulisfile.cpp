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
	
	//menulisfile
	myfile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	
	mahasiswa mahasiswa1, mahasiswa2, mahasiswa3;
	
	mahasiswa1.npm = 123;
	mahasiswa1.nama = "udin";
	mahasiswa1.jurusan = "elektro";
	
	mahasiswa2.npm = 456;
	mahasiswa2.nama = "andi";
	mahasiswa2.jurusan = "mesin";
	
	mahasiswa2.npm = 789;
	mahasiswa2.nama = "budi";
	mahasiswa2.jurusan = "sipil";
	
	
	myfile.write(reinterpret_cast<char*>(&mahasiswa1),sizeof(mahasiswa1));
	myfile.write(reinterpret_cast<char*>(&mahasiswa2),sizeof(mahasiswa2));
	myfile.write(reinterpret_cast<char*>(&mahasiswa3),sizeof(mahasiswa3));
	
	myfile.close();
	
	
}
