#include <iostream>
using namespace std;

// mencari nilai faktorial dengan fungsi rekursif
int faktorial (int a);

int main(){
	
	int angka, hasil;
	cout << "menghitung faktorial dari = "	;
	cin >> angka;
	hasil = faktorial (angka);
	cout << "nilai fakotrialnya adalah = " << hasil << endl ;

}

int faktorial (int n){
	if (n<=1){
		cout <<"A";
		return n;
	}else {
		cout << "B";
		return n*faktorial (n-1);
	}
	
}
