#include<cstdlib>
#include<iostream>

using namespace std;

typedef struct //deklarasistructpertama
{
	int tanggal;
	int bulan;
	int tahun;
}data_tanggal;

typedef struct //deklarasistructdalamstruct
{
	long int nip;
	char nama[30];
	char alamat[50];
	data_tanggal tanggal_lahir;
}data_mahasiswa;

data_mahasiswa mahasiswa;

int main(int argc,char*argv[])
{ //input
cout<<"NIP :";cin>>mahasiswa.nip;
cout<<"Nama :";fflush(stdin);cin.get(mahasiswa.nama,30);
cout<<"Alamat :";fflush(stdin);cin.get(mahasiswa.alamat,50);
cout<<"Tanggal lahir :";cin>>mahasiswa.tanggal_lahir.tanggal;

cout<<"Bulan lahir :";cin>>mahasiswa.tanggal_lahir.bulan;
cout<<"tahun lahir :";cin>>mahasiswa.tanggal_lahir.tahun;
cout<<endl<<endl;
cout<<"NIP :"<<mahasiswa.nip<<endl;
cout<<"Nama :"<<mahasiswa.nama<<endl;
cout<<"Alamat:"<<mahasiswa.alamat<<endl;
cout<<"Tanggal Lahir:"<<mahasiswa.tanggal_lahir.tanggal<<endl;
cout<<"Bulan Lahir :"<<mahasiswa.tanggal_lahir.bulan<<endl;
cout<<"Tahun Lahir :"<<mahasiswa.tanggal_lahir.tahun<<endl;
cout<<endl<<endl;
return EXIT_SUCCESS;
}
