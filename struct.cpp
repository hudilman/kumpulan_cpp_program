#include <stdio.h>
 #include <stdlib.h>
 
int main (void)
 {
 int a,b,c;
 struct info{
 int nomor;
 int nim;
 char nama[20];
 char nilai[2];
 };
 
struct info mahasiswa[10];
 printf("Masukkan Jumlah Data Mahasiswa (Maks. 10 orang) : ");
 scanf ("%d", &a);
 
for(b=0;b<a;b++)
 {
 mahasiswa[b].nomor=b+1;
 printf("\n%d.\n", b+1);
 printf("NIM : ");
 scanf ("%d", &mahasiswa[b].nim);
 printf("Nama : ");
 scanf ("%s", &mahasiswa[b].nama);
 printf("Nilai : ");
 scanf("%s", &mahasiswa[b].nilai);
 }
 printf("\n%d Data Mahasiswa Telah Dimasukkan", b);
 printf("\nNOMOR\t NIM\t Nama\t Nilai\n");
 
for (c=0;c<b;c++)
 {
 printf("\n %d\t %d\t %s\t %s\t\n", mahasiswa[c].nomor, mahasiswa[c].nim, mahasiswa[c].nama, mahasiswa[c].nilai);
 }
 system("pause");
 return(0);
 }
