#include<iostream> 

using namespace std; 
main()
{
	cout << "========================================"<<endl;
	cout << "--------Mohamad Ilman Huda-------------"<<endl;
	cout << "-------------201011402171--------------"<<endl;
	cout << "--------TUGAS AKHIR PERTEMUAN 2--------"<<endl;
	cout << "========================================"<<endl;
	int jari;
	long int luas,volume; float pi=3.14;
	
	cout<<("menghitung luas permukaan bola:")<<endl; cout<<endl;
	cout<<("masukan jari jari:"); cin>>jari; 
	
	volume=(4*pi*jari*jari*jari)/3; 
	luas=4*pi*jari*jari; 
	cout<<endl;
	
	cout<<("volume bola adalah:")<<volume; 
	cout<<endl;
	cout<<("luas bola adalah:")<<luas; return 0;
}

