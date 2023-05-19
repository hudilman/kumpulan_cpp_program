#include <stdio.h>
 
int main()
{
    int array[9];
    int i, j, num=9, temp, keynum;
    int low, mid, high; 

    printf("Masukan 9 data satu persatu dibatasi dengan spasi : ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("data yang dimasukan : ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
    
    /*  Bubble sort */
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("\n Data yang telah disorting : ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n Data yang dicari : ");
    scanf("%d", &keynum);
    /*  Binary searching begins */
    low = 1;
    high = num;
    do
    {
        mid = (low + high) / 2;
        if (keynum < array[mid])
            high = mid - 1;
        else if (keynum > array[mid])
            low = mid + 1;
    } while (keynum != array[mid] && low <= high);
    if (keynum == array[mid])
    {
        printf("Data berada di urutan ke- %d",mid);
    }
    else
    {
        printf("Data tidak ditemukan! \n");
    }
}
