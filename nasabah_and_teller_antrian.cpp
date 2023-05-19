#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#define MAX 6

using namespace std;

typedef struct{
	int data[MAX];
	int head;
	int tail;
} Queue;
Queue antrian;

void Create(){
	antrian.head=antrian.tail=-1;
}

int IsEmpty(){
	if(antrian.tail==-1)
		return 1;
	else
		return 0;
}

int IsFull(){
	if (antrian.tail==MAX-1) return 1;
	else return 0;
}

//fungsi memasukkan data

void Enqueue(int data){
	if(IsEmpty()==1){
		antrian.head=antrian.tail=0;
		antrian.data[antrian.tail]=data;
		
		printf("\t Silahkan Masuk !! \n",antrian.data[antrian.tail]);
		void Tampil();
		{
		if(IsEmpty()==0){
		for(int i=antrian.head;i<=antrian.tail;i++){
		printf("%d ",antrian.data[i]);
		}
		}else printf("data kosong!");
		};
	}else
	if(IsFull()==0){
		antrian.tail++;
		antrian.data[antrian.tail]=data;
		printf("\t Silahkan Masuk !! \n",antrian.data[antrian.tail]);
	}

}

int Dequeue(){
	int i;
	int e = antrian.data[antrian.head];
	
	for(i=antrian.head;i<=antrian.tail-1;i++){
		antrian.data[i]= antrian.data[i+1];
	}
	antrian.tail--;
	return e;
}


void clear(){
	antrian.head=antrian.tail=-1;
	printf("Data Clear");
}
void Tampil()
{ 
	int jum;
	jum=0;
	
	if(IsEmpty()==0){
		for(int i=antrian.head;i<=antrian.tail;i++){
			jum++;
			
			printf("\n| %d |",i);
		}
		printf("\njumlah yang mengantri saat ini %i orang",jum);
	}else printf("Data Kosong!\n");
}

//sebagai nasabah
void nasabah()
{
	int data;
	char lagi;
	do{
		system("cls");
		printf("\t\t+=================================+\n");
		printf("\t\t| Menu nasabah |\n");
		printf("\t\t+=================================|\n");
		printf("\t\t| tekan (a) untuk masukkan data |\n");
		printf("\t\t| tekan (b) melihat data antrian |\n");
		printf("\t\t| tekan (x) keluar |\n");
		printf("\t\t+=================================|\n");
		printf("\t\tPilihan : "); scanf("%c",&lagi);
		if((lagi=='x') || (lagi=='X'))
		{ printf("Terima kasih\n");
		
		break;
		}
		
		switch(lagi)
		{
			case 'a':
				printf("\t\tmasukkan data: "); scanf("%d",&data);
				Enqueue(data);
			break;
			case 'b': Tampil();
			break;
		
		}getch();
	} while(lagi !='x');
	getche();
}

//memasukkan password
void password()
{
	char nama[20], id[10], password[4];
	int i;
{
	system("cls");
	
	atas:
	system("cls");
	printf("\t\t+===============================================+\n");
	printf("\t\t|Silahkan masukkan username & 3 digit Password |\n");
	printf("\t\t+===============================================+\n");
	printf("\t\t UserName : ") ; cin>>nama;
	printf("\t\t No. Identitas : "); cin>>id;
	printf("\t\t Password : ") ;
	for(i=0; i<=2; i++)
	{
		password[i]=getche(); printf("\bX");
	}
	printf("\n\t\t+=============================================+\n");
	if (strcmp(password,"aaa")==0)
	{ 
		printf("\n\n\t\t Anda Masuk Sebagai TEllER\n");
		printf("\t\t User : %s \n",nama);
		printf("\t\t No. Identitas : %s\n",id);
		printf("\n\n\t\tTekan Sembarang tombol untuk ke menu teller..!");
		goto bawah;
		
	}else{
		
		printf("\t\t\tpassword salah bro...hahaaa\n");
		printf("\t\tketik sembarang tombol untuk kembali ke menu: ");
		goto atas;

}
	bawah:
	getch();
}
}

//void teller
void teller(){
	
	char menu;
	password();
	do{
		system("cls");
		printf("\t\t+=================================+\n");
		printf("\t\t| menu pilihan untuk TELLER |\n");
		printf("\t\t+=================================+\n");
		printf("\t\t| tekan (a) untuk menghapus data |\n");
		printf("\t\t| tekan (b) melihat data antrian |\n");
		printf("\t\t| tekan (c) untuk mereset |\n");
		printf("\t\t| tekan (x) untuk keluar |\n");
		printf("\t\t+=================================+\n");
		printf("pilihan : "); scanf("%c",&menu);
	if((menu=='x') || (menu=='X')){
	 
		printf("terima kasih\n");
		break;
	}
	
	switch(menu)
	{
	case 'a': printf("Elemen yang keluar : %d",Dequeue());
	break;
	case 'b': Tampil();
	break;
	case 'c': clear();
	break;
	}getch();
	} while(menu !='x');

}

int main(){
char pil;


Create();
do{
system("cls");
fflush(stdin);
printf("\t\t+=====================================+\n");
printf("\t\t| Bank Anti Riba |\n");
printf("\t\t+=====================================+\n");
printf("\t\t| tekan (n) untuk Nasabah |\n");
printf("\t\t| tekan (t) untuk Teller |\n");
printf("\t\t| tekan (k) keluar dari program |\n");
printf("\t\t+=====================================+\n");
printf("\t\tPilihan : "); scanf("%c",&pil);
if((pil=='k') || (pil=='k'))
{ printf("Terima Kasih");
break;
}

switch(pil)
{
case 'n': nasabah();
break;
case 't': teller();
break;

}

}while(pil!='k');
}
