#include<stdio.h>

int main(){
	
	unsigned short x;
	unsigned short y;
	unsigned int z;

	x=65536;
	y=65535;

	z=x*y;

	printf("x=%u\n",x);
	printf("y=%u\n",y);
	printf("z=%u\n",z);

}
