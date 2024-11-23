#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ofstream file("data.txt");
	
	if (file.is_open()){
		file<<"stmik penusa\n";
		file<<"belajar algoritma pemograman\n";
		file<<"ibnu hadjar munthe.";
	} else{
		cout<<"file tidak bisa di buka";
	}
	
	return 0;
}
