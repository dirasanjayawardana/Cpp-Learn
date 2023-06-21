#include <iostream>
using namespace std;

//pass by reference ditandakan dengan tanda "&" pada parameter fungsi
void pangkat(int &a){
	a=a*a;
	cout<<"nilai x = "<<a<<endl;
}
main(){
	int x = 10;
	cout<<"nilai x awal = "<< x <<endl;
	pangkat(x);
	cout<<"niai x akhir = "<<x<<endl;
}
