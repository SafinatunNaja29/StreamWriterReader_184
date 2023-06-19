#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukkan Nama File : ";
	cin >> NamaFile;

	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		// mendapatkan setiap karakter dalam satu baris
		getline(cin, baris); 
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;  
	}
	//selesai dalam menulis sekarang tutup file nya
	outfile.close();

	//membuka file dalam mode membaca
	ifstream outfile;
	//menunjuk ke sebuah file
	outfile.open("contohfile.txt");

	cout << endl << ">= Membuka dan membaca file " << endl;
	//jika file ada maka
	if (outfile.is_open())
	{
		//melakukan perulangan setiap baris
		while (getline(outfile, baris))
		{
			//dan tampilkan disini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai
		outfile.close();
	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}