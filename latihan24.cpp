#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

void buatfile();
void tulisfile();
void tambahfile();
void bacafile();

int main()
{
	int pilihan;
	
	do
	{
		cout<<"\n===[menu pemberkasan]===\n";
		cout<<"1.buat berkas baru\n";
		cout<<"2.tulis isi berkas\n";
		cout<<"3.tambahkan tulisan ke berkas\n";
		cout<<"4.tampilkan isi berkas\n";
		cout<<"5.keluar\n";
		cout<<"pilihan menu (1-5) : ";
		cin>>pilihan;
		switch(pilihan)
		{
			case 1:
				buatfile();
				break;
            case 2:
            	tulisfile();
            	break;
            case 3:
            	tambahfile();
            	break;
            case 4:
            	bacafile();
            	break;
            default:
            	cout<<"keluar dari pemogram\n";
            	break;
		}
	}
	while(pilihan!= 5);
	return 0;
}

void buatfile()
{
	string berkas;
	cout<<"masukkan nama file baru : ";
	cin>>berkas;
	
	ofstream gas(berkas.c_str());
	if (gas.is_open())
	{
		gas.close();
		cout<<"file\""<<berkas<<"\"berhasil dibuat\n";
	}
	else cout << "file\""<<berkas<<"\"tidak berhasil dibuat\n";
}

void tulisfile()
{
	string berkas,teks;
	cout<<"masukkan nama file : ";
	cin>>berkas;
	
	ofstream gas(berkas.c_str(), ios::out);
	if(gas.is_open())
	{
		cin.ignore();
		cout << "masukkan tulisan yang ingin di input ke dalam file\n";
		getline(cin,teks);
		gas <<teks<<endl;
		gas.close();
		cout<< "tulisan berhasil di input kedalam berkas\""<<berkas<<"\"\n";
	}
	else cout<< "tulisan pada berkas\""<<berkas<<"\"tidak berhasil ditambahkan\n";
}

void tambahfile()
{
	string berkas, teks;
	cout<<"masukkan nama file untuk di tambahkan : ";
	cin>>berkas;
	
	ofstream gas(berkas.c_str(),ios::in);
	if(gas.is_open())
	{
		cin.ignore();
		cout<<"masukkan tulisan yang ingin di input ke dalam file\n";
		getline(cin,teks);
		gas<<teks<<endl;
		gas.close();
		cout<<"tulisan berhasil di input kedalam berkas\""<<berkas<<"\"\n";
	}	
	else cout<<"tulisan pada berkas\""<<berkas<<"\"tidak berhasil ditambahkan\n";
}

void bacafile()
{
	string berkas,baris;
	cout<<"masukkan nama file untuk ditampilakan : ";
	cin>>berkas;
	
	ifstream gas(berkas.c_str());
	if(gas.is_open())
	{
		cout<< "isi berkas\""<<berkas<<"\"berhasil dibuat\n";
		while(getline(gas,baris)) cout<<baris<<endl;
		gas.close();
	}
	else cout <<"berkas\""<<berkas<<"\"tidak berhasil dibuat\n";
}






























































