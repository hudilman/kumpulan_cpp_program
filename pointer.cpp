#include <iostream>
using namespace std;
 
int main () {
   // an array with 5 elements.
   int balance[5] = {1,10,8,5,7};
   int *p;

   p = balance;
 
   // output each array element's value 
   cout << "Array values using pointer " << endl;
   
   for ( int i = 0; i < 5; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }
   cout << "Array values using balance as address " << endl;
   
   for ( int i = 0; i < 5; i++ ) {
      cout << "*(balance + " << i << ") : ";
      cout << *(balance + i) << endl;
   }
 
   return 0;
}
