#include  <iostream>
#include <string>
#include <fstream>

using namespace std;

void tulisfile(string a, int pos);
void bacafile(int posisi);

fstream myfile;

int main(){
	
	
	string kata1, kata2, kata3, kata4, kata5, output;
	kata1="nama saya adalah dira";
	kata2="saya adalah anak pertama";
	kata3="saya kuliah di unila";
	kata4="saya mengambil jurusan elektro";
	kata5="saya suka makan roti";
	
	myfile.open("data.bin", ios::out | ios::binary);
	tulisfile(kata1, 0);
	tulisfile(kata2, 1);
	tulisfile(kata3, 2);
	tulisfile(kata4, 3);
	tulisfile(kata5, 4);
	myfile.close();
	
	for (int i=0; i<=4; i++){
		bacafile(i);
	}
	return 0;
}


void tulisfile(string a, int pos){
	myfile.seekp(pos*sizeof(string));
	myfile.write(reinterpret_cast<char*>(&a), sizeof(a));
}

void bacafile(int posisi){
	string output;
	myfile.open("data.bin", ios::in | ios::binary);
	myfile.seekp(posisi*sizeof(string));
	myfile.read(reinterpret_cast<char*>(&output),sizeof(output));
	cout << output <<endl;
	myfile.close();
}
