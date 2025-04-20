#include <stdio.h>
#include <stdlib.h>

//this exercise is about calculate the average of the values in a table.
int tableAverage(int table[], int tablesize);

int main()
{
   int arr[5] = {1, 2, 3, 4, 5};

   printf   ("%d", tableAverage(arr, 5));//print the average;
}

int tableAverage(int table[], int tablesize)
{
    int i, tot = 0;

    //sum the table and store it in tot
    for(i = 0; i < tablesize; i++)
    {
        tot += table[i];
    }
    return tot / tablesize;//the average
}
