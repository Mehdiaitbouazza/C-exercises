#include <stdio.h>
#include <stdlib.h>

void min(int *hours,int *minuts);
int main()
{
    int hours = 0, minuts = 90 ;

    min(&hours, &minuts);

    printf("%d hour and %d min",hours, minuts);
}

void min(int *hours,int *minuts)
{
    *hours = *minuts / 60;
    *minuts = *minuts % 60;
}
