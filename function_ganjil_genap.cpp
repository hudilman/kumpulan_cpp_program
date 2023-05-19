#include<stdio.h>
#include<iostream>
using namespace std;
int ganjil(int n);
int genap(int a);
int main()
{
    int i;
    cout<<"Ganjil :";
    for (i=1; i<=35;i++)
    {
        ganjil(i);
    }
    cout<<endl;
    cout<<"Genap :";
    for (i=1; i<=35;i++)
    {
        genap(i);
    }
    cout<<endl;
}
int ganjil(int n)
{
    if(n%2!=0)
{
    cout<<n<<" ";
}
}
int genap(int a)
{
    if(a%2==0)
{
    cout<<a<<" ";
}
}
