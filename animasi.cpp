#include<iostream>
#include<conio.h>
using namespace std;

int main(){
 int gol;
 char nama[25];
 long int gaji;
 long int ti;
 long int ta;
 long int total;
 
 cout<<"\t\tMenu\n";
 cout<<"\t=========================================\n";
 cout<<"\t1. Belum Menikah\n";
 cout<<"\t2. Sudah Menikah\n";
 cout<<"\t3. Sudah Menikah + Anak 1\n";
 cout<<"\t4. Sudah Menikah + Anak 2 atau lebih\n";
 cout<<"\n\tMasukkan Golongan 1/2/3/4 : ";cin>>gol;
 cout<<endl<<"\t-----------------------------------------";
 cout<<endl;
 switch(gol){
  case 1:{cout<<"\tMasukan Nama Anda : ";cin>>nama;
    cout<<endl;
    cout<<"\tMasukkan Gaji pokok : ";
    cin>>gaji;
    cout<<"\t-----------------------------------------\n";
    total=gaji;
    cout<<"\tNama Anda : "<<nama;
    cout<<endl;
    cout<<endl<<"\tTotal Upah Anda : "<<total;
   break;
  }
  case 2:{cout<<"\tMasukan Nama Anda : ";cin>>nama;
    cout<<endl<<"\tMasukkan Gaji pokok : ";
    cin>>gaji;
    cout<<"\t-----------------------------------------\n";
    ti=gaji*10/100;
    total=gaji+ti;
    cout<<"\tNama Anda : "<<nama;
    cout<<endl;
    cout<<endl<<"\tTotal Upah Anda : "<<total;
   break;
  }
  case 3:{cout<<"\tMasukan Nama Anda : ";cin>>nama;
    cout<<endl<<"\tMasukkan Gaji pokok : ";
    cin>>gaji;
    cout<<"\t-----------------------------------------\n";
    ti=gaji*10/100;
    ta=gaji*10/100;
    total=gaji+ti+ta;
    cout<<"\tNama Anda : "<<nama;
    cout<<endl;
    cout<<endl<<"\tTotal Upah Anda : "<<total;
   break;
  }
  case 4:{cout<<"\tMasukan Nama Anda : ";cin>>nama;
    cout<<endl<<"\tMasukkan Gaji pokok : ";
    cin>>gaji;
    cout<<"\t-----------------------------------------\n";
    ti=gaji*10/100;
    ta=gaji*20/100;
    total=gaji+ti+ta;
    cout<<"\tNama Anda : "<<nama;
    cout<<endl;
    cout<<endl<<"\tTotal Upah Anda : "<<total;
   break;
  }
  default :{cout<<endl<<"\tInputan Anda Salah !!";
   break;
  }
 }
 cout<<endl<<"\t-----------------------------------------";
 cout<<endl<<endl;
}
