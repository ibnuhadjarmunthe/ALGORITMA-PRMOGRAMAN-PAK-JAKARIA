#include <iostream>
#include <string.h>
#include <conio.h>
#include <fstream>

using namespace std;

int main(){
	ofstream file ("data.txt");
	
	if (file.is_open()) {
		file <<"STMIK Penusa\n";
		file <<"Blajar Algoritma Pemrograman.";
		file.close();
	}else {
		cout <<",file Tidak bisa di buka";
	}
	return 0;
}
