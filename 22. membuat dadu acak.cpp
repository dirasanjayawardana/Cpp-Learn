#include <iostream>
#include <cstdlib> //mengandung fungsi random

// fungsi random secara umum = rand()
using namespace std;


int main(){
	
	char input;
	while(true){
		cout << "lempar dadu? (y/n) = ";
		cin>>input;
		
		if (input == 'y'){
			cout<< 1+(rand()%6)<<endl;
		}else if (input == 'n'){
			break;
		}else {
			cout<< "\ninput salah !!!\n";
		}
	
	}
	return 0;
}
