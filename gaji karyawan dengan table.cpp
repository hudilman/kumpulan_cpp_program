#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
using namespace std;
struct Employee_str
{
 char Name[25],status[15];
 int anak,gaji;
 char jmlh[2];
};
int main()
{

 cout<<"\t\t\t\tPERTEMUAN XI\n";
 cout<<"\t\t\t\t(STRUCTURE)\n";
 cout<<"===============================================================================\n";
 cout<<"- PROGRAM MENCATAT DATA KARYAWAN (BENTUK TABEL/ARRAY) -\n";
 cout<<"===============================================================================\n";
 Employee_str employee[5];
 int loop;
 for(loop=1;loop<5;loop++)
 {
  cout<<"Karyawan (1,2,3,dst)           : ";
  cin.getline(employee[loop].jmlh,80.);
  cout<<"Nama Karyawan "<<"                 : ";
  cin.getline(employee[loop].Name,80.);
  cout<<"Gaji/Bulan (UMR Sekarang)      : ";
  cin>>employee[loop].gaji;
  cin.ignore(80,'\n');
  cout<<"Status (Menikah/Belum Menikah) : ";
  cin.getline(employee[loop].status,80.);
  cout<<"Anak (Isi Jika Sudah Menikah)  : ";
  cin>>employee[loop].anak;
  cin.ignore(80,'\n');
  cout<<endl;
 }
//system ("PAUSE");
//system ("CLS");
//system ("COLOR 2B");
  cout<<"\nData Karyawan : \n";
  cout.flags(ios::left);
  cout<<setw(15)<<"No Nama  Gaji  Status  Anak\n";
  cout<<"====================================================================\n";
 for(loop=1;loop<5;loop++)
 {
  cout<<setiosflags(ios::left)<<setw(8)<<loop;
  cout<<setiosflags(ios::left)<<setw(16)<<employee[loop].Name;
  cout<<setiosflags(ios::left)<<setw(16)<<employee[loop].gaji;
  cout<<setiosflags(ios::left)<<setw(16)<<employee[loop].status;
  cout<<setiosflags(ios::left)<<setw(12)<<employee[loop].anak;
  cout<<endl;
 }
 cout<<endl;
getch();
return 0;
}
