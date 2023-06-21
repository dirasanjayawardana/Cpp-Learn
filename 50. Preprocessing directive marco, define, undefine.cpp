//preprocessing directive
#include <iostream>

// macro untuk merubah nilai dengan sebuah nama
#define PI 3.14159265359
#define BAHASA "indonesia"
//macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A>B)?A:B)


using namespace std;

int main(){
	cout << "nilai PI = "<<PI<<endl;
	cout << "bahasa = "<< BAHASA <<endl;
	cout << "kuadrat 5 = "<<KUADRAT(5)<<endl;
	cout << "max antara 7 dengan 5 = "<< MAX(7,5)<<endl;
	
	// undef untuk megatur ulang preprocessing
	#undef BAHASA
	#define BAHASA "inggris"
	cout << "bahasasetelah undef = "<< BAHASA <<endl;
	return 0;
}
