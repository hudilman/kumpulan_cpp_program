#include<iostream>
#include<stdio.h>

int main()
{
	short int smallNumber;

	smallNumber=32767;
	std::cout<<"smallnumber:"<<smallNumber<<std::endl;
	smallNumber++;
	std::cout<<"smallnumber:"<<smallNumber<<std::endl;
	smallNumber++;
	std::cout<<"smallnumber:"<<smallNumber<<std::endl;
	
	return 0;
}
