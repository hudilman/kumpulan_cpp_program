#include <iostream>
#include <stdio.h>
#include <iomanip>
 
using namespace std;
 
int main()
{
    int a[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int i, n, flag;
     
    cout << " Masukkan angka yang dicari : ";
    cin >> n;
    cout << endl;
     
    for (i=0; i<11; i++){
        cout << setw (5) << a[i];
    }
    cout << endl;
     
    i = 0;
    flag = 0;
    while (i<=10){
        if (a[i] == n){
            flag++; 
        }
        i++;
    }
    if (flag > 0){
        cout << "\n Bilangan Ditemukan ";
        cout << "\n Terdapat " << flag << " Bilangan yang Sama";
    } else {
        cout << "\n Bilangan Tidak Ditemukan ";
    }
     
    return 0;
}
