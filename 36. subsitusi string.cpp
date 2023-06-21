#include <iostream>
#include <string>
using namespace std;

int main(){
	string kalimat1("saya suka makan nasi");
	string kalimat2("hobi saya adalah bermain game");
	cout<< "1. "<< kalimat1<<endl;
	cout<< "2. "<< kalimat2 <<endl<<endl;
	
	// swap string
	cout<<"swap string\n";
	kalimat1.swap(kalimat2);
	cout<< "1. "<< kalimat1<<endl;
	cout<< "2. "<< kalimat2 <<endl<<endl;
	
	// replace, mengganti string
	cout<<"replace string"<<endl;
	kalimat2.replace(16, 4, "roti");
	cout<<kalimat2<<endl<<endl;
	
	//insert string
	cout<<"insert string"<<endl;
	kalimat2.insert(20, " tawar");
	cout<<kalimat2<<endl;
	
}
