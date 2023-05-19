#include<iostream>
#include<string.h>
using namespace std;
 main()
{   
	char asal[100];   
	char hasil[100];    
	cout<<"Masukan kalimat : ";
	gets(asal);   
	cout<<"Kalimat asli  : "<<asal<<endl;
	cout<<"Kalimat copy : "<<strcpy(hasil,asal); 
}
