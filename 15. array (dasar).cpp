#include <iostream>
using namespace std;

void cetakarray(int *ptrarray, int baris, int kolom);

int main(){
	//deklarasi, elemen array dimulai dengan indeks 0,
	int nilai[5]={10,20,30,40,50};
	
	//cara mengganti elemen array
 	nilai[0]=15;
	
	//cara mengakses elemen array
	cout<<"nilai ke 4 adalah = "<<nilai[3]<<endl<<endl;
	
	// mengakses elemen array dengan looping
	for (int i=0; i<5; i++){
		cout << "nilai ke "<<i+1<<" adalah = "<<nilai[i] << endl;


	}cout <<endl;		
	// looping khusus array (hanya untuk c++ 11 keatas)
	// for (int hasil : nilai){
	//	cout<<hasil<<endl;
		
	//array multi dimensi (seperti matriks)
	//int nama [baris][kolom]={}
	int array[2][2]={1,2,3,4};
	cout << array[0][0] <<" "<< array[0][1] <<endl;
	cout << array[1][0] <<" "<< array[1][1] <<endl;
	cout<<endl;
	
	int array1[3][3]={1,2,3,4,5,6,7,8,9};
	cout << array1[0][0] <<" "<< array1[0][1] <<" "<< array1[0][2] <<endl;
	cout << array1[1][0] <<" "<< array1[1][1] <<" "<< array1[1][2] <<endl;
	cout << array1[2][0] <<" "<< array1[2][1] <<" "<< array1[2][2] <<endl;
	cout<<endl;
	
	//mencetak array multidimensi dengan fungsi
	cetakarray(*array1, 3, 3);
	
}	

void cetakarray(int *ptrarray, int baris, int kolom){
	int indeks = 0;
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout << *ptrarray+indeks << " ";
			indeks++;
		}
		cout<<endl;
	}
}

