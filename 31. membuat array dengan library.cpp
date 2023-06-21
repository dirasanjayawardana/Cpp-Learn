#include <iostream>
#include <array>

int main(){
	// membuat array dengan standar library
	// array <int, jumlah array> nama array
	std::array<int, 5>nilai;
	for (int i=0; i<=4; i++){
		nilai[i] = i;
		std::cout << "nilai [" <<i<<"] = " << nilai[i] << "address : " << %nilai[i]<<std::endl;
		std::cout<<"ukuran : "<<nilai.size()<<std::endl;
		// nilei dengan indeks
		std::cout<<"nilai ke 2 : "<<nilai.at(2)<<std::endl;
		
	}
}
