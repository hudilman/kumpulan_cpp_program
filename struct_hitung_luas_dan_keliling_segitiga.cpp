#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct luass{
    float a, t, luas;
} L;

float meng_luas(){
	L.luas= L.a * L.t / 2;
	cout<<"Luas segitiganya adalah = "<< L.luas <<endl;
}

struct keliling{
    float s1, s2, s3, kel;
} K;

void meng_kel(){
	K.kel=K.s1+K.s2+K.s3;
	cout<<"Keliling segitiganya adalah = "<< K.kel <<endl;
}

int main()
{
	int pilih;

	cout<<"======================================="<<endl;
	cout<<"1. Menghitung Luas Segitiga"<<endl;
	cout<<"2. Menghitung Keliling Segitiga"<<endl;
	cout<<"======================================="<<endl;

	cout<<"Masukan Pilihan = ";
	cin>>pilih;
	cout<<"======================================="<<endl;

	switch(pilih) {
		case 1 :
			system("CLS");
			cout<<"Menghitung Luas Segitiga"<<endl;
			cout<<"========================"<<endl<<endl;
			cout<<"Masukkan alas (cm) = ";
			cin>>L.a;
			cout<<"Masukkan tinggi (cm) = ";
			cin>>L.t;
			cout<<"========================"<<endl;
			meng_luas();
		break;

		case 2 :
			system("CLS");
			cout<<"Menghitung Keliling Segitiga"<<endl;
			cout<<"============================"<<endl<<endl;
			cout<<"Masukkan sisi 1 (cm) = ";
			cin>>K.s1;
			cout<<"Masukkan sisi 2 (cm) = ";
			cin>>K.s2;
			cout<<"Masukkan sisi 3 (cm) = ";
			cin>>K.s3;
			cout<<"============================"<<endl;
			meng_kel();
		break;

		default :
			cout<<"Pilihan tidak tersedia";
	}

	getch();
	return 0;
}

