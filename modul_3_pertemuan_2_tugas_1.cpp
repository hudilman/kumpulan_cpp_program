#include <iostream>

using namespace std;

void userInput()
{
    int size=5;
    int arr[size];
    cout<<"Input : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Output : "<<endl;
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    userInput();
    return 0;
}
