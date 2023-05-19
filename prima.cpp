#include<iostream>
using namespace std;
int a;
int prima(int n){
	int i;
	
	for (i=2;i<n;i++){	
	 if(n%i==0){ 
	 	a++;
	 }
	}
return (a);
}

int main(){
 int N, cek;
 cout<<"masukan bilangan prima:"; cin>>N;
 cek=prima(N);
 	if(cek==0){
  		cout<<"Bilangan "<<N<<" merupakan bilangan prima"<<endl;}
 	else{
 	cout<<"Bilangan "<<N<<" bukan merupakan bilangan prima"<<endl;
	}
 system("pause");
}
