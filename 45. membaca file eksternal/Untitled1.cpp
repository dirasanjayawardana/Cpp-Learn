#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	
	string output, isinya;
	int no;
	string nama;
	
	ofstream fileku;		//untuk menuliskan file file	
	fileku.open("data1.txt" , ios::trunc);
	for (int i=1; i<=10; i++){
		fileku << "ini baris ke " << i <<"\n";
	}
	fileku.close();
	
	
	// ios::in
	// ios::ate = mulai dari akhir file
	// ios::binary
	ifstream myfile;		//untuk membaca file
	myfile.open("data1.txt");
	
/*	getline(myfile, isinya);		//membaca baris pertama
	output.append(isinya);		
	getline(myfile, isinya);		//membaca baris kedua
	output.append("\n" + isinya);		
	getline(myfile, isinya);		// membaca baris ketiga
	output.append("\n" + isinya);
	cout << output <<endl<;
*/
	
	cout<<"mengakses file secara keseluruhan\n";
	while(!myfile.eof()){		// eof = end of file (akhir dari file
		getline(myfile, isinya);
		output.append(isinya + "\n");	
	}
	cout << output;

	
	//membaca file secara sederhana
	string hasil;
	myfile.open("data1.txt", ios::in);
	myfile >> hasil;
	cout << "membaca file secara sederhana = " << hasil<< endl;
	return 0;
	
}
