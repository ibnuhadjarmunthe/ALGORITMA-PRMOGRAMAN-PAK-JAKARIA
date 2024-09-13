#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float jumlahpenjualan,lebihdari=500000,komisi = 0.10;
	
	cout<<"jumlah penjualan:";
	cin>>jumlahpenjualan;
	
	if(jumlahpenjualan <= 500000) {
		komisi = jumlahpenjualan * 0.10;
	}else{
		komisi = 500000 * 0.10 + (jumlahpenjualan<500000)* 0.15;
	}
	
	cout<<"komisi yang diperoleh adalah: "<<komisi<<endl;
	
	return 0;
}
