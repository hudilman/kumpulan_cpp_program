#include <iostream>
#include<stdio.h>
#include <conio.h>

using namespace std;

int main()
{
 int data[9] = {122,133,134,144,155,165,177,178,198};
 int cari_data, posisi, awal, akhir, proses;
 bool berhenti = false;

	cout << "MOHAMAD ILMAN HUDA"<<endl;
	cout << "201011402171"<<endl;
	
	cout << "\n LIST DATA : \n";	
	for (int i = 0; i < 9; i++) {
    	
		cout <<data[i]<<endl;
		
	}
	cout << "\n\nData Yang ingin dicari : ";
	cin >> cari_data;

 awal = 0;
 akhir = 8;
 proses = 0;

 while(berhenti != true)
 {
  proses++;
  posisi = (((cari_data-data[awal])*(akhir-awal))/(data[akhir]-data[awal])+awal);

  if(data[posisi] == cari_data) {
   cout << "Data " << cari_data << " pada posisi " << posisi <<endl;
   cout << "Proses pencarian sebanyak " << proses <<endl;
   berhenti = true;
  }

  else if(data[posisi] < cari_data) {
   awal = posisi + 1;
  }else if(data[posisi] > cari_data) {
  	awal = posisi - 1;
  }

  else {
   cout << "Data " << cari_data << "Tidak ditemukan.\n";
   berhenti = true;
  }
 }

 getch();
    return 0;
}
   

