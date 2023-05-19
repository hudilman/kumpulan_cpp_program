
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define nMax 30
 
// Kamus global
typedef struct{
int TI[nMax+1];
int nEff;
}TabInt;
 
// Definisi prototype
void getMenu();
void getMenuPilihTransfer();
void getMenuMutasiTrx();
void cetakTabel(TabInt T);
void addElmTab(TabInt *T, int x);
void urutBubbleDesc(TabInt *T);
void urutBubbleAsc(TabInt *T);
void terbilang(long x);
 
// Main driver
int main (){
 
// Variabel / kamus lokal
char y1, y2, y3, y4, y5, y6, y7, y8;
int i=0, j=0;
int pin;
int npin;
int fpin=123456;
int sal=1000000;
int N, TR, TF;
int T=0;
TabInt Tab1, Tab2;
 
// Algoritma
//system("COLOR 9F");
login: // Perintah login akan dipanggil oleh syntax "goto"
////system("cls");
printf("********** BANK ABC **********\n");
printf("MASUKAN PIN ANDA:\n"); scanf("%d", &pin);
if (pin==fpin) {
goto menu;
}
else if (i<2) { // diberi kesempatan memasukan PIN sebanyak 3x.
printf("PIN YANG ANDA MASUKAN SALAH!\n");
i=i+1;
getch();
goto login;
////system("cls");
}
else { // apabila 3x salah memasukan PIN.
printf ("Anda telah 3x salah memasukan PIN.\n");
printf("Mohon maaf, account anda telah kami blokir.\n");
printf("Silahkan hubungi Customer Service kami.\n");
}
goto exit; // Keluar dari program
menu:
////system("cls");
getMenu(); // Memanggil prosedur "getMenu()"
printf("\nMasukan Pilihan Anda:"); scanf("%s", &y1);
////system("cls");
 
switch(y1) {
case '1': { // Transfer Dana
do {
pilihtransfer:
////system("cls"); // Membersihkan layar
getMenuPilihTransfer(); // Memanggil prosedur Menu Pilih Transfer
printf("Masukan Pilihan:"); scanf("%s", &y2);
////system("cls");
switch(y2) {
case '1': { // Transfer dana ke rekening Bank ABC
printf("*************** KE REKENING BANK ABC ***************\n");
printf("Masukan No.Rek Tujuan:"); scanf("%d", &T);
////system("cls");
printf("*************** KE REKENING BANK ABC ***************\n");
printf("Masukan Nominal yang akan ditransfer:"); scanf("%d", &N);
////system("cls");
printf("*************** KE REKENING BANK ABC ***************\n");
printf("Rekening Tujuan:%d\n", T);
printf("Jumlah Transfer:%d\n", N);
printf("Terbilang:"); terbilang(N); printf("Rupiah\n");
printf("Apakah anda ingin melakukan transaksi ini?(y/t):"); scanf("%s", &y3);
if (y3=='y' || y3=='Y') {
goto transferabc;
}
else {
goto menu;
}
transferabc:
if (sal < N) {
printf("Saldo anda tidak mencukupi. Saldo anda saat ini:Rp.%d,-\n", sal);
}
else if (sal>=N) {
sal = sal - N;
printf("Transaksi berhasil. Saldo anda sekarang:Rp.%d,-\n", sal);
addElmTab(&Tab1, N);
}
break;
}
case '2': { // Transfer dana ke rekening bank lain
printf("*************** KE REKENING BANK LAIN ***************\n");
printf("Masukan No.Rek Tujuan:"); scanf("%d", &T);
////system("cls");
printf("*************** KE REKENING BANK LAIN ***************\n");
printf("Masukan Nominal yang akan ditransfer:"); scanf("%d", &N);
////system("cls");
printf("*************** KE REKENING BANK LAIN ***************\n");
printf("Rekening Tujuan:%d\n", T);
printf("Jumlah Transfer:Rp.%d,-\n", N);
printf("Terbilang: "); terbilang(N); printf("Rupiah\n");
printf("Biaya Transfer ke rekening bank lain: Rp.7500,-\n");
printf("Apakah anda ingin melakukan transaksi ini?(y/t):"); scanf("%s", &y4);
if (y4=='y' || y4=='Y'){
goto transferlain;
}
else {
goto menu;
}
transferlain:
TF=7500; // Biaya transfer ke rekening bank lain
if (sal < N) {
printf("Saldo anda tidak mencukupi. Saldo anda saat ini:Rp.%d,-\n", sal);
}
else if (sal>=N) {
sal = sal - N - TF;
printf("Transaksi berhasil. Saldo anda sekarang:Rp.%d,-\n", sal);
addElmTab(&Tab1, N);
addElmTab(&Tab1, TF);
}
break;
}
case '3': { // Kembali ke menu utama
goto menu;
break;
}
default : { // Memasukan input selain angka 1-3
getMenuPilihTransfer();
printf("Input Salah(Masukan angka 1-3)");
getch();
goto pilihtransfer;
break;
}
}
printf("Ingin transfer lagi? (y/t):"); scanf("%s", &y5);
////system("cls");
}
while (y5=='y' || y5=='Y');
goto menu;
break;
}
case '2': { // Penarikan Dana
do {
jmltarik:
////system("cls");
printf("*************** TARIK TUNAI ***************\n");
printf("Masukan Jumlah yang akan ditarik:"); scanf("%d", &TR);
////system("cls");
printf("*************** TARIK TUNAI ***************\n");
printf("Jumlah Penarikan:Rp.%d,-\n", TR);
printf("Terbilang: "); terbilang(TR); printf("Rupiah\n");
printf("Apakah anda ingin melakukan transaksi ini?(y/t):"); scanf("%s", &y6);
if (y6=='y' || y6=='Y') {
goto tarik;
}
else {
goto menu;
}
tarik:
if (TR < 10000) {
printf("Nominal harus kelipatan Rp.10000,- !");
getch();
goto jmltarik;
} else if (sal < TR) {
printf("Saldo anda tidak mencukupi. Saldo anda saat ini:Rp.%d,-\n", sal);
} else if (sal >= TR) {
sal = sal - TR;
printf("Transaksi berhasil. Saldo anda sekarang: Rp.%d,-\n", sal);
addElmTab(&Tab2, TR);
}
printf("Ingin melakukan transaksi lagi ?(y/t):"); scanf("%s", &y7);
}
while(y7=='y' || y7=='Y');
goto menu;
break;
}
case '3': { // Pengecekan Saldo
printf("*************** CEK SALDO ***************\n");
printf("Saldo Anda Saat ini:Rp.%d,-\n", sal);
printf("Terbilang: "); terbilang(sal); printf("Rupiah\n");
printf("<< Kembali ke menu");
getch();
goto menu;
break;
}
case '4': { // Histori Transaksi
mutasitrx:
////system("cls");
getMenuMutasiTrx();
printf("Masukan pilihan:"); scanf("%s", &y8);
////system("cls");
switch (y8) {
case '1': { // Transaksi Terakhir
printf ("***************** TRANSAKSI TERAKHIR ***************\n");
printf("********* TRANSFER DANA *********\n");
cetakTabel(Tab1); // Mencetak isi Tabel pada TabInt Tab1
printf("Ke: %d\n", T);
printf("*********************************\n");
printf("******** PENARIKAN DANA *********\n");
cetakTabel(Tab2); // Mencetak isi Tabel pada TabInt Tab2
printf("*********************************\n");
printf("<< Kembali ke menu");
break;
}
case '2': { // Mengurutkan transaksi dari yang terbesar hingga terkecil
printf("********** TRANSAKSI TERBESAR **********\n");
printf("********** TRANSFER DANA ***************\n");
urutBubbleDesc(&Tab1);
cetakTabel(Tab1);
printf("************ PENARIKAN DANA ************\n");
urutBubbleDesc(&Tab2);
cetakTabel(Tab2);
printf("****************************************\n");
printf("<< Kembali ke menu");
break;
}
case '3': { // Mengurutkan transaksi dari yang terkecil hingga terbesar
printf("********** TRANSAKSI TERKECIL **********\n");
printf("************* TRANSFER DANA ************\n");
urutBubbleAsc(&Tab1);
cetakTabel(Tab1);
printf("****************************************\n");
printf("************ PENARIKAN DANA ************\n");
urutBubbleAsc(&Tab2);
cetakTabel(Tab2);
printf("****************************************\n");
printf("<< Kembali ke menu");
break;
}
case '4': { // Kembali ke menu utama
goto menu;
break;
}
default : { //
getMenuMutasiTrx();
printf("Input Salah(Masukan angka 1-4)");
getch();
goto mutasitrx;
break;
}
}
getch();
goto menu;
break;
}
case '5': { // Ganti PIN ATM
printf("*************** GANTI PIN ***************\n");
pinlama:
printf("Masukan PIN lama:"); scanf("%d", &pin);
if(pin==fpin){
goto pinbaru;
}
else if(j<2){
printf("PIN LAMA ANDA SALAH!\n");
j=j+1;
goto pinlama;
}
else{
printf("AKUN DIBLOKIR! SILAHKAN HUBUNGI CS KAMI.\n");
goto exit;
}
pinbaru:
printf("Masukan PIN baru:"); scanf("%d", &npin);
//system("cls");
fpin=npin;
printf("*************** GANTI PIN ***************\n");
printf("Ganti PIN berhasil. Silahkan login kembali.\n");
getch();
goto login;
break;
}
case '6': { // Keluar Dari Program
printf("*************** EXIT ***************\n");
printf("TERIMA KASIH TELAH MENGGUNAKAN ATM ABC (=");
goto exit;
break;
}
default : { // Memasukan input selain angka 1-6
getMenu();
printf("\nInput Salah(Masukan angka 1-6)");
getch();
goto menu;
break;
}
exit: // Keluar program dengan nilai return 0
return 0;
}
}
// Realisasi prototype
void getMenu() { // Menu utama
printf("| *************** MENU UTAMA *************** |\n");
printf("| 1. TRANSFER DANA 5. GANTI PIN |\n");
printf("| 2. TARIK TUNAI 6. EXIT |\n");
printf("| 3. CEK SALDO |\n");
printf("| 4. MUTASI TRANSAKSI |\n");
printf("| ********************************************* |");
}
void getMenuPilihTransfer(){ // Menu Pilihan Transfer Dana
printf("**************** TRANSFER DANA ****************\n");
printf("* 1. Transfer Dana ke Rekening Bank ABC *\n");
printf("* 2. Transfer Dana ke Rekening Bank Lain *\n");
printf("* 3. Kembali ke menu *\n");
printf("***********************************************\n");
}
void getMenuMutasiTrx(){ // Menu Mutasi Transaksi
printf("********** MUTASI TRANSAKSI **********\n");
printf("* 1. Transaksi Terakhir *\n");
printf("* 2. Urutkan Transaksi Terbesar *\n");
printf("* 3. Urutkan Transaksi Terkecil *\n");
printf("* 4. Kembali ke Menu *\n");
printf("**************************************\n");
}
void addElmTab(TabInt *T, int x){ // Prosedur untuk menambahkan Elemen pada sebuah Tabel yang terdapat pada tabel integer
/* I.S: T terisi sembarang, mungkin kosong
F.S: Bertambah 1 elemen bernilai x
*/
// Algoritma
if((*T).nEff < nMax){
(*T).nEff++;
(*T).TI[(*T).nEff] = x;
}
}
void cetakTabel(TabInt T){ // Prosedur untuk mencetak isi tabel pada tabel integer
/* I.S: T Terdefinisi sembarang
F.S: Semua elemen pada T dicetak
*/
// Variabel / Kamus
int i;
 
// Algoritma
i=1;
while(i<=T.nEff){
printf("<Rp.%d,->\n", T.TI[i]);
i++;
}
}
void urutBubbleDesc(TabInt *T){ // Prosedur Pengurutan bilangan menggunakan metode bubblesort descending (Dari besar ke kecil)
/* I.S: Mengurutkan bilangan dari yang terbesar hingga terkecil
F.S: i,j,tmp saling bertukar tempat
*/
// Variabel / kamus
int i,j, tmp;
int N;
 
// Algoritma
N = (*T).nEff;
 
for(i=N;i>1;i--){
for(j=2;j<=i;j++){
if((*T).TI[j-1] < (*T).TI[j]){
//pertukaran tempat
tmp = (*T).TI[j-1];
(*T).TI[j-1] = (*T).TI[j];
(*T).TI[j] = tmp;
}
}
}
}
void urutBubbleAsc(TabInt *T){ // Prosedur Pengurutan bilangan menggunakan metode bubblesort ascending (Dari kecil ke besar)
/* I.S: Mengurutkan bilangan dari yang terkecil hingga terbesar
F.S: i,j,tmp saling bertukar tempat
*/
// Variabel / Kamus
int i,j, tmp;
int N;
 
// Algoritma
N = (*T).nEff;
 
for(i=N;i>1;i--){
for(j=2;j<=i;j++){
if((*T).TI[j-1] > (*T).TI[j]){
//pertukaran tempat
tmp = (*T).TI[j-1];
(*T).TI[j-1] = (*T).TI[j];
(*T).TI[j] = tmp;
}
}
}
}
void terbilang(long x){ // Prosedur mengubah angka menjadi kata
/* I.S: x mengkonversi nilai x menjadi kata
F.S: nilai x berubah
*/
// Algoritma
if(x==1){
printf("Satu ");
}else if(x==2){
printf("Dua ");
}else if(x==3){
printf("Tiga ");
}else if(x==4){
printf("Empat ");
}else if(x==5){
printf("Lima ");
}else if(x==6){
printf("Enam ");
}else if(x==7){
printf("Tujuh ");
}else if(x==8){
printf("Delapan ");
}else if(x==9){
printf("Sembilan ");
}else if(x==10){
printf("Sepuluh ");
}else if(x==11){
printf("Sebelas ");
}else if(x>=12&&x<=19){
terbilang(x%10);
printf("Belas ");
}else if(x>=20&&x<=99){
terbilang(x/10);
printf("Puluh ");
terbilang(x%10);
}else if(x>=100&&x<=199){
printf("Seratus ");
terbilang(x-100);
}else if(x>=200&&x<=999){
terbilang(x/100);
printf("Ratus ");
terbilang(x%100);
}else if(x>=1000&&x<=1999){
printf("Seribu ");
terbilang(x-1000);
}else if(x>=2000&&x<=999999){
terbilang(x/1000);
printf("Ribu ");
terbilang(x%1000);
}else if(x>=1000000&&x<=999999999){
terbilang(x/1000000);
printf("Juta ");
terbilang(x%1000000);
}else if(x>=1000000000&&x<=2147483647){
terbilang(x/1000000000);
printf("Miliyar ");
terbilang(x%1000000000);
}
}
