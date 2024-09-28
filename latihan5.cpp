#include<iostream>

using namespace std;

int main()
{
	string namapegawai,jabatan;
	int gaji,pajak,pinjaman,gajibersih = 0;
	
	cout<<"masukkan nama pegawai :";
	getline(cin,namapegawai);
	cout<<"masukkan nama jabatan :";
	getline(cin,jabatan);
	cout<<"masukkkan gaji :";
	cin>>gaji;
	cout<<"masukkan pinjaman :";
	cin>>pinjaman;
	
	pajak = 0.15 * gaji;
	gajibersih = gaji - (pinjaman + pajak);
	
	cout<<"\nGAJI KARYAWAN STMIK PENUSA\n";
	cout<<"nama pegawai :"<<namapegawai<<endl;
	cout<<"jabatan :"<<jabatan<<endl;
	cout<<"gaji :"<<gaji<<endl;
	cout<<"pajak :"<<pajak<<endl;
	cout<<"pinjaman :"<<pinjaman<<endl;
	cout<<"gaji bersih :"<<gajibersih<<endl;
	
	return 0;
}
