#include<time.h>
#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

int menu(){
	
	cout<<"SORTING DATA ARRAY"<<endl;
	cout<<"==================="<<endl;
	cout<<"1. Insert Array"<<endl;
	cout<<"2. Insertion Sort"<<endl;
	cout<<"3. Selection Sort"<<endl;
	cout<<"4. Bubble Sort"<<endl;
	cout<<"5. Exit"<<endl;
	
}

int main()
{
	int pil;
	char ulang;
	int i,a[50],no,pos,size,t3,t4,Key,array1[5];
	do{
		
		system("cls");
		
		menu();
		cout<<"Pilih  : ";
		cin>>pil;
		switch(pil){
			case 1: 
				cout<<"\n ========= Insert Array ===============\n";
				cout<<"Masukan Jumlah array yang ingin di input : ";
			    cin>>size;
			
			    for(i=0; i<size; i++)
			    {
			        cout<<"\nMasukan elemen ke- arr["<<i<<"] : ";
			        cin>>a[i];
			    }
			
			  	cout<<"\n Tampilan array yang telah di input : \n";
			
			  	for(i=0;i<size;i++){
			  		cout<<" "<<a[i]<<" ";
				}
				
				break;
				
			case 2: 
				cout<<"\n ========= Insertion Sort ===============\n";
				cout<<"Masukan 5 angka : "<<endl;

				for(int i=0; i<5; i++)  {
				 cout << "  angka ke " <<i+1 <<" = ";cin>>array1[i];
				}
				
				cout<<endl;
				t3=GetTickCount();
				cout<<"Angka sebelum di sortir = ";
				
				for(int j=0; j<5; j++) {
				 cout<<array1[j]<<"  ";
				 }
				
				cout<<endl;
				cout<<endl<< "Data proses "<<endl;
				for(int j=1 ; j < 5 ; j++) {
				 Key = array1[j];              
				 int i = j-1;                  
				 while(i >= 0 && array1[i] < Key) {
				  array1[i + 1] = array1[i];
				  i = i - 1;
				 }
				 array1[i + 1] = Key;
				  for(int l=0; l<5; l++) {
				  cout<<array1[l]<<"  ";
				   }
				 cout<<endl;
				}
				cout<<endl<<"Angka setelah disortir = ";
				
				for(int i=0; i<5; i++) {
				 cout<<array1[i]<<"  ";
				 }
				t4=GetTickCount();
				cout << endl<<endl <<"Lama proses = " << (int)(t4 - t3) << " ms";
				 cout<<endl;
				
				break;
			case 3: 
				cout<<"\n ========= Selection Sort ===============\n";
				int t5,t6;
				int arr[5];
				int mini,temp;
				
				cout<<"masukan 5 angka ="<<endl;
				
				for(int i=0; i<5; i++) {
				 cout << "  angka ke " <<i+1 <<" = ";cin>>arr[i];
				}
				t5=GetTickCount();
				cout<<endl;
				cout<<"Angka sebelum di sortir = ";
				
				for(int j=0; j<5; j++) {
				 cout<<arr[j]<<"  ";
				 }
				
				for(int r1=0;r1<4;r1++) {
				 mini=r1;
				 for(int r2=r1+1; r2<5; r2++)
				   if(arr[r2]>arr[mini])
				   mini=r2;
				    if(mini !=r1) {
				     temp=arr[r1];
				     arr[r1]=arr[mini];
				     arr[mini]=temp;
				    }
				}
				cout<<endl;
				cout<<endl;
				cout<<"Setelah di sortir = ";
				for(int q=0; q<5; q++) {
				 cout<<arr[q]<< "  " ;
				 }
				t6=GetTickCount();
				cout << endl<<endl <<"Lama proses = " << (int)(t6 - t5) << " ms";
				cout<<endl;
				
				break;
			case 4: 
				cout<<"\n ========= Bubble Sort ===============\n";
				int t1,t2;
			 	int hold;
			 	int array[5];
			
				 cout<<"Masukan 5 angka :"<<endl;
				
				 for(int i=0; i<5; i++) {
				  cout << "  angka ke " <<i+1 <<" = ";cin>>array[i];
				 }
				 cout<<endl;
				 cout<<endl;
				 t1=GetTickCount();
				 cout<<"Sebelum di sortir = ";
				
				 for(int j=0; j<5; j++) {
				 cout<<array[j];
				 cout<<"  ";
				 }
				  cout<<endl;
				  cout <<endl<< "Urutan program"<<endl;
				 for(int i=0; i<4; i++) {
				  for(int j=0; j<4; j++) {
				   if(array[j]<array[j+1]) {
				    hold=array[j];
				    array[j]=array[j+1];
				    array[j+1]=hold;
				        for(int i=0; i<5; i++) {
				  cout<<array[i]<<"  ";
				  }
				  cout<<endl;
				   }
				      }
				   }
				cout<<endl;
				 cout<<"Setelah di sortir = ";
				
				 for(int i=0; i<5; i++) {
				  cout<<array[i]<<"  ";
				 }
				    cout<<endl;
				 t2=GetTickCount();
				 cout << endl <<"Lama proses = " << (int)(t2 - t1) << " ms";
				 cout<<endl;
				
				break;
			case 5:
				cout << "Terimakasih, silahkan datang kembali.";
				return 0;
			default:
				cout<<"Menu tidak ada";
		}
		
		cout << endl;
 
	    cout << "Ingin memilih menu lain (y/t)? ";
	    cin >> ulang;
	    cout << endl;
		
	}while(ulang == 'y' || ulang == 'Y');
	 	cout << "Terimakasih, silahkan datang kembali.";
 
  		cout << endl;
	

	return 0;

}


