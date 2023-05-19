#include<stdio.h>
#include<stdlibh
#definesize10
Structstack
{
Intdata;
Structstack*Next;
};
Typedefstructstackstk:
d*tos=Null:
Voidpush():
Intpop();
Voiddisplay();
Voidmain();
Intpilih=0;
Intval;

Do
{
Print("----menu----");
Printf("1.Pushdatakedalamtumpukandantampilkan");
Printf("2.Popdatadaridalamtumpukandantampilkan");
Printf("3.Tampilkan");
Printf("4.Keluar");
Printf("masukanpilihan);
Scanf("%d",Pilihan);
Switch(pilihan)
{
Kasus1: push();
Display();
Break();
Kasus2: val=Pop();
Printf("Popupvalue=%d",val);
Printf("tumpukansetelahdiambil");
Display();
Break;
Kasus3: display();
Break;
Kasus4: printf("KeluarDariProgram");
Break;
}while(pilihan!=4);
}
VoidPush(){
d*node;

Node=(d*)malloc(sizeof(d));
Printf("masukandatayangdimasukkandidalamtumpukkan:");
Scanf("%d",node->data);
Node->nest=Tos;
Tos=node;//Topofstackpindahkenodebaru
}
IntPop(){
Intval;
D*temp;
Temp=tos;//periksatumpukanapabilakosong
If(tos==NULL)
Printf("tumpukkanpenuh");
Exit(0);{
Else
{
Val=tos->data;
Tos=tos->next;
Free(temp);}
Returnval:
}
Voiddisplay(){
D*temp;
Temp=tos;
Printf("tumpukanelemen..")
If(temp==NULL)
Printf("tumpukkankosong");
Else

{
While(temp->next!=NULL){
Printf("%d",temp->data);
}
