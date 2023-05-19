#include <iostream>
using namespace std;
int main(){
    int banyakA;
    int x[100];
    cout<<"BUBBLE SORT ASCENDING"<<endl<<endl;
    cout<<"Masukkan banyak array: ";
    cin>>banyakA;
    for(int m=0; m<banyakA; m++){
        cout<<"Masukkan array ke "<<m<<": ";
        cin>>x[m];
    }

    cout<<"Array awal adalah: "<<endl;
    int y=banyakA-2;
    int q;
    for(int m=0; m<banyakA; m++){
        cout<<x[m]<<" ";
    }    
    
    while(y>=0){
        int index=0;
        while(index<=y){
            if(x[index]>x[index+1]){
                q=x[index];
                x[index]=x[index+1];
                x[index+1]=q;
}
            index++; }
        y--; }
    cout<<endl;
    //cetak hasil sorting
    cout<<"Hasil sortingnya adalah: "<<endl;
    
    for(int m=0; m<banyakA; m++){
        cout<<x[m]<<" ";
    }
    cout<<endl;
    //cetak deretan genap saja
    cout<<"Hasil deretan genap: "<<endl;
    for(int x=1;x<=banyakA;x++) {
        if (x%2==0) 
        cout<<x<<" ";
}
 }

