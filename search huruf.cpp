#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    cout<<"    Program Mencari Data Pada Kalimat\n";
    cout<<"============================================\n";
    char kata[100];
    cout<<"Masukkan Kalimat (max 100 karakter) : ";gets(kata);
    cout<<"--------------------------------------------\n";

    int a=strlen(kata),vokal=0,konso=0,tot=0;

    cout<<"Vokal    : ";
    for(int i=0;i<a;i++){
        if(kata[i]=='a' || kata[i]=='A' || kata[i]=='i' || kata[i]=='I' || kata[i]=='u' || kata[i]=='U' || kata[i]=='e' || kata[i]=='E' || kata[i]=='o' || kata[i]=='O')
        {
           cout<<kata[i]<<" ";
           vokal+=1;
        }
    }cout<<" = "<<vokal<<endl;

    cout<<"Konsonan : ";
    for(int i=0;i<a;i++){
        if(kata[i]==' '){
            //kosongkan untuk spasi
        }

        else if(kata[i]!='a' && kata[i]!='A' && kata[i]!='i' && kata[i]!='I' && kata[i]!='u' && kata[i]!='U' && kata[i]!='e' && kata[i]!='E' && kata[i]!='o' && kata[i]!='O')
        {
           cout<<kata[i]<<" ";
           konso+=1;
        }
    }cout<<" = "<<konso<<endl;
    char cari;
    cout<<"\nMasukkan data yang ingin anda cari : ";cin>>cari;
    cout<<"--------------------------------------------\n";

    for(int i=0;i<a;i++){
        if(kata[i]==cari){
            cout<<"Data "<<cari<<" ditemukan pada urutan ke-"<<i+1<<endl;
            tot+=1;
        }
    }
    cout<<"============================================\n";
    if(tot!=0){
        cout<<"Data "<<cari<<" berjumlah "<<tot;
    }
    else{
        cout<<"Data tidak ditemukan!!!";
    }
    getch();
}
