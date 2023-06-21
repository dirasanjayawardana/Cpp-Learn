#include <iostream>
#include <string>
using namespace std;


int main(){
	
	string kalimat1("saya suka makan ikan dan makan roti");
	cout <<kalimat1<<endl;
	
	// mengakses substring
	// namacariabel.substr(indeks,panjang)
	cout<<kalimat1.substr(5,10)<<endl; 
	
	// mencari posisi dari substring
	cout<<"indeks dari kata makan aldalah : "<<kalimat1.find("makan")<<endl;
 	
 	int a = kalimat1.find("makan");
 	cout<<"indeks dari kata makan ke dua adalah : "<< kalimat1.find("makan", a+1);
 	
 }
