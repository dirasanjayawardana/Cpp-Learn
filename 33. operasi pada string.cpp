#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string kata1("modar");
	//menampilkan data string 
	cout << kata1 <<endl;
	
	// mengambil karakterer dari string
	cout<<"indeks ke 0 : "<< kata1[0]<<endl;
	cout<<"indeks ke 1 : "<< kata1[1]<<endl;
	cout<<"indeks ke 2 : "<< kata1[2]<<endl;
	cout<<"indeks ke 3 : "<< kata1[3]<<endl;
	cout<<"indeks ke 4 : "<< kata1[4]<<endl;
	
	// mengubah karakter pada string
	kata1[4]= 'l';
	cout << kata1 <<endl;
	
	// menyambung
	string kata2(kata1+"lah");
	cout<< kata2<<endl;
	
	string kata3("sepeda");
	kata1.append(" "+kata3);
	cout<< kata1<<endl;
	
	string kata4("mobil");
	kata2 += " " + kata4 ;
	cout<< kata2 <<endl;
	
	//

	
}
