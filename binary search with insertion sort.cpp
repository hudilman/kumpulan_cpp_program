#include<iostream>
#include <stdio.h>  
using namespace std;  
int main ()  
{    
    int myarray[10] = { 12,4,3,1,15,45,33,21,10,2};   
    int array[9];
    int i, j, num=9, temp, keynum;
    int low, mid, high; 
    cout<<"\nInput list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }    
    for(int k=1; k<10; k++)   
    {  
        int temp = myarray[k];  
        int j= k-1;  
        while(j>=0 && temp <= myarray[j])  
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }
	
	printf("\n Data yang dicari : ");
    scanf("%d", &keynum);
    /*  Binary searching begins */
    low = 1;
    high = num;
    do
    {
        mid = (low + high) / 2;
        if (keynum < array[mid])
            high = mid - 1;
        else if (keynum > array[mid])
            low = mid + 1;
    } while (keynum != array[mid] && low <= high);
    if (keynum == array[mid])
    {
        printf("Data berada di urutan ke- %d",mid);
    }
    else
    {
        printf("Data tidak ditemukan! \n");
    }  
}
