#include<iostream>
#include<stdio.h>
using namespace std;

int H(const char*s){

int x = 0;
for (;*s!='\0';s++)
++x;
return x;
}
main (void){
cout<<endl;
cout<<"  Nama        : Mohamad Ilman Huda "<<endl;
cout<<"  Kelas       : 02TPLE007 "<<endl;
cout<<"  Mata Kuliah : Praktikum Algoritma & Pemrograman"<<endl;
cout<<endl;
char String [80];
cout<<"  Inputlah Sebuah Kata      : ";
cin.getline(String,100);cout<<endl;
cout<<"  Jumlah Karakternya Adalah : "<<H(String)<<" Huruf "<<endl;
}
