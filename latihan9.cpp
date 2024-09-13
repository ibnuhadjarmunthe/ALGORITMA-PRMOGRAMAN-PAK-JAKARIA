#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char namamhs[30],nim[10],nhuruf;
	float nhadir,ntugas,nuts,nuas,nakhir;
	
	cout<<"DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"mata kuliah : algoritma pemograman"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"nama mahasiswa : ";
	gets(namamhs);
	cout<<"nim : ";
	gets(nim);
	cout<<"nilai hadir : ";
	cin>>nhadir;
	cout<<"nilai tugas : ";
	cin>>ntugas;
	cout<<"nilai uts : ";
	cin>>ntugas;
	cout<<"nilai uas : ";
	cin>>nuas;
	nakhir=(0.1*nhadir)+(0.15*ntugas)+(0.35*nuts)+(0.4*nuas);
	if(nhadir>=85 && nakhir<=100){
		nhuruf='A';
	}else if(nakhir>=70 && nakhir<85){
		nhuruf='B';
	}else if(nakhir>=60 && nakhir<70){
		nhuruf='C';
	}else if(nakhir>=50 && nakhir<60){
		nhuruf='D';
	}else if(nakhir>=0 && nakhir<50){
		nhuruf='E';
	}else{
		nhuruf='-';
	}
	
	cout<<"nilai akhir = "<<nakhir<<endl;
	cout<<"nilai akhir = "<<nhuruf<<endl;
	
	
	return 0;
}
