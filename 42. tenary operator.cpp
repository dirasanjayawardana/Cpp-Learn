#include <iostream>
#include <string>
using namespace std;

//ternary operator (?) utnuk mengecek kondisi benar atau salah
// mirip if else

int main(){
	int a, b;
	string hasil1, hasil2, output;
	
	hasil1= "nilai a kurang dari b";
	hasil2= "nilai a lebih dari b";
	
	cout<< "masukkan nilai a = ";
	cin>> a;
	cout<< "masukkan nilai b = ";
	cin>> b;
	
	// jika kondisi benar maka hasil1, jika salah maka hasil2
	output = (a<b) ? hasil1:hasil2;	
	cout << output <<endl;
	
}
