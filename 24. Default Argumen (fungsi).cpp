#include <iostream>
using namespace std;

//deklarasi prototype fungsi volume_kubus karena berada dibawah fungsi main
//defaul argument " p=2, l=2, t=2 "
double volume_kubus(double p=2, double l=2, double t=2);

int main(){
	cout << "volume kubus = " << volume_kubus(3,4,5) << endl;
	cout << "volume kubus dengan default argumen = " << volume_kubus() << endl;
	cout << "volume kubus densgan default argumen (tanpa variabel t) = " << volume_kubus(3,4) << endl;
}

double volume_kubus(double p, double l, double t){
	return p*l*t;
}

