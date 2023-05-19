#include <iostream>
 
using namespace std;
 
int tambah(int var1, int var2) {
  return var1 + var2;
}
 
int tambah(int var1, int var2, int var3) {
  return var1 + var2 + var3;
}
 
string tambah(string var1, string var2) {
  return var1 + " tambah " + var2;
}
 
int main()
{
  cout << tambah(1, 2) << endl;
  cout << tambah(5, 4, 3) << endl;
  cout << tambah("satu","dua") << endl;
 
  return 0;
}
