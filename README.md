# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemograman
<br> Nama		: Aria Octavian Hamza
<br>NIM		:	1227050025
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Array adalah kumpulan beberapa data yang disimpan dalam satu variabel. Jadi, berbeda dengan variabel sebelumnya yang hanya menyimpan 
satu nilai saja, array dapat menampung lebih dari satu nilai. Untuk mendeklarasikan sebuah array dalam C++, kita harus menggunakan tanda [ ] 
(bracket). Adapun bentuk umum dari pendeklarasian array satu dimensi adalah sebagai berikut:<br>

```cpp
tipe_data nama_array [jumlah_indeks];
```

Selain itu array juga dapat dideklarasikan sebagai array multi-dimensi. Array multi-dimensi merupakan array yang mempunyai ukuran lebih dari 
satu. pendeklarasian array sama dengan array berdimensi satu, hanya saja menggunakan tanda [ ] (bracket) tambahan. Array multi-dimensi 
dapat dideklarasikan sebagai berikut:<br>

#### Array 2-Dimensi
```cpp
tipe_data nama_array [jumlah_indeks][jumlah_indeks];
```

#### Array 3-Dimensi
```cpp
tipe_data nama_array [jumlah_indeks][jumlah_indeks][jumlah_indeks];
```

Program ini berfungsi untuk menampilkan nilai indeks array yang tidak habis dibagi 3, 5, dan 7 menggunakan bahasa pemrograman C++. 
Program dimulai dengan menginputkan jumlah indeks baris dan kolom array yang akan dibuat, lalu program akan meminta untuk 
menginputkan nilai pada setiap indeks baris dan kolom array. Setelah itu, program menggunakan nested loop untuk menampilkan array 
yang telah diinputkan. Lalu program menggunakan if dan nested loop untuk mencari tahu apakah nilai pada suatu indeks array habis dibagi dengan 
3, 5, dan 7 atau tidak. Jika nilai indeks array tidak habis dibagi dengan 3, 5, dan 7 maka nilai tersebut akan ditampilkan, jika iya program 
tidak akan menampilkan nilai tersebut. 


## Source Code
```cpp
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
```

## Output
![Screenshot_20221223_080052](https://user-images.githubusercontent.com/79699603/209250448-027a010d-4d6a-47f9-a80c-770f7dcc491c.png)
