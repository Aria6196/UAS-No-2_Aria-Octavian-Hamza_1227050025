#include <iostream>
using namespace std;

void garis(){
	cout << endl << "====================================" << endl;
}

int main(){
	int x, y, a, b;
	
	int arr[10][10];
	int bagi[10];
	
	cout << "Nama: Aria Octavian Hamza" << endl << "NIM: 1227050025" << endl;
	
	garis();
	
	cout << "Jumlah baris pada array: ";
	cin >> x;

	cout << "Jumlah kolom pada Array: ";
	cin >> y;

	cout << endl;
	
	cout << "Masukkan nilai array!" << endl;
		
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << "Array [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	
	garis();
	
	cout << endl << "Array yang Diinputkan" << endl;
	
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	
	garis();
	
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			if(arr[i][j] % 3 != 0 && arr[i][j] % 5 != 0 && arr[i][j] % 7 != 0){
				bagi[a] = arr[i][j];
				a++;
			}
		}
	}
	
	cout << "Nilai pada array yang tidak habis dibagi dengan 3, 5, dan 7 adalah ";
	
	for(int i = 0; i < a; i++){
		if(i != a-1){
			cout << bagi[i] << ", ";
		}
		else{
			cout << "dan " << bagi[i];
		}
	}
	
	garis();
	
	return 0;
}
