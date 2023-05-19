#include <stdio.h>
#include <conio.h>

using namespace std;
 main()
{
    int h, nama[3][3[22] = {
       	"002123456","Ilman Huda","1000000",
        "009123456","David","500000",
        "005123456","Revi","100000",
    };

    printf("Liga Champions : \n\n");

    for(int i=0; i<5; i++)
    {
        ++h;
        printf("Grup %c  \n", h);

        for(int s=0; s<5; s++)
        {
            printf("      %d. %s \n", s+1, nama[i][s]);   
        }
        printf("\n");
    }
    

    getch();

}
