/*ask the user to enter how many friends he has,
then allocate the number that hold the ages of the friends, then print the ages;*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int frd = 0,i;

    printf  ("How many friends do you have:");
    scanf   ("%d", &frd);

    int* m = malloc (sizeof(int) * frd);

    if(m == NULL)
    {
        exit(0);
    }

    for(i = 1; i <= frd; i++)
    {
        printf  ("Enter the age of your friend number %d:", i);
        scanf   ("%d", &m[i]);
    }

    for(i = 1; i <= frd; i++)
    {
        printf  ("the age of your friend number %d is:%d\n", i, m[i]);
    }

    free    (m);
}
