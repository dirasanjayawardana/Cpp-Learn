#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int a,b,c;
	// comma operator
	c = (a=2, cout<<"a = "<<a<<endl, b=3, cout<<"b = "<<b<<endl, (a+b));
	cout<<"c = "<<c<<endl;
	return 0;
}
