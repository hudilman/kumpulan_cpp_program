#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

struct nasabah {
    char *nama;
    long int norek;
    double saldo;
}

;

int main() {
    int n=0;
    nasabah nas[50];
    char nama_baru[50];
    int i,pil,x,pos;
    long int no;
    double setor,tarik;
    bool ketemu=false;
    menu:
    system("cls");
    cout<<"Nama : Mohamad Ilman Huda"<<endl;
    cout<<"NIM  : 201011402171"<<endl;
    cout<<"Kelas : 02TPLE007"<<endl;
    
    cout<<" ____________________________________________________ "<<endl;
    cout<<"|                   Bank Anti Riba                   |"<<endl;
    cout<<"|____________________________________________________|"<<endl;
    cout<<"|___________________Menu Transaksi___________________|"<<endl;
    cout<<"|    1. Pendaftaran Nasabah                          |"<<endl;
    cout<<"|    2. Melihat                                      |"<<endl;
    cout<<"|    3. Setor Dana                                   |"<<endl;
    cout<<"|    4. Tarik Dana		                            |"<<endl;
    cout<<"|    5. Ubah Nama                                    |"<<endl;
    cout<<"|    6. Berhenti                                     |"<<endl;
    cout<<"|____________________________________________________|"<<endl;
    cout<<" Pilihan Anda : ";
    cin>>pil;

    if(pil==1) {
        lagi:
            cout<<endl;
        cout<<"======================================================"<<endl;
        cout<<" Masukan Nomer Rekening : ";
        cin>>no;

        for(i=0; i<n; i++) {
            if(no==nas[i].norek) ketemu=true;
            else ketemu=false;
        }

        if(ketemu) {
            cout<<" Nomer Rekening Tersebut Sudah Ada, Ulangi Lagi"<<endl;
            goto lagi;
        }

        else {
            cout<<"======================================================"<<endl;
            cout<<" Masukan Nama Anda      : ";
            cin>>nas[n].nama;
            cout<<" Masukan Saldo Awal     : Rp.";
            cin>>nas[n].saldo;
        }

        n=n+1;
        nas[i].norek=no;
        cout<<"======================================================"<<endl;
        cout<<" Masukan Sembarang Angka Untuk Kembali Ke Menu Utama : ";
        cin>>x;
        goto menu;
    }
    else if(pil==2) {
        cout<<endl;
        cout<<"======================================================"<<endl;
        cout<<" Masukan Nomer Rekening Yang Akan Dicari : ";
        cin>>no;
        cout<<endl;

        for(i=0; i<n; i++) {
            if(no==(nas[i].norek)) {
                pos=i;
                ketemu=true;
                break;
            }

            else ketemu=false;
        }

        if(ketemu) {
            cout<<" Nomer Rekening            : "<<nas[pos].norek<<endl;
            cout<<" Nama Nasabah              : "<<nas[pos].nama<<endl;
            cout<<" Saldo                     : Rp."<<nas[pos].saldo<<endl;
        }

        else cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
        cout<<" Masukan Sembarang Angka Untuk Kembali Ke Menu Utama : ";
        cin>>x;
        goto menu;
    }
    else if(pil==3) {
        cout<<endl;
        cout<<"======================================================"<<endl;
        cout<<" Masukan Nomer Rekening  : ";
        cin>>no;

        for(i=0; i<n; i++) {
            if(no==(nas[i].norek)) {
                pos=i;
                ketemu=true;
                break;
            }

            else ketemu=false;
        }

        if(ketemu) {
            cout<<"======================================================"<<endl;
            cout<<" Masukan Nominal Setoran : Rp.";
            cin>>setor;
            nas[pos].saldo=nas[pos].saldo+setor;
            cout<<" Setoran Behasil"<<endl;
            cout<<" Nomer Rekening            : "<<nas[pos].norek<<endl;
            cout<<" Nama Nasabah              : "<<nas[pos].nama<<endl;
            cout<<" Jumlah Saldo Anda       : Rp."<<nas[pos].saldo<<endl;
            cout<<endl;
        }

        else cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
        cout<<" Masukan Sembarang Angka Untuk Kembali Ke Menu Utama : ";
        cin>>x;
        goto menu;
    }

    else if(pil==4) {
        cout<<endl;
        cout<<"======================================================"<<endl;
        cout<<" Masukan Nomer Rekening   : ";
        cin>>no;

        for(i=0; i<n; i++) {
            if(no==(nas[i].norek)) {
                pos=i;
                ketemu=true;
                break;
            }

            else ketemu=false;
        }

        if(ketemu) {
            cout<<"======================================================"<<endl;
            cout<<" Masukan Jumlah Penarikan : Rp.";
            cin>>tarik;

            if(tarik<(nas[pos].saldo)) {
                nas[pos].saldo=nas[pos].saldo-tarik;
                cout<<" Penarikan Berhasil"<<endl;
                cout<<" Nomer Rekening            : "<<nas[pos].norek<<endl;
            	cout<<" Nama Nasabah              : "<<nas[pos].nama<<endl;
                cout<<" Sisa Saldo Anda          : Rp."<<nas[pos].saldo<<endl;
                cout<<endl;
            }

            else cout<<" Maaf Saldo Anda Tidak Mencukupi"<<endl;
        }

        else cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
        cout<<" Masukan Sembarang Angka Untuk Kembali Ke Menu Utama : ";
        cin>>x;
        goto menu;
    }
    else if(pil==5) {
        cout<<endl;
        cout<<"======================================================"<<endl;
        cout<<" Masukan Nomer Rekening   : ";
        cin>>no;

        for(i=0; i<n; i++) {
            if(no==(nas[i].norek)) {
                pos=i;
                ketemu=true;
                break;
            }

            else ketemu=false;
        }

        if(ketemu) {
            cout<<"======================================================"<<endl;
            cout<<" Masukan nama baru kamu :";
            cin>>nama_baru;
            nas[pos].nama=nama_baru;
            cout<<" Penarikan Berhasil"<<endl;
            cout<<" Nomer Rekening            : "<<nas[pos].norek<<endl;
            cout<<" Nama Nasabah              : "<<nas[pos].nama<<endl;
            cout<<" Sisa Saldo Anda          : Rp."<<nas[pos].saldo<<endl;
            cout<<endl;
        }

            
        

        else cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
        cout<<" Masukan Sembarang Angka Untuk Kembali Ke Menu Utama : ";
        cin>>x;
        goto menu;
    }

    else {
        cout<<endl<<" Terima Kasih Telah Bertransaksi Disini......"<<endl<<endl;
    }

    return 0;
}
