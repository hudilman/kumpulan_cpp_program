#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc,char*argv[])
{
	typedef struct
	{
		unsigned bit0:1;
		unsigned bit1:1;
		unsigned bit2:1;
		unsigned bit3:1;
		unsigned bit4:1;
		unsigned bit5:1;
		unsigned bit6:1;
		unsigned bit7:1;
		
	}info_bit;
	
	union ubyte
	{
		unsigned char byte;
		info_bit bit;
	};
	
	ubyte ascii;
	int nilai;
	cout<<"Masukan Nilai ASCII antara 0 sampai dengan 255 : ";
	cin>>nilai;
	ascii.byte=nilai;
	cout<<"76543210 <---------- posisi bit : ";
	cout<<ascii.bit.bit7
	<<ascii.bit.bit6
	<<ascii.bit.bit5
	<<ascii.bit.bit4
	<<ascii.bit.bit3
	<<ascii.bit.bit2
	<<ascii.bit.bit1
	<<ascii.bit.bit0
	<<endl;
	
	return 0;
}
