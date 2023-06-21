#include <iostream>

#define ABC 

// ifdef (untuk mengecek suatu define yang sudah ada)
#ifdef ABC
#define HASIL "ditemukan"
#else 
#define HASIL "tidak ditemukan"
#endif

// ifndef (untuk mengecek suatu define yang belum ada)
#ifndef APA
#define APA "membuat define"
#else   // ini bisa dihilangkan jika tidak ada apa-apa
#endif

// pragma once (untuk memastikan suatu file header diinclude sekali)
// #pragma once

using namespace std;


int main(){
	cout << HASIL << endl;
	cout << APA <<endl;
	return 0;
}
