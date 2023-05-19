#include<iostream>
#include<string.h>
using namespace std;
 
int main()
  {
   char str[86];
   int length;
   cout<<"Masukan kalimat = ";
   gets(str);
   length = strlen(str);
   cout<<"Panjang kalimat = "<<length;
   return 0;
}
