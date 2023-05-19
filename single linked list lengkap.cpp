#include <iostream>
#include <conio.h>
#include <cstring>
#include <windows.h>
#include <stdlib.h>

using namespace std;

struct node {
    int nim;
    char nama[20];
    int umur;
    float tinggi;
    float berat;
    node *next;
 } *head;
 //node *awal_ptr=NULL;
 node *posisi;
 int pilih;
 //funsi tools
 void CariData(int nmr)
{
bool ketemu=false;
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->nim == nmr){
            ketemu = true;
            system("cls");
            cout<<"DATA BERHASIL DITEMUKAN"<<endl;
            cout<<"NIM : "<<temp->nim<<"  ";
            cout<<"NAMA : "<<temp->nama<<"  ";
            cout<<"UMUR : "<<temp->umur<<"  ";
            cout<<"TINGGI : "<<temp->tinggi<<"  ";
            cout<<"BERAT : "<<temp->berat<<"  ";
            cout<<"\nTEKAN ENTER UNTUK MELANJUTKAN PROSES";
            getch();
        }
    temp=temp->next;
    }
    if(ketemu == false)
    {
        system("cls");
        cout<<"MAAF DATA DENGAN NIM "<<nmr<<" TIDAK DI TEMUKAN\nTEKAN ENTER UNTUK MELANJUTKAN PROSES";
        getch();
    }
}
void inputDataMhs(int nmr)
 {
    struct node *temp;
    cout << "Masukkan Nama     : ";   cin >> temp->nama;
    cout << "Masukkan Umur     : ";   cin >> temp->umur;
    cout << "Masukkan tingggi  : ";   cin >> temp->tinggi;
    cout << "Masukkan Berat    : ";   cin >> temp->berat;
    temp->nim=nmr;
 }
void cetak_tengah(int brs, char *teks) 
{ 
    gotoxy(40-strlen(teks)/2,brs);cout<<teks; 
}

int count()
{
    struct node *n;
    int c=0;
    n=head;
    while(n!=NULL)
    {
    n=n->next;
    c++;
    }
    return c;
}

bool cekData(int nmr)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->nim == nmr)
            return false;
        else
            return true;
    temp=temp->next;
    }
    return true;
}

 //Fugnsi Tambah data
 void tambah(int nmr )
{
    struct node *temp;
    temp = new node;
    inputDataMhs(nmr);
    if (head== NULL)
    {
        head=temp;
        head->next=NULL;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
 void tambah_tengah_list(int nmr, int posisi_sisip) 
 {
     node *temp, *bantu;
     bantu=head;
     temp =new node;
     for(int i=1;i<posisi_sisip-1;i++)
     {
        if(bantu->next != NULL)
            bantu=bantu->next;
        else
            break;
     }       
    cout << "Masukkan Nama     : ";   cin >> temp->nama;
    cout << "Masukkan Umur     : ";   cin >> temp->umur;
    cout << "Masukkan tingggi  : ";   cin >> temp->tinggi;
    cout << "Masukkan Berat    : ";   cin >> temp->berat;
    temp->nim=nmr;
    temp->next=bantu->next;   
    bantu->next=temp;
}
void tambah_simpul_awal(int nmr) 
{
  node *temp;
  temp = new node;
  inputDataMhs(nmr);
  temp->next = NULL;
  
  temp->next = head;
  head = temp;
  
} 
void tambah_simpul_akhir(int nmr)
 {
    node *temp, *temp2; 
    temp=new node;
    inputDataMhs(nmr);
    temp->next=NULL;
    
    temp2=head;
     while(temp2->next != NULL)
       {
          temp2 = temp2->next;
       }
       temp2->next=temp;
 }
void InputData(int nmr)
{   
    int c=0;
    struct node *temp;
    temp=head;
    if(temp==NULL)
    {
        tambah(nmr);
        system("cls");
        cout<<"DATA BERHASIL DISIMPAN.\nTEKAN ENTER UNTUK MELANJUTKAN";
        getch();
    }
    else
    {
        if(cekData(nmr) == false)
        {
            system("cls");
            cout<<"NIM sudah pernah di inputkan";
            getch();
        }   
        else
        {
            while(temp!=NULL)
            {
                if(temp->nim<nmr)
                   c++;
                temp=temp->next;
            }
            if(c==0)
                tambah_simpul_awal(nmr);
            else if(c<count())
            {
                tambah_tengah_list(nmr,++c);
            }
            else
            {
                tambah_simpul_akhir(nmr);
            }
            system("cls");
            cout<<"DATA BERHASIL DISIMPAN.\nTEKAN ENTER UNTUK MELANJUTKAN";
            getch();
        }
    }
}
//akhir fungsi tambah data

 //fungsi hapus data
 int Hapus(int nim)
{
    struct node *temp, *prev;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->nim==nim)
        {
            if(temp==head)
            {
                head=temp->next;
                return 1;
            }
            else
            {
                prev->next=temp->next;
                return 1;
            }
        }
        else
        {
            prev=temp;
            temp= temp->next;
        }
    }
    return 0;
}
//akhir fungsi hapus data

//fungsi tampil data
 void tampil_senarai()
 {
    node *temp;
    temp = head;
    if(temp == NULL)
       cout<<"List kosong"<<endl;
    else
    {
        int i=1;
        cout<<endl;
        cetak_tengah(1,"DATA BERAT BADAN MAHASISWA MENURUT RUMUS  BODY MASS INDEX");
        cout<<"\n=====================================================================";
        gotoxy(2,4);cout<<"No.";
        gotoxy(7,4);cout<<"NIM";
        gotoxy(11,4);cout<<"NAMA";
        gotoxy(25,4);cout<<"UMUR";
        gotoxy(31,4);cout<<"TB"<<endl;
        gotoxy(35,4);cout<<"BB"<<endl;
        gotoxy(38,4);cout<<"BMI"<<endl;
        gotoxy(42,4);cout<<"KETERANGAN"<<endl;
        cout<<"====================================================================="<<endl;
       while(temp != NULL)
       {
        gotoxy(2,i+5);cout<<i;        
        gotoxy(7,i+5);cout<<temp->nim;
        gotoxy(11,i+5);cout<<temp->nama;
        gotoxy(25,i+5);cout<<temp->umur;
        gotoxy(31,i+5);cout<<temp->tinggi;
        gotoxy(35,i+5);cout<<temp->berat;
        //hitung bmi
        int bmi = temp->berat/((temp->tinggi/100)*(temp->tinggi/100));
        gotoxy(38,i+5);cout<<bmi;
        //memberi keterangan
        char *ket;
        if(bmi <= 18)
            ket = "BERAT BADAN KURANG";
        else if(bmi > 18 && bmi <= 24)
            ket = "BERAT BADAN IDEAL";
        else if(bmi > 24 && bmi <= 30)
            ket = "KELEBIHAN BERAT BADAN";
        else if(bmi > 30)
            ket = "OBESITAS";
        gotoxy(42,i+5);cout<<ket;
        temp=temp->next;
        i++;
       }
       cout<<"\n\n====================================================================="<<endl;
       cout<<"KETERANGAN : "<<endl;
       cout<<"    -BMI < 18      = BERAT BADAN KURANG"<<endl;
       cout<<"    -BMI 18 - 24   = IDEAL"<<endl;
       cout<<"    -BMI 25 - 29   = KELEBIHAN BERAT BADAN "<<endl;
       cout<<"    -BMI > 30      = OBESITAS"<<endl;
    }
} 
//akhir fungsi tampil

//fungsi edit data 
void EditData(int nmr)
{
    bool ketemu=false;
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->nim == nmr){
            ketemu = true;
            system("cls");
            cout<<"EDIT DATA BERIKUT INI"<<endl;
            cout<<"NIM    : "<<temp->nim<<"  "<<endl;
            cout<<"NAMA   : "<<temp->nama<<"  "<<endl;
            cout<<"UMUR   : "<<temp->umur<<"  "<<endl;
            cout<<"TINGGI : "<<temp->tinggi<<" "<<endl;
            cout<<"BERAT  : "<<temp->berat<<" "<<endl<<endl;
            cout<<"PROSES EDIT DATA"<<endl;
            cout<<"NAMA    : ";cin>>temp->nama;
            cout<<"UMUR    : ";cin>>temp->umur;
            cout<<"TINGGI  : ";cin>>temp->tinggi;
            cout<<"BERAT   : ";cin>>temp->berat;
            system("cls");
            cout<<"DATA BERHASIL DI EDIT.\nTEKAN ENTER UNTUK MELANJUTKAN";
            getch();
        }
    temp=temp->next;
    }
    if(ketemu == false)
    {
        clrscr();
        cout<<"MAAF DATA DENGAN NIM  "<<nmr<<" TIDAK DI TEMUKAN\nTEKAN ENTER UNTUK MELANJUTKAN"<<endl;
        getch();
    }
}
//akhir fungsi editdata
void main() 
{
    int nmr;
    head=NULL;
    do
    {
      system("cls");
      tampil_senarai();
      cout<<endl<<endl<<"======================"<<endl;
      cout<<"Menu Pilihan"<<endl;
      cout<<"1. Input"<<endl;
      cout<<"2. Cari"<<endl;
      cout<<"3. Hapus"<<endl;
      cout<<"4. Edit"<<endl;
      cout<<"5. Exit"<<endl;
      cout<<"Pilihan >> ";cin>>pilih;
      switch(pilih)
       {
        case 1: cout<<"Masukkan NIM      : ";
              cin>>nmr;
              InputData(nmr);
              break;
        case 2: cout<<"Masukkan NIM      : ";
              cin>>nmr;
              CariData(nmr);
              break;
        case 3: cout<<"Masukkan NIM      : ";
              cin>>nmr;
              if(Hapus(nmr)){
                system("cls");
                cout<<"DATA BERHASIL DIHAPUS.\nTEKAN ENTER UNTUK MELANJUTKAN PROSES";
                getch();
              }
              else{
                system("cls");
                cout<<"DATA GAGAL DIHAPUS.\nTEKAN ENTER UNTUK MELANJUTKAN PROSES";
                getch();
              }
              break;
        case 4: cout<<"Masukkan NIM      : ";
              cin>>nmr;
              EditData(nmr);
              break;
      default:
            cout<<"Pilihan yang anda masukkan salah, \ntekan enter untuk melanjutkan ";
       }
    }
  while(pilih !=5);
}
