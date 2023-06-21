#include <iostream>
using namespace std;

int main(){
	// refrence (membuat duplikat nlai variabel)
	int a = 5;
	cout << "alamat dari a = "<< &a << endl;
	cout << "nilai dari a = "<< a <<endl<<endl;
	
	// membuat duplikat variabel dari a
	int &b = a;
	cout << "alamat dari b = "<< &b << endl;
	cout << "nilai dari b = "<< b << endl<<endl;
	
	// merubah niali b, maka nilai a juga akan berubah, begitu sebaliknya
	b = 10;
	cout << "nilai dari a saat b diubah = "<< a <<endl<<endl;
	
}
