#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct
{
	int bil_a;
	int bil_b;
}data_bilangan;

void tampil_bilangan(data_bilangan bilangan)
{
	cout<<"Bilangan satu : ";
	cout<<bilangan.bil_a<<endl;
	cout<<"Bilangan dua : ";
	cout<<bilangan.bil_b<<endl;
}

int main(int argc,char*argv[])
{
	data_bilangan bilangan;
	cout<<"Masukan bilangan ke satu : ";
	cin>>bilangan.bil_a;
	cout<<"Masukan bilangan dua :";
	cin>>bilangan.bil_b;
	cout<<endl;
	tampil_bilangan(bilangan);
	return EXIT_SUCCESS;
}
