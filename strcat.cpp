#include <string.h>
#include <stdio.h>
#include<iostream>
using namespace std;
main()
{
    char nama[12],
    hobi[20],
    mixed[25];
    char title;
   
    cout<<"Masukan Nama = ";
    gets(nama);
    cout<<"Masukan Hobi = ";
    gets(hobi);
    strcpy(mixed,nama);
    strcat(mixed,"\n Hobi = ");
    strcat(mixed,hobi);
    printf(" Nama = %s\n\n",mixed);
    gets(0);return(0);
   
}
