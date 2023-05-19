#include <iostream.h>  //untuk cout & cin
#include <conio.h> //untuk getch();
int main() //awal program
{ struct identitas
  {
   int no_rekening;
   char nama[20], nama_belakang[50], alamat[100], j_t[20];
   long saldo,setor,tarik, t_t, t_s, transfer, terima, tt, ts;
   float bunga;
  }; 
 int a=-1; //untuk awal pengisian struct
 identitas id[100]; //mendeklarasikan struct dengan panjang struct 100
 char jawab, lagi, pass[6]; // variabel untuk pengulangan
 int n, t, input, menu,ma,mn; //variabel input digunakan user untuk memasukan perintah
      //variabel n untuk mencari data pada struct
      //variabel menu untuk memilih menu
 { //awal program menu awal
  menu:
  system("cls");
  m:
  cout<<"\n+=====================================+\n";
  cout<<"|       Program Tabungan Bank         |\n";
  cout<<"| Http://www.com-net-eng.blogspot.com |\n";
  cout<<"|     Computer Network Engineering    |\n";
  cout<<"+=====================================+\n";
  cout<<"\n";
  cout<<"+==================================+\n";
  cout<<"| 1. Menu Admin Bank               |\n";
  cout<<"| 2. Menu Nasabah                  |\n";
  cout<<"| 3. Exit                          |\n";
  cout<<"+==================================+\n";
  cout<<"\nPilih Menu 1/2/3 : ";cin>>menu;
  if (menu==1) //jika user memilih menu admin
   { //awal menu pil 1
    m_a:
    system("cls");
    tanya:
    cout<<"\n+==================================+\n"; //menu admin untuk bank
    cout<<"|          Menu Admin Bank         |\n";
    cout<<"+==================================+\n";
    cout<<"| 1. Input Data Nasabah            |\n";
    cout<<"| 2. List Nasabah                  |\n";
    cout<<"| 3. Laporan Penarikan dan Setoran |\n";
    cout<<"| 4. Exit                          |\n";
    cout<<"+==================================+\n";
    cout<<"\n";
    cout<<"Pilih Menu 1/2/3/4 : ";cin>>ma;
    switch (ma)
    { //awal case of ma
     
     case 1: //jika admin memilih menu Input Nasabah
      { //awal menu 1
       ma1: //label 
       a++; //untuk pengisian dan penambahan jika struct yang pertama sudah di isi maka akan lanjut ke struct selanjutnya
       system("cls"); //untuk menghapus screen fungsinya sama dengan clrscr()
       cout<<"+==================================+\n";
       cout<<"|        Input Data Nasabah        |\n";
       cout<<"+==================================+\n";
       cout<<"Nomor Rekening : ";cin>>id[a].no_rekening;
       cout<<"Nama Depan     : ";cin>>id[a].nama;
       cout<<"Nama Belakang  : ";cin>>id[a].nama_belakang;
       cout<<"Alamat         : ";cin>>id[a].alamat;
       cout<<"Jenis Tabungan : ";cin>>id[a].j_t;
       cout<<"\n";
       cout<<"+=================================+\n";
       cout<<"|     Data berhasil diproses      |\n";
       cout<<"|                                 |\n";
       cout<<"|           Terima kasih          |\n";
       cout<<"+=================================+\n";
       ask: //label
       cout<<"Input Data Nasabah Selanjutnya ? (y/t) : ";cin>>lagi;
       if (lagi=='y' || lagi=='Y')
        {
         goto ma1; //goto berfungsi untuk membuat lompatan pada program
        }
       else if (lagi=='t' || lagi=='T')
        {
         goto m_a;
        }
       else
        {
         cout<<"Input salah !!! \n";
         goto ask;
        }
       getch();
      } //akhir menu 1
      case 2: //jika admin memilih menu list nasabah
      {  //awal menu 2
       ma2:
       system("cls");
       cout<<"+===========================================+\n";
       cout<<"|                 List Nasabah              |\n";
       cout<<"+===========================================+\n";
       for (n=0;n<=a;n++) //pengulangan untuk mencari dan menampilkan data nasabah
        {
         cout<<"No.             : "<<(n+1)<<endl;
         cout<<"Nomor Rekening  : "<<id[n].no_rekening<<endl; //endl; untuk perintah newline atau pindah baris
         cout<<"Nama Lengkap    : "<<id[n].nama<<" "<<id[n].nama_belakang<<endl;
         cout<<"+===========================================+\n";
 
        }
       ask1:
       cout<<"\nLihat Detail Nasabah ? (y/t) : ";cin>>jawab;
       if (jawab=='y' || jawab=='Y')
        { nomo_rek:
         cout<<"\nMasukkan Nomor Rekening untuk detail Nasabah : ";cin>>input;
         for (n=0;n<=a;n++)
         {
          if (input==id[n].no_rekening)
          { system("cls");
           cout<<"+==================================+\n";
           cout<<"|        Detail Data Nasabah       |\n";
           cout<<"+==================================+\n";
           cout<<"Nomor Rekening   : "<<id[n].no_rekening<<endl;
           cout<<"Nama Lengkap     : "<<id[n].nama<<" "<<id[n].nama_belakang<<endl;
           cout<<"Alamat           : "<<id[n].alamat<<endl;
           cout<<"Jenis Tabungan   : "<<id[n].j_t<<endl;
           cout<<"Jumlah Saldo     : Rp."<<id[n].saldo<<endl;
           id[n].bunga=id[n].saldo*0.05;
           cout<<"Bunga (5%/bulan) : Rp."<<id[n].bunga<<endl;
           cout<<"=================================================\n";
           ask2:
           cout<<"\nKembali ke List Nasabah ? (y/t) : ";cin>>jawab;
           if (jawab=='y' || jawab=='Y')
            {
             goto ma2;
            }
           else if (jawab=='t' || jawab=='T')
            {
             goto m_a;
            }
           else
            { 
             cout<<"\n+=================+";
             cout<<"\n| Input Salah !!! |";
             cout<<"\n+=================+";
             goto ask2;
            } 
          }
         }
         cout<<"\nNomor Rekening Salah !!!\n";
         goto nomo_rek;
        }
       else if (jawab=='t' || jawab=='T')
        {
         goto m_a;
        }
       else
        {
         cout<<"\nInput Salah !!!";
         goto ask1;
        }
       getch();
               
       } //akhir menu 2
      case 3: // jika admin bank memilih menu laporan dan penarikan dari setiap nasabah
      { //awal menu 3
       system("cls");
       cout<<"+=================================+\n";
       cout<<"|  Laporan Penarikan dan Setoran  |\n";
       cout<<"+=================================+\n";
       cout<<"  \n";
       for (n=0;n<=a;n++)
        { cout<<"+===========================================+\n";
         cout<<"No.              : "<<(n+1)<<endl;
         cout<<"Nomor Rekening   : "<<id[n].no_rekening<<endl;
         cout<<"Nama Lengkap     : "<<id[n].nama<<" "<<id[n].nama_belakang<<endl;
         cout<<"Alamat           : "<<id[n].alamat<<endl;
         cout<<"Total Setoran    : Rp."<<id[n].t_s<<endl;
         cout<<"Total Penarikan  : Rp."<<id[n].t_t<<endl;
         cout<<"Total Transfer   : Rp."<<id[n].ts<<endl;
         cout<<"Total Terima     : Rp."<<id[n].tt<<endl;
         id[n].bunga=id[n].saldo*0.05;
         cout<<"Bunga (5%/bulan) : Rp."<<id[n].bunga<<endl;
         cout<<"Sisa Saldo       : RP."<<id[n].saldo<<endl;
         cout<<" \n";
         cout<<"+===========================================+\n";
        }
        cetak:
        cout<<"\nCetak Laporan ? (y/t) : ";cin>>jawab;
        { 
         if (jawab=='y'||jawab=='Y')
          { 
           system("cls");
           for (n=0;n<=a;n++)
           {
            cout<<"================================================================================\n";
            cout<<"No.              : "<<(n+1)<<endl;
            cout<<"Nomor Rekening   : "<<id[n].no_rekening<<endl;
            cout<<"Nama Lengkap     : "<<id[n].nama<<" "<<id[n].nama_belakang<<endl;
            cout<<"Alamat           : "<<id[n].alamat<<endl;
            cout<<"Total Setoran    : Rp."<<id[n].t_s<<endl;
            cout<<"Total Penarikan  : Rp."<<id[n].t_t<<endl;
            cout<<"Total Transfer   : Rp."<<id[n].ts<<endl;
            cout<<"Total Terima     : Rp."<<id[n].tt<<endl;
            cout<<"Bunga (5%/bulan) : Rp."<<id[n].bunga<<endl;
            cout<<"Sisa Saldo       : RP."<<id[n].saldo<<endl;
            cout<<" \n";
            cout<<"================================================================================\n";
           }
          }
         else if (jawab=='t'||jawab=='T')
          {
           goto m_a;
          }
         else
          {
           cout<<"\nInput Salah !!!";
           goto cetak;
          }
        }
       tanya1:
       cout<<"\nKeterangan :";
       cout<<"\n(Y/y) = untuk kembali ke menu admin bank";
       cout<<"\n(T/t) = untuk kembali ke menu utama";
       cout<<"\nKembali Ke Menu Admin ? (y/t) : ";cin>>jawab;
       if (jawab=='y' || jawab=='Y')
        {
         goto m_a;
        }
       else if (jawab=='t' || jawab=='T')
        {
         goto menu;
        }
       else
        {
         cout<<"\nPilihan tidak ada !!!\n";
         goto tanya1;
        }
      getch();
      } //akhir menu 3
     case 4: //jika admin memilih menu keluar (exit)
      { //awal menu 4
       goto menu;
       getch();
      } //akhir menu 4
     default: cout<<"\nMenu yang dipilih tidak ada !!!\n"; //jika admin memilih menu selain 4
       goto tanya;
    getch();   
    } //akhir case of ma (menu admin)
   getch();
   } //akhir menu pil 1
   if (menu==2) //jika user memilih menu nasabah
  { //awal menu 2
   system("cls");
   awal:
   cout<<"\nMasukan Nomor Rekening : ";cin>>input;
   for (n=0;n<=a;n++)
    {
     if (input==id[n].no_rekening)
     {
      m_n:
        system("cls");
        mn:
        cout<<"\n+==================================+\n";
      cout<<"|            Menu Nasabah          |\n";
      cout<<"|==================================|\n";
      cout<<"| 1. Setoran                       |\n";
      cout<<"| 2. Penarikan                     |\n";
      cout<<"| 3. Transfer                      |\n";
      cout<<"| 4. Cek Saldo                     |\n";
      cout<<"| 5. Exit                          |\n";
      cout<<"+==================================+\n";
      cout<<"\n";
      cout<<"\nMasukan Pilihan 1/2/3/4 : ";cin>>mn;
      switch (mn)
       { //awal case of mn
        case 1:
        { //awal menu nasabah 1
         system("cls");
         cout<<"+=================================+\n";
         cout<<"|            Penyetoran           |\n";
         cout<<"+=================================+\n";
         cout<<"\n";
          {  
           {
            cout<<"+==================================+\n";
            cout<<"|        Detail Data Nasabah       |\n";
            cout<<"+==================================+\n";
            cout<<"Nomor Rekening : "<<id[n].no_rekening<<endl;
            cout<<"Nama Lengkap   : "<<id[n].nama<<" "<<id[n].nama_belakang<<endl;
            cout<<"Alamat         : "<<id[n].alamat<<endl;
            cout<<"Jenis Tabungan : "<<id[n].j_t<<endl;
            cout<<"Jumlah Saldo   : Rp."<<id[n].saldo<<endl;
            cout<<"\n";
            cout<<"Masukan Jumlah Uang yang akan disetor : Rp.";cin>>id[n].setor;
            cout<<"\n";
            {
             if (id[n].setor<20000)
              { system("cls");
               cout<<"+=============================================+\n";
               cout<<"|    Maaf setoran anda tidak dapat di proses  |\n";
               cout<<"|            Minimal setoran Rp.20.000        |\n";
               cout<<"+=============================================+\n";
              }
             else
              { id[n].saldo=id[n].setor+id[n].saldo;
               //id[n].bunga=id[n].saldo*0.05;
               id[n].t_s=id[n].setor+id[n].t_s;
               system("cls");
               cout<<"+=================================+\n";
               cout<<"|    Setoran berhasil diproses    |\n";
               cout<<"+=================================+\n";
               cout<<"\n"<<endl;
               cout<<"Jumlah saldo anda : Rp."<<id[n].saldo;
               cout<<"\n"<<endl;
              }
            }
           }
          }
         tanya2:
         cout<<"\n (Y/y) = Kembali Ke Menu Nasabah";
         cout<<"\n (T/t) = Kembali Ke Menu Utama";
         cout<<"\nKembali Ke Menu Nasabah ? (y/t) : ";cin>>jawab;
         if (jawab=='y' || jawab=='Y')
          {
           goto m_n;
          }
         if (jawab=='t' || jawab=='T')
          {
           goto menu;
          }
         else
          {
           cout<<"\nPilihan tidak ada !!!\n";
           goto tanya2;
          }
      
         getch();
        } //akhir menu nasabah 1
        case 2: //jika user memilih menu penarikan
        {  //awal menu nasabah 2
         system("cls");
         cout<<"+=================================+\n";
         cout<<"|             Penarikan           |\n";
         cout<<"+=================================+\n";
         cout<<"\n";
          {
            {
             cout<<"+==================================+\n";
             cout<<"|        Detail Data Nasabah       |\n";
             cout<<"+==================================+\n";
             cout<<"Nomor Rekening : "<<id[n].no_rekening<<endl;
             cout<<"Nama Lengkap   : "<<id[n].nama<<" "<<id[n].nama_belakang<<endl;
             cout<<"Alamat         : "<<id[n].alamat<<endl;
             cout<<"Jenis Tabungan : "<<id[n].j_t<<endl;
             cout<<"Jumlah Saldo   : Rp."<<id[n].saldo<<endl;
             cout<<"\n";
             cout<<"Masukan Jumlah Uang yang akan ditarik : Rp.";cin>>id[n].tarik;
             cout<<"\n";
             if (id[n].saldo-id[n].tarik<10000)
              { system("cls");
               cout<<"+=====================================+\n";
               cout<<"|   Maaf Saldo Anda Tidak Mencukupi   |\n";
               cout<<"|     Sisa Saldo Minimal Rp.10.000    |\n";
               cout<<"+=====================================+\n";
              }
             else
              {
               id[n].saldo=id[n].saldo-id[n].tarik;
               //id[n].bunga=id[n].saldo*0.05;
               id[n].t_t=id[n].tarik+id[n].t_t;
               system("cls");
               cout<<"+=================================+\n";
               cout<<"|   Penarikan berhasil diproses   |\n";
               cout<<"|     Silahkan Ambil Uang Anda    |\n";
               cout<<"+=================================+\n";
               cout<<"\n"<<endl;
               cout<<"Sisa saldo anda : Rp."<<id[n].saldo;
               cout<<"\n"<<endl;
              }
            }
          }
         tanya3:
         cout<<"\n (Y/y) = Kembali Ke Menu Nasabah";
         cout<<"\n (T/t) = Kembali Ke Menu Utama";
         cout<<"\nKembali Ke Menu Nasabah ? (y/t) : ";cin>>jawab;
         if (jawab=='y' || jawab=='Y')
          {
           goto m_n;
          }
         if (jawab=='t' || jawab=='T')
          {
           goto menu;
          }
         else
          {
           cout<<"\nPilihan tidak ada !!!\n";
           goto tanya3;
          }
         getch();
        } //akhir menu nasabah 2
        case 3: //jika user memilih menu transfer
        {//awal menu nasabah 3
         system("cls");
         cout<<"+=================================+\n";
         cout<<"|             Transfer            |\n";
         cout<<"+=================================+\n";
         mn4:
         cout<<"\nMasukan Nomor Rekenig Tujuan : ";cin>>input;
         for (t=0;t<=a;t++)
          {
           if (input==id[t].no_rekening)
            { 
             cout<<"\n+===================================================+\n";
             cout<<"Nomor Rekening : "<<id[t].no_rekening<<endl;
             cout<<"Nama Lengkap   : "<<id[t].nama<<" "<<id[t].nama_belakang<<endl;
             cout<<"Alamat         : "<<id[t].alamat<<endl;
             cout<<"\nMasukan jumlah Transfer : Rp.";cin>>id[t].transfer;
             tanya5:
             cout<<"\nData Sudah Benar ?";
             cout<<"\nProses Transfer ? (y/t) : ";cin>>jawab;
             if (jawab=='y' || jawab=='Y')
             {
              if (id[n].saldo-id[t].transfer<20000)
              { system("cls");
               cout<<"+=====================================+\n";
               cout<<"|   Maaf Saldo Anda Tidak Mencukupi   |\n";
               cout<<"|     Sisa Saldo Minimal Rp.20.000    |\n";
               cout<<"+=====================================+\n";
              }
              else
              { id[n].saldo=id[n].saldo-id[t].transfer;
               id[t].saldo=id[t].transfer+id[t].saldo;
               id[t].tt=id[t].transfer+id[t].tt;
               id[n].ts=id[t].transfer+id[n].ts;
               system("cls");
               cout<<"+=====================================+\n";
               cout<<"|     Transfer Berhasil Diperoses     |\n";
               cout<<"|             Terima Kasih            |\n";
               cout<<"+=====================================+\n";
               cout<<"\n Sisa Saldo : "<<id[n].saldo<<endl;
              }
              tanya7:
              cout<<"\n+=================================+\n";
              cout<<"\nKeterangan =";
              cout<<"\n(Y/y)  = Kembali Ke Menu Nasabah";
              cout<<"\n(T/t)  = Kembali Ke Menu Utama";
              cout<<"\nKembali ke Menu Nasabah ? (y/t) : ";cin>>jawab;
              if (jawab=='y'||jawab=='Y')
               {
                goto m_n;
               }
              else if (jawab=='t'||jawab=='T')
               {
                goto menu;
               }
              else
               {
                cout<<"\nInput Salah !!!\n";
                goto tanya7;
               }
             }
             else if (jawab=='t'||jawab=='T')
             {
              goto mn4;
             }
             else
             {
              cout<<"\nInput Salah !!!\n";
              goto tanya5;
             }
            }
          }
         cout<<"\nNomor Rekening tidak terdaftar !!!\n";
         tanya6:
         cout<<"\nKembali Ke Menu ? (y/t) : ";cin>>jawab;
         if (jawab=='y'||jawab=='Y')
          {
           goto m_n;
          }
         else if (jawab=='t'||jawab=='T')
          {
           goto mn4;
          }
         else
          {
           cout<<"\nInput Salah !!!\n";
           goto tanya6;
          }
         getch();
        }//akhir menu nasabah 3
        case 4: // jika user memilih menu cek saldo
        { //awal menu nasabah 4
         system("cls");
         cout<<"+=================================+\n";
         cout<<"|             Cek Saldo           |\n";
         cout<<"+=================================+\n";
          {
            { 
             cout<<"\n+==================================+\n";
             cout<<"|        Detail Data Nasabah       |\n";
             cout<<"+==================================+\n";
             cout<<"\n";
             cout<<"Nomor Rekening   : "<<id[n].no_rekening<<endl;
             cout<<"Nama Lengkap     : "<<id[n].nama<<" "<<id[n].nama_belakang<<endl;
             cout<<"Alamat           : "<<id[n].alamat<<endl;
             cout<<"Jenis Tabungan   : "<<id[n].j_t<<endl;
             id[n].bunga=id[n].saldo*0.05;
             cout<<"Bunga (5%/bulan) : Rp."<<id[n].bunga<<endl;
             cout<<"Jumlah Saldo     : Rp."<<id[n].saldo<<endl;
            }
          }
         tanya4:
         cout<<"\n (Y/y) = Kembali Ke Menu Nasabah";
         cout<<"\n (T/t) = Kembali Ke Menu Utama";
         cout<<"\nKembali Ke Menu Nasabah ? (y/t) : ";cin>>jawab;
         if (jawab=='y' || jawab=='Y')
          {
           goto m_n;
          }
         if (jawab=='t' || jawab=='T')
          {
           goto menu;
          }
         else
          {
           cout<<"\nPilihan tidak ada !!!\n";
           goto tanya4;
          }
         getch();
        }// akhir menu nasabah 4
        case 5: //jika user memilih menu exit
        {//awal menu nasabah 5
         goto menu;
        }//akhir menu nasabah 5
       default: 
        {
         cout<<"Menu yang anda pilih tidak ada !!!\n";
         goto mn;
        }
       getch();
       }
     }
    }
    cout<<"\nNomor Rekening Salah !!!\n";
    goto awal;
  }//akhir menu 2
   else if (menu>3)
    {
     cout<<"\nMenu yang dipilih tidak ada !!!\n";
     goto m;
    }
 } //akhir program menu awal
//getch();
return 0;
} //akhir program
