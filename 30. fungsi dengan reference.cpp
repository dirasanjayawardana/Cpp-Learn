#include <iostream>
using namespace std;

// deklarasi prototype
void fungsi(int &);
void kuadrat(int &);


int main(){
	int a = 10;
	cout << "alamat a"<<&a << endl;
	cout << "nilai a = "<<a<<endl<<endl;
	fungsi(a);
	kuadrat(a);
	cout << "nilai kuadrat a = "<< a<<endl;
	
}

void fungsi(int &b){
	cout << "alamat b = "<< &b<<endl;
	cout << "nilai b =" << b <<endl;
}

void kuadrat(int &c){
	c = c*c;
}
