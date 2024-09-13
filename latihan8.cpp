#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float gjperjam=25000,jlhjamkerja,lembur,totalgaji;
	char npegawai[30];
	
	cout<<"PERHITUMGAN GAJI PRGAWAI HARIAN"<<endl;
	cout<<"..............................."<<endl;
	cout<<"nama pegawai : ";
	gets(npegawai);
	cout<<"jumlah jam kerja : ";
	cin>>jlhjamkerja;
	if(jlhjamkerja>8){
		lembur=(1.5*gjperjam*(jlhjamkerja-8));
		totalgaji=(7*gjperjam) +lembur;
	}else {
		lembur=0;
		totalgaji=(jlhjamkerja*gjperjam)+lembur;
	}
	cout<<"total gaji pegawai harian = "<<totalgaji<<endl;
	
	return 0;
	
}
