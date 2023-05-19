#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int game;
    
	cout<<"*********MOHAMAD ILMAN HUDA - 201011402171***********"<<endl;
    cout<<"*********DAFTAR GAME***********"<<endl;
    cout<<"1. Mobile Legends "<<endl;
    cout<<"2. PUBG Mobile "<<endl;
    cout<<"3. Amoung Us "<<endl;
    cout<<"---------------------------------------"<<endl;

    cout<<"Masukan Nama Game Pilihan = ";
    cin>>game;

    switch(game) {
    case 1 :
	 	cout<<"Game yang anda pilih adalah Mobile Legends"; 
	 	break;
    case 2 : 
		cout<<"Game yang anda pilih adalah PUBG Mobile"; 
		break;
    case 3 : 
		cout<<"Game yang anda pilih adalah Amoung Us"; 
		break;

    default : 
	cout<<"Game tidak tersedia";
    }
    getch();
}
