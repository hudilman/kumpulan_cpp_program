#include<iostream>
#include <conio.h>
using namespace std;

int penjumlahan(long int a,long int b){
	int hasil=a+b;
    return hasil;
}

int pengurangan(long int a,long int b){
	int hasil=a-b;
    return hasil;
}



void menu (){
	cout<<"Kalkulator Sederhana\n";
	cout<<"=========================================\n";
	cout<<"1. Perjumlahan\n";
	cout<<"2. Pengurangan\n";
}
int main()
{
    int ulangi =0;
    char lagi='y';
    do {
	     system("cls");
		 int gol;
		 int a,b;
		 
		 menu();
		 cout<<"\nPilih : ";cin>>gol;
		 cout<<endl<<"-----------------------------------------";
		 cout<<endl;
		 if(gol == 1){
		 	cout<<"Bilangan Pertama : ";cin>>a;
		    cout<<endl;
		    cout<<"Bilangan Kedua : ";
		    cin>>b;
		    cout<<"\nTotal nya adalah = "<<penjumlahan(a,b)<<endl<<endl;
		 }else{
		 	cout<<"Bilangan Pertama : ";cin>>a;
		    cout<<endl;
		    cout<<"Bilangan Kedua : ";
		    cin>>b;
		    cout<<"\nTotal nya adalah = "<<pengurangan(a,b)<<endl<<endl;
		 }
		 
    
		cout<<"Hitung Lagi  ( Y / T )  : "; cin >> lagi;
		ulangi++;
	}
	while(lagi=='y' || lagi=='Y');
	
	cout << "___________________"<<endl;
    cout<<"Selesai !"<<endl;
    return 0;
}
