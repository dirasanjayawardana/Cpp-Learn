#include <iostream>
using namespace std;

/*overloading = dengan nama fungsi yang sama 
akan memilih fungsi sesuai dengan argumen yang diberikan*/

//fungsi dasar
int segiempat(int panjang , int lebar){
	int luas = panjang*lebar;
	return luas;
}

//fungsi overloading (nama fungsi tetap sama
int segiempat(int sisi){
	int luas = sisi*sisi;
	return luas;
}

//fungsi overloading (nama fungsi tetap sama)
double segiempat(double sisi){
	return sisi*sisi;
}


int main(){
	cout << "luas persegi panjang 2x3 = " << segiempat(2,3) << endl;
	cout << "luas persegi 3x3 = " << segiempat(3) << endl;
	cout << "luas persegi 3.5 X 3.5 = " << segiempat(3.5) << endl;
	return 0;
	
}
