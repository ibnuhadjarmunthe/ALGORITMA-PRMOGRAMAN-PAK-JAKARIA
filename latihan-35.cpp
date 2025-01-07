#include <iostream>
#include <string.h>
#include <conio.h>
#include <fstream>

using namespace std;

int main(){
	ifstream file ("data.txt");
	string line;
	
	if (file.is_open()){
		while(getline(file,line)){
			cout<<line<<endl;
		}
		file.close();
	}else{
		cout<<"File tidak bisa di buka";
	}
	return 0;
}
