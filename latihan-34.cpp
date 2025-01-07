#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std; 

float gaji_pk(float gperjam, int jamkrja);
int lembur (int jamkrja);
float uangmakan (int jamkrja);
int jlembur (int jamkrja);
string nama;
int jamkrja;
const float gajijam =2000;
const int uanglemburjam =3000;
char lagi;

int main() 
{
	do{
		cout <<"\nPT REJEKI NOMPLOK"<<endl;
		cout <<"======================================"<<endl;
		cout <<"Nama               : ";
		cin >>nama ;
		cout <<"Jumlah Jam Kerja   : ";
		cin >>jamkrja;
		cout << endl;
		
		float gpokok = gaji_pk(gajijam,jamkrja);
		int ulembur =lembur(jamkrja);
		float umakan =uangmakan (jamkrja);
		int jasa =jlembur (jamkrja);
		
		cout << nama<<" Bekerja Selama " <<jamkrja<<" jam, maka "<<endl;
		cout <<"\nGaji Pokok       = ";
		if(jamkrja >7){
			cout <<"7 * "<<gajijam;
		}else{
			cout <<jamkrja <<" * "<<gajijam;
		}
		cout <<"              ="<< gpokok <<endl;
		
		if (jamkrja >7){
			int jamlembur =jamkrja-7;
			cout <<"Uang Lembur       = "<<jamlembur <<" * "<< uanglemburjam <<"         = "<<ulembur <<endl;
			
		}
		
		cout <<"Uang Makan         = "<<umakan <<endl;
		cout <<"Uang Jasa Lembur   = "<<jasa <<endl;
		
		float terimagaji = gpokok+ulembur+umakan+jasa;
		cout <<"Gaji Yang Diterima = "<<terimagaji <<endl;
		cout <<endl;
		
		cout <<"Lanjut ? [Y/T]"<<lagi<<endl;
		lagi =getch();
		cout<<endl;

	}
	while (lagi =='y'||lagi=='Y');
	
	return 0;
} 
float gaji_pk (float gperjam, int jamkrja)
{
	if (jamkrja >7){
		return 7 *gperjam;
	}else{
		return jamkrja * gperjam;
	}
}
int lembur (int jamkrja){
	if (jamkrja >7){
		int lembur = jamkrja -7;
		return lembur * uanglemburjam;
	}
	return 0;
}
float uangmakan (int jamkrja){
	if (jamkrja >=8 && jamkrja <=10){
		return 1500;
	}else if(jamkrja >10){
		return 2500;
	}
	return 0;
}
int jlembur (int jamkrja){
	if (jamkrja >=9 ){
		return 3000;
	}
	return 0;
}
