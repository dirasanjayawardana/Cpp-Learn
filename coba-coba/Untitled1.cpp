#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	fstream myfile;
	string kata1="saya adalah mahasiswa", kata2 = "saya kuliah di unila", kata3 = "jurusan saya adalah teknik elektro", kata4 = "saya suka makan roti";
	string hasil1;
	
	myfile.open("data.bin", ios::out | ios::binary);
	myfile.write(reinterpret_cast<char*>(&kata1), sizeof(kata1));
	myfile.write(reinterpret_cast<char*>(&kata2), sizeof(kata2));
	myfile.write(reinterpret_cast<char*>(&kata3), sizeof(kata3));
	myfile.seekp(0*sizeof(string));			// akan menmpa data pada posisi ke 0= pertama, 1=kedua, 2=ketiga, dst)
	myfile.write(reinterpret_cast<char*>(&kata4), sizeof(kata4));
	myfile.close(); 
	
	myfile.open("data.bin", ios::in | ios::binary);
	for (int i=0; i<=2; i++){
		myfile.seekp(i*sizeof(string));
		myfile.read(reinterpret_cast<char*>(&hasil1),sizeof(hasil1));
		cout << hasil1<<endl;
	}
	myfile.close();
}
