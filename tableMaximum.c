#include <stdio.h>
#include <stdlib.h>

void tableMaximum(int table[], int tableSize, int maxValue);
void disarr(int table[],int tablesize);

int main()
{
   int arr[5] = {10, 23, 34, 45, 50};
   int maxval = 0;

   //ask the user to enter the value of the max value.
   printf   ("Enter the maximum number:");
   scanf    ("%d", &maxval);

   tableMaximum (arr, 5, maxval);//set the numbers biger than mamvalue to 0.
   disarr   (arr, 5);//display the table.
}

//the function that set the numbers biger than mamvalue to 0.
void tableMaximum(int table[], int tableSize, int maxValue)
{
    int i;
    for(i = 0; i < tableSize; i++)
    {
        if (table[i] > maxValue)
        {
            table[i] = 0;
        }
    }
}

//the function that display the table.
void disarr(int table[],int tablesize)
{
    int i;

    for(i = 0; i < tablesize; i++)
    {
        printf  ("%d\n", table[i]);
    }
}
