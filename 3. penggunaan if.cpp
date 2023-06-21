#include <iostream>
using namespace std;
int main()
{
	int a=1;
	while (a<=2){
		int nilai;
		cout<<"masukkan nilai siswa = "; cin>>nilai;
		if (nilai >=76){
			cout <<"nilai anda adalah A"<<endl<<endl;
		}else if (nilai >=70){
			cout <<"nilai anda adalah B"<<endl<<endl;
		}else if (nilai >=66){
			cout <<"nilai anda adalah C"<<endl<<endl;
		}else if (nilai >=60){
			cout<<"nilai anda adalah D"<<endl<<endl;
		}else {
			cout <<"nilai anda adalah E"<<endl<<endl;
		}
		
	}
	

}
