#include <iostream>
using namespace std;

//contoh fungsi dengan kembalian
bool prima(int a){
	if (a==2){
		return true;
	}
	for (int i=2;i<a;i++){
		if (a%i==0){
			return false;
		}
	}
	return true;
}

//untuk memanggil fungsi dengan kembalian, harus ada "cou<<"
main(){
	int i,b;
	cout<<"bilangan prima dari 1 sampai ";cin>>b;
	cout<<"adalah "<<endl;
	for (i=2;i<=b;i++){
		if(prima(i)){
			cout << i<<" ";
		}
	}
}
