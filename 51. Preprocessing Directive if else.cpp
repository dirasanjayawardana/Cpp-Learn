#include <iostream>

#define ID 62

//if else pada preprocessing
#if ID == 62
#define NEGARA "Indonesia"
#else
#define NEGARA "luar negeri"
#endif


using namespace std;

int main(){
	cout << "negara tersebut adalah : "<<NEGARA<<endl;
	return 0;
}
