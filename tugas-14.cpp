#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char napeg[30];
	double penjualan;
	double komisi;
	double totlkomisi=0;
	
	cout<<"PT SMART"<<endl;
	cout<<"penjumlahan penjualan pegawai dan bonus komisinya"<<endl;
	cout<<"-----------------------------------"<<endl;
	
	for(int i=0;i<10;i++) {
		cout<<"nama pegawai"<<i+1<<":";
		cin>>napeg;
		cout<<"jumlah penjualan pegawai:";
		cin>>penjualan;
		
		if(penjualan<500000){
			komisi=0;
		}else if(penjualan>=500000 && penjualan<500001){
			komisi=penjualan*0.10;
		}else{
			komisi=(500000*0.10)+(penjualan-500000)*0.15;
		}
		
		cout<<setprecision(13);
		cout<<"bonus komisi pegawai"<<i+1<<":"<<komisi<<endl;
		
		totlkomisi+=komisi;
	}
	
	cout<<"total komisi yang harus di bayar perusahaan:"<<totlkomisi<<endl;
	
	return 0;
}
