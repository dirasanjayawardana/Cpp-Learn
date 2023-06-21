#include <iostream>
using namespace std;

main(){
	
	int a;
	cout << " masukkan panjang pola = ";
	cin >> a;
	
	// pola 1
	cout<<"pola 1 \n";
	for (int i = 1; i<=a; i++){
		for (int j=1; j<=i; j++){
			cout << "*";
		}
	cout << endl;	
	}
	
	//pola 2
	cout<<"\npola 2 \n";
	for (int i =1; i<=a; i++){
		for (int j=a; j>=i; j--){
			cout << "*";
		}
	cout << endl;	
	}
	
	//pola 3
	cout << "\npola 3 \n";
	for (int i =1; i<=a; i++){
		for (int j=1; j<i; j++){
			cout << " ";
		}
		for (int j=a; j>=i; j--){
			cout << "*";
		}
		cout << endl;
	}
	
	//pola 4
	cout << "\npola 4 \n";
	for (int i=1; i<=a; i++){
		for (int j=a; j>i; j--){
			cout << " ";
		}
		for (int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	//pola 5 segitiga sama kaki
	cout << "\npola 5 (segitiga sama kaki)\n";
	for (int i=1; i<=a; i++){
		for (int j=a; j>i; j--){
			cout << " ";
		}
		int beda = (i*2)-1;
		for (int j=1; j<=beda; j++){
			cout <<"*";
		}
		cout<<endl;
	}
	
	//pola 6 segitiga sama sisi
	cout<<"\npola 6 (segitiga sama sisi)\n";
	for (int i=1; i<=a; i++){
		for (int j=a; j>i; j--){
			cout << " ";
		}
		for (int j=1; j<=i; j++){
			cout <<"* ";
		}
		cout<<endl;
	}
	
}
