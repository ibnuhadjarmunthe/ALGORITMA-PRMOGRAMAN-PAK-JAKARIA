#include<iostream>
#include<string>

using namespace std;


int main()
{
	double gajigolongan[] =
	{500000,750000,1000000,1500000,1750000,2500000
	};
	
	double tunjanganjabatan[] =
	{450000,300000,375000,200000
	};
	
	string namapegawai;
	int golongan,kodejabatan;
	double pinjaman,pajak,totalgajikotor,totalgajibersih;
	
	cout<<"masukkan nama pegawai: ";
	getline(cin,namapegawai);
	cout<<"masukkan golongan (1=Ia,2=IIa,3=IIIa,4=Ib,5=IIb,6=IIIb): ";
	cin>>golongan;
	if (golongan <1 || golongan >6){
		cout<<"golongan tidak valid!"<<endl;
		return 1;
	}
	cout<<"masukkan kode jabatan (1:direktur, 2:sekretaris, 3:wakil direktur, 4:staf administrasi): ";
	cin>>kodejabatan;
	if (kodejabatan <1 || kodejabatan >4){
		cout<<"kode jabatan tidak valid!"<<endl;
		return 1;
	}
	cout<<"masukkan pijaman: ";
	cin>>pinjaman;
	
	double gaji = gajigolongan[golongan - 1];
	double tunjangan = tunjanganjabatan[kodejabatan - 1];
	totalgajikotor = gaji + tunjangan;
	
	pajak = gaji * 0.05;
	
	totalgajibersih = totalgajikotor - pinjaman - pajak;
	
	cout<<"\n----rincian gaji pegawai----"<<endl;
	cout<<"nama pegawai: "<<namapegawai<<endl;
	cout<<"golongan: "<<golongan<<endl;
	cout<<"gaji: rp"<<gaji<<endl;
	cout<<"tunjangan: rp"<<tunjangan<<endl;
	cout<<"pinjaman: rp"<<pinjaman<<endl;
	cout<<"pajak: rp"<<pajak<<endl;
	cout<<"total gaji kotor: rp"<<totalgajikotor<<endl;
	cout<<"total gaji bersih: rp"<<totalgajibersih<<endl;
	
	return 0;
}




















