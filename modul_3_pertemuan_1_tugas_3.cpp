#include<iostream>
#include<stdio.h>

typedef unsigned short int USHORT; //typedefdefined

int main(){
	
	USHORT Width=5;
	USHORT Length;
	Length=10;
	
	USHORT Area=Width*Length;
	std::cout<<"Width: "<<Width<<"\n";
	std::cout<<"Length: "<<Length<<std::endl;
	std::cout<<"Area: "<<Area<<std::endl;
	system("PAUSE") ;
	return 0;
}
