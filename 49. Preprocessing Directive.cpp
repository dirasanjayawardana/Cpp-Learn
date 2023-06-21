//preprocessing directive
#include <iostream>

//peprocessing tidak menggunakan memory, ditandakan dengan tanda #
//contoh (define)
#define PI 3.1415926

using namespace std;

int main(){
	cout << "nilai PI = "<< PI <<endl;
	// tidak bisa mengakses addres dari PI karena tidak menggunakan memory
}
