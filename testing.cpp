#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

struct nasabah {
	int norekg;
    char *nama;
    double saldo;
};

void menu(){
	system("cls");
    cout<<"Nama : Mohamad Ilman Huda"<<endl;
    cout<<"NIM  : 201011402171"<<endl;
    cout<<"Kelas : 02TPLE007"<<endl;
    
    cout<<" ____________________________________________________ "<<endl;
    cout<<"|                   Bank Anti Riba                   |"<<endl;
    cout<<"|____________________________________________________|"<<endl;
    cout<<"|___________________Menu Transaksi___________________|"<<endl;
    cout<<"|    1. Melihat                                      |"<<endl;
    cout<<"|    2. Setor Dana                                   |"<<endl;
    cout<<"|    3. Tarik Dana		                            |"<<endl;
    cout<<"|    4. Ubah Nama                                    |"<<endl;
    cout<<"|    5. Berhenti                                     |"<<endl;
    cout<<"|____________________________________________________|"<<endl;
}

int main() {
	nasabah ns,nd,nt,ne,nl;
	// Nasabah Satu
	ns.nama = "Ilman Huda";
	ns.norekg = 220099;
	ns.saldo = 500000;
	
	// Nasabah Dua
	nd.nama = "Nanda";
	nd.norekg = 199090;
	nd.saldo = 400000;
	
	// Nasabah Tiga
	nt.nama = "Rizki";
	nt.norekg = 787890;
	nt.saldo = 300000;
	
	// Nasabah Empat
	ne.nama = "Rara";
	ne.norekg = 550088;
	ne.saldo = 200000;
	
	// Nasabah Lima
	nl.nama = "Joko";
	nl.norekg = 500909;
	nl.saldo = 50000;	
	
	int ulangi =0;
    char lagi='y';
    do {
    	int n=0;
	    nasabah nas[50];
	    char nama_baru[50];
	    int i,pil,x,pos,cek_norekg;
	    long int no;
	    double setor,tarik;
	    bool ketemu=false;
    	
		menu();
    	cout<<" Pilihan Anda : ";
    	cin>>pil;
    	
    	if(pil == 1){
    		cout<<" Masukan Nomer Rekening : ";
			cin>>cek_norekg;
			
			if(cek_norekg == ns.norekg){
				
				cout<<" Nomer Rekening :"<<ns.norekg<<endl;
				cout<<" Nama :"<<ns.nama<<endl;
				cout<<" Saldo :"<<ns.saldo<<endl;
				
			}else if(cek_norekg == nd.norekg){
				
				cout<<" Nomer Rekening :"<<nd.norekg<<endl;
				cout<<" Nama :"<<nd.nama<<endl;
				cout<<" Saldo :"<<nd.saldo<<endl;
				
			}else if(cek_norekg == nt.norekg){
				
				cout<<" Nomer Rekening :"<<nt.norekg<<endl;
				cout<<" Nama :"<<nt.nama<<endl;
				cout<<" Saldo :"<<nt.saldo<<endl;
				
			}else if(cek_norekg == ne.norekg){
				
				cout<<" Nomer Rekening :"<<ne.norekg<<endl;
				cout<<" Nama :"<<ne.nama<<endl;
				cout<<" Saldo :"<<ne.saldo<<endl;
				
			}else if(cek_norekg == nl.norekg){
				
				cout<<" Nomer Rekening :"<<nl.norekg<<endl;
				cout<<" Nama :"<<nl.nama<<endl;
				cout<<" Saldo :"<<nl.saldo<<endl;
				
			}else{
				cout<<" Nomer Rekening tidak di temukan"<<endl;
			}
		}
		else if(pil == 2){
    		cout<<" Masukan Nomer Rekening : ";
			cin>>cek_norekg;
						
			if(cek_norekg == ns.norekg){
				
				cout<<"Masukan Nominal Setoran : Rp.";
				cin>>setor;	
				cout<<" Nomer Rekening :"<<ns.norekg<<endl;
				cout<<" Nama :"<<ns.nama<<endl;
				cout<<" Saldo :"<<ns.saldo+setor<<endl;
				
			}else if(cek_norekg == nd.norekg){
				
				cout<<"Masukan Nominal Setoran : Rp.";
				cin>>setor;	
				cout<<" Nomer Rekening :"<<nd.norekg<<endl;
				cout<<" Nama :"<<nd.nama<<endl;
				cout<<" Saldo :"<<nd.saldo+setor<<endl;
				
			}else if(cek_norekg == nt.norekg){
				
				cout<<"Masukan Nominal Setoran : Rp.";
				cin>>setor;	
				cout<<" Nomer Rekening :"<<nt.norekg<<endl;
				cout<<" Nama :"<<nt.nama<<endl;
				cout<<" Saldo :"<<nt.saldo+setor<<endl;
				
			}else if(cek_norekg == ne.norekg){
				
				cout<<"Masukan Nominal Setoran : Rp.";
				cin>>setor;	
				cout<<" Nomer Rekening :"<<ne.norekg<<endl;
				cout<<" Nama :"<<ne.nama<<endl;
				cout<<" Saldo :"<<ne.saldo+setor<<endl;
				
			}else if(cek_norekg == nl.norekg){
				
				cout<<"Masukan Nominal Setoran : Rp.";
				cin>>setor;	
				cout<<" Nomer Rekening :"<<nl.norekg<<endl;
				cout<<" Nama :"<<nl.nama<<endl;
				cout<<" Saldo :"<<nl.saldo+setor<<endl;
				
			}else{
				cout<<" Nomer Rekening tidak di temukan"<<endl;
			}
		}
		else if(pil == 3){
    		cout<<" Masukan Nomer Rekening : ";
			cin>>cek_norekg;
						
			if(cek_norekg == ns.norekg){
				
				cout<<"Masukan Jumlah Penarikan : Rp.";
				cin>>tarik;	
				if(tarik < ns.saldo){
					cout<<" Nomer Rekening :"<<ns.norekg<<endl;
					cout<<" Nama :"<<ns.nama<<endl;
					cout<<" Saldo :"<<ns.saldo+setor-tarik<<endl;
				}else{
					cout<<"Saldo anda tidak mencukupi"<<endl;
				}
				
			}else if(cek_norekg == nd.norekg){
				
				cout<<"Masukan Jumlah Penarikan : Rp.";
				cin>>tarik;	
				if(tarik < nd.saldo){
					cout<<" Nomer Rekening :"<<nd.norekg<<endl;
					cout<<" Nama :"<<nd.nama<<endl;
					cout<<" Saldo :"<<nd.saldo+setor-tarik<<endl;
				}else{
					cout<<"Saldo anda tidak mencukupi"<<endl;
				}
				
			}else if(cek_norekg == nt.norekg){
				
				cout<<"Masukan Jumlah Penarikan : Rp.";
				cin>>tarik;	
				if(tarik < nt.saldo){
					cout<<" Nomer Rekening :"<<nt.norekg<<endl;
					cout<<" Nama :"<<nt.nama<<endl;
					cout<<" Saldo :"<<nt.saldo+setor-tarik<<endl;
				}else{
					cout<<"Saldo anda tidak mencukupi"<<endl;
				}
				
			}else if(cek_norekg == ne.norekg){
				
				cout<<"Masukan Jumlah Penarikan : Rp.";
				cin>>tarik;	
				if(tarik < ne.saldo){
					cout<<" Nomer Rekening :"<<ne.norekg<<endl;
					cout<<" Nama :"<<ne.nama<<endl;
					cout<<" Saldo :"<<ne.saldo+setor-tarik<<endl;
				}else{
					cout<<"Saldo anda tidak mencukupi"<<endl;
				}
				
			}else if(cek_norekg == nl.norekg){
				
				cout<<"Masukan Jumlah Penarikan : Rp.";
				cin>>tarik;	
				if(tarik < nl.saldo){
					cout<<" Nomer Rekening :"<<nl.norekg<<endl;
					cout<<" Nama :"<<nl.nama<<endl;
					cout<<" Saldo :"<<nl.saldo+setor-tarik<<endl;
				}else{
					cout<<"Saldo anda tidak mencukupi"<<endl;
				}
				
			}else{
				cout<<" Nomer Rekening tidak di temukan"<<endl;
			}
		}
		else if(pil == 4){
			cout<<" Masukan Nomer Rekening : ";
			cin>>cek_norekg;
			
			if(cek_norekg == ns.norekg){
				
				cout<<" Masukan Nama Baru :";
				cin>>nama_baru;
				cout<<" Nomer Rekening :"<<ns.norekg<<endl;
				cout<<" Nama :"<<nama_baru<<endl;
				cout<<" Saldo :"<<ns.saldo+setor-tarik<<endl;
				
			}else if(cek_norekg == nd.norekg){
				
				cout<<" Masukan Nama Baru :";
				cin>>nama_baru;
				cout<<" Nomer Rekening :"<<nd.norekg<<endl;
				cout<<" Nama :"<<nama_baru<<endl;
				cout<<" Saldo :"<<nd.saldo+setor-tarik<<endl;
				
			}else if(cek_norekg == nt.norekg){
				
				cout<<" Masukan Nama Baru :";
				cin>>nama_baru;
				cout<<" Nomer Rekening :"<<nt.norekg<<endl;
				cout<<" Nama :"<<nama_baru<<endl;
				cout<<" Saldo :"<<nt.saldo+setor-tarik<<endl;
				
			}else if(cek_norekg == ne.norekg){
				
				cout<<" Masukan Nama Baru :";
				cin>>nama_baru;
				cout<<" Nomer Rekening :"<<ne.norekg<<endl;
				cout<<" Nama :"<<nama_baru<<endl;
				cout<<" Saldo :"<<ne.saldo+setor-tarik<<endl;
				
			}else if(cek_norekg == nl.norekg){
				
				cout<<" Masukan Nama Baru :";
				cin>>nama_baru;
				cout<<" Nomer Rekening :"<<nl.norekg<<endl;
				cout<<" Nama :"<<nama_baru<<endl;
				cout<<" Saldo :"<<nl.saldo+setor-tarik<<endl;
				
			}else{
				cout<<" Nomer Rekening tidak di temukan"<<endl;
			}
		}
		else{
			cout<<"Terima Kasih"<<endl;
			return 0;
		}
		cout<<"Kembali ke menu utama ?  ( Y / T )  : "; cin >> lagi;
		ulangi++;
	}
	while(lagi=='y' || lagi=='Y');
    cout<<"Terima Kasih"<<endl;
    return 0;
	
}
