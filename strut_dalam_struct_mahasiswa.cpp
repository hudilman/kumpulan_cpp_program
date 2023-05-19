#include <cstdlib> 
#include <iostream> 
using namespace std;
typedef struct // deklarasi struct pertama 
{ 
	int tanggal; 
	int bulan; 
	int tahun; 
} data_tanggal; 

typedef struct // deklarasi struct dalam struct 
{ 
	long int nim; 
	char nama[30]; 
	char alamat[50]; 
	data_tanggal tanggal_lahir; 
} data_mhs;

data_mhs mhs;

int main(int argc, char*argv[]) 
{
// input 
	cout<<"NIM: "; cin>>mhs.nim; 
	cout<<"Nama: ";fflush(stdin); cin>>mhs.nama; 
	cout<<"Alamat: ";fflush(stdin); cin>>mhs.alamat; 
	cout<<"Tanggal lahir: "; cin>>mhs.tanggal_lahir.tanggal; 
	cout<<"Bulan lahir: "; cin>>mhs.tanggal_lahir.bulan; 
	cout<<"tahun lahir: "; cin>>mhs.tanggal_lahir.tahun; 
	cout<<endl<<endl;
	cout<<"=========================================="<<endl<<endl;
	cout<<"DATA MAHASISWA"<<endl<<endl;
	cout<<"NIM: "<<mhs.nim<<endl; 
	cout<<"Nama: "<<mhs.nama<<endl; 
	cout<<"Alamat: "<<mhs.alamat<<endl; 
	cout<<"Tanggal Lahir: "<<mhs.tanggal_lahir.tanggal<<endl; 
	cout<<"Bulan Lahir: "<<mhs.tanggal_lahir.bulan<<endl; 
	cout<<"Tahun Lahir: "<<mhs.tanggal_lahir.tahun<<endl;
	return EXIT_SUCCESS; 
}

