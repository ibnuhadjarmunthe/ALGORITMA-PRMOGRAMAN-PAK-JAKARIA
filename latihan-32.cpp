#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
 float luas ( float panjang , float lebar);
 int main ()
 
 {
 	float panjang_se,lebar_se,luas_se;
 	
 	cout <<"Program menghitung luas segiempat \n";
 	
 	/* Input panjang dan lebar */
 	cout << "\n\t panjang : ";
 	cin>> panjang_se;
 	cout << "\n\t lebar  : ";
 	cin>> lebar_se;
 	/* menghitung luas segi empat */
 	luas_se = luas(panjang_se, lebar_se);
 	cout << "\n\n luas segiempat = "<< luas_se;
 }
 
 float luas (float panjang_ , float lebar) //float lebih baik di bedakan karna mungkin bakal membingungkan
 {
 	return (panjang * lebar);
 }
