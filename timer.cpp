#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int counter = 5; //amount of seconds
    Sleep(1000);
    
		
	while (counter >= 1)
    {
	    
	    
	    if(counter == 1){
    	
	    	cout<<"\nENDED\n";
	    	return 0;
    		
		}else{
			cout << "\rTime remaining: " << counter << flush;
		    Sleep(1000);
		    counter--;	
		}
    }
		
    
}
