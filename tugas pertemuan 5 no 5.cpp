#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

typedef struct number {
 	int *ptr;  
    int number[2]; 
} NUMB;

void fun_num(NUMB num){
	
	std::cout << "Enter the elements of an array :" << std::endl;  
    for(int i=0;i<2;i++)  
    {  
        cin>>num.number[i];  
    }
}

int main(int argc,char*argv[])
{
	NUMB num;

    int ptr1[2]; 
    int *ptr2[2]; 
    std::cout << "Enter two numbers (example : 1 2) : " ;  
    for(int i=0;i<2;i++)  
    {  
        std::cin >> ptr1[i];  
    }  
    for(int i=0;i<2;i++)  
    {  
        ptr2[i]=&ptr1[i];   
    }  
    
    cout<<"\n Output : \n";
    for(int i=0;i<2;i++)  
    {  
		std::cout << "The values are : "<<*ptr2[i] << std::endl;  
    }  
	
}

