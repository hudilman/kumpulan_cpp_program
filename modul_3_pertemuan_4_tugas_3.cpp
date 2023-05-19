#include<cstdlib>
#include<iostream>

using namespace std;

typedef struct
{
	long int nip;
	char nama[30];
	char alamat[50];
}data_dosen;

//Arrayofstruct
data_dosen dosen[10];

int main(int argc,char*argv[])
{
	int i,j;
	cout<<"berapa data dosen?";
	cin>>j;
	cout<<endl;
	
	for(i=0;i<j;i++)
	{ 
		cout<<"Data dosen ke-"<<i+1<<endl;
		cout<<"======================================"<<endl;
		cout<<"NIP :";cin>>dosen[i].nip;
		cout<<"Nama :";fflush(stdin);cin.get(dosen[i].nama,30);
		cout<<"Alamat :";fflush(stdin);cin.get(dosen[i].alamat,50);
		cout<<endl<<endl;
	}
	
	return EXIT_SUCCESS;
}
