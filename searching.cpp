#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int i;
  int n;
  int cari,ketemu=0;
  int A[100];
  
  cout<<"SEARCH\n";
  cout<<"--------------------------"<<endl;
  cout<<"Masukan Banyak Data : ";
  cin>>n;
  cout<<endl;

  for (i=1;i<=n;i++)
  {
	cout<<"Masukan Data Ke-"<<i<<" : ";
	cin>>A[i];
  }
  cout<<endl;
  cout<<"Input Bilangan yang dicari : ";
  cin>>cari;
  cout<<"--------------------------"<<endl;
  cout<<endl;
  
  for(i=0;i<=n;i++)
  {
	  if (A[i]==cari)
	  {
		  ketemu=1;
		  cout<<"Data Ditemukan Pada Indeks Ke-"<<i;
	  }
  }
  if (ketemu==0)
  {
  	cout<<"Data tidak ditemukan";
  }
  getch();
  }
