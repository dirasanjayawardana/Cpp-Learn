#include <iostream>
using namespace std;

int main()
{	cout<<"program untuk mencari kpk"<<endl<<endl;
	int a=1;
	while (a<=2){
		int bil1, bil2, kpk=0, i;
		cout<<"masukkan bilangan pertama = "; cin>>bil1;
		cout<<"masukkan bilangan kedua = "; cin>>bil2;
		for (i=1; i<=bil1; i++){
			kpk+=bil2;
			if (kpk%bil1==0){
				cout<<"kpk = "<<kpk<<endl<<endl;
				break;
		}
	}
	}

}
