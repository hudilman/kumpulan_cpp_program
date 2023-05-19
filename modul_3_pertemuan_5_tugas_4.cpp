#include<iostream>
#include<cstdlib>

using namespace std;

	void input_array(int bil[],int data)
	{
	
		for(int i=0;i<data;i++)
		{
			cout<<"Nilai bil[";cout<<i+1<<"] : ";
			cin>>bil[i];
		}
	}

	int jumlah_elemen(int bil[],int data)
	{
		int jumlah;
		for(int i=0;i<data;i++)
		{
			jumlah=jumlah+bil[i];
		}
		return jumlah;
	}

int main(int argc,char*argv[])
{
	int bil[100];
	int data;
	int jumlah;

	cout<<"masukan berapa elemen data: ";
	cin>>data;
	cout<<endl;
	input_array(bil,data);
	jumlah=jumlah_elemen(bil,data);
	cout<<endl;
	cout<<"Hasil penjumlahan elemen : "<<jumlah<<endl<<endl;
	return EXIT_SUCCESS;
}
