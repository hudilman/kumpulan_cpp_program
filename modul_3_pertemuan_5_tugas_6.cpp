#include<iostream>
#include<cstdlib>

using namespace std;

void penambahan (int *angka)
{
	*angka+=20;
}

int main(int argc,char*argv[])
{
	int nilai=10;
	cout<<"Nilainya nilai adalah = "<<nilai<<endl<<endl;
	penambahan(&nilai);
	cout<<"Nilainya nilai adalah = "<<nilai<<endl;
	return EXIT_SUCCESS;
}
