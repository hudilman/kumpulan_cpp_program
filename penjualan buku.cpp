#include <iostream>
#include <string.h>
using namespace std;
 
int main( ){
    string kode,kode_diskon,nama_buku;
    long harga=0;
 	
 	cout << "========================================"<<endl;
	cout << "--------Mohamad Ilman Huda-------------"<<endl;
	cout << "-------------201011402171--------------"<<endl;
	cout << "--------TUGAS PENDAHULUAN PERTEMUAN 3--------"<<endl;
	cout << "========================================"<<endl;
 	
    cout<<"Kode Buku : ";cin>>kode;
    cout<<"Kode Diskon : ";cin>>kode_diskon;
    
    if (kode == "BRG001"){
        nama_buku = "Bahasa pemrograman DART";
        if (kode_diskon== "HEMATINAJA" || kode_diskon == "hematinaja"){
           harga=45000;
        } else {
           harga = 50000;
        }
    } else if (kode== "BRG002") {
        nama_buku = "Judul Buku = 1 HARI MENJADI HACKER";
        if (kode_diskon == "HEMATINDUA" || kode_diskon == "hematindua"){
           harga=65000;
        } else {
           harga = 70000;
        }
    } else {
        cout<<"Salah Kode Buku"<<endl;
    }
    
    cout<<"----------------------"<<endl;
    cout<<"Judul Buku : "<<nama_buku<<endl;
    cout<<"Harga Buku : "<<harga<<endl;
    return 0;
}
