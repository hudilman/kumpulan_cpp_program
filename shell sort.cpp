#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int Data[MAX];

// Prosedur menukar data
void Tukar (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Prosedur pengurutan metode Shell
void ShellSort()
{
    int Jarak, i, j;
    bool Sudah;
    Jarak = MAX;
    while(Jarak > 1)
    {
        Jarak = Jarak / 2;
        Sudah = false;
        while(!Sudah)
        {
            Sudah = true;
            for(j=0; j<MAX-Jarak; j++)
            {
                i = j + Jarak;
                if(Data[j] < Data[i])
                {
                    Tukar(&Data[j], &Data[i]);
                    Sudah = false;
                }
            }
        }
    }
}

int main()
{
    int i;
    srand(0);

// Membangkitkan bilangan acak
    printf("DATA SEBELUM TERURUT : ");
    for(i=0; i<MAX; i++)
    {
        Data[i] = (int) rand()/1000+1;
        printf("\nData ke %d : %d ", i, Data[i]);
    }
    ShellSort();
// Data setelah terurut
    printf("\n\nDATA SETELAH TERURUT : ");
    for(i=0; i<MAX; i++)
    {
    printf("\nData ke %d : %d ", i, Data[i]);
    }
}
