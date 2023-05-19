#include<iostream>

using namespace std;
int main(){
    int numBytes = 0;
    
    // short
    unsigned short myUnsignedShort = USHRT_MAX;
    numBytes = sizeof(myUnsignedShort);
    cout << endl << "--- short ---" << endl;
    cout << "Maximum value: " << myUnsignedShort << endl; 
    cout <<"Bytes used: " <<    numBytes << endl; 
    // int
    unsigned int myUnsignedInt = UINT_MAX;
    numBytes = sizeof(myUnsignedInt);
    cout << endl << "--- int ---" << endl;
    cout << "Maximum value: " << myUnsignedInt << endl; 
    cout <<"Bytes used: " <<    numBytes << endl; 
    
    // long
    unsigned long myUnsignedLongInt = ULONG_MAX;
    numBytes = sizeof(myUnsignedLongInt);
    cout << endl << "--- long ---" << endl;
    cout << "Maximum value: " << myUnsignedLongInt << endl; 
    cout <<"Bytes used: " <<  numBytes << endl;
    // long long
    unsigned long long myUnsignedLongLong = ULONG_LONG_MAX;
    numBytes = sizeof(myUnsignedLongLong);
    cout << endl << "--- long long ---" << endl;
    cout << "Maximum value: " << myUnsignedLongLong << endl; 
    cout <<"Bytes used: " <<  numBytes << endl;//8
}