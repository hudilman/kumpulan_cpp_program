#include<iostream>
#include <conio.h>
using namespace std;

int total_gaji(long int a,long int b){
	int hasil=a+b;
    return hasil;
}
void menu_golongan (){
	cout<<"Pilih Golongan di bawah ini\n";
	cout<<"=========================================\n";
	cout<<"1. Belum Menikah\n";
	cout<<"2. Sudah Menikah\n";
}
int main()
{
    int ulangi =0;
    char lagi='y';
    do {
	     system("cls");
		 int gol;
		 char nama[25];
		 long int gaji;
		 long int ti;
		 long int ta;
		 long int total;
		 
		 menu_golongan();
		 cout<<"\nMasukkan Golongan 1/2/ : ";cin>>gol;
		 cout<<endl<<"-----------------------------------------";
		 cout<<endl;
		 if(gol == 1){
		 	cout<<"Masukan Nama Anda : ";cin>>nama;
		    cout<<endl;
		    cout<<"Masukkan Gaji pokok : ";
		    cin>>gaji;
		    cout<<"-----------------------------------------\n";
		    ti=0;
		    total=total_gaji(gaji,ti);
		    cout<<"Nama Anda : "<<nama;
		    cout<<endl;
		    cout<<endl<<"Total Upah Anda : "<<total<<endl;
		    cout<<"-----------------------------------------\n";
		 }else{
		 	cout<<"Masukan Nama Anda : ";cin>>nama;
		    cout<<endl<<"Masukkan Gaji pokok : ";
		    cin>>gaji;
		    cout<<"-----------------------------------------\n";
		    ti=gaji*10/100;
		    total=total_gaji(gaji,ti);
		    cout<<"Nama Anda : "<<nama;
		    cout<<endl;
		    cout<<endl<<"Total Upah Anda : "<<total<<endl;
		    cout<<"-----------------------------------------\n";
		 }
		 
    
		cout<<"Cek Gaji Karyawan lagi  ( Y / T )  : "; cin >> lagi;
		ulangi++;
	}
	while(lagi=='y' || lagi=='Y');
	
	cout << "___________________"<<endl;
    cout<<"Terima Kasih !"<<endl;
    return 0;
}
