#include <stdio.h>
#include <stdlib.h>

void sortTable(int table[], int tableSize);
void disarr(int table[], int tableSize);

int main()
{
    int arr[5] = {100,50,10,60,90} ;
    sortTable   (arr, 5);
    disarr  (arr, 5);

}

//the function that sort the table
void sortTable(int table[], int tableSize)
{
    int i, h, tmp = 0;

    for(i = 0; i < tableSize - 1 ; i++)
    {

        for(h = 0; h < tableSize - 1 ; h++)
        {
            if (table[h] > table[h + 1])
            {
                //swap
                tmp = table[h];
                table[h] = table[h + 1];
                table[h + 1] = tmp;
            }
        }
    }
}

//the function that dissplay the table.
void disarr(int table[], int tableSize)
{
    int i;
    for(i = 0; i < tableSize; i++)
    {
        printf  ("%d\n", table[i]);
    }
}
