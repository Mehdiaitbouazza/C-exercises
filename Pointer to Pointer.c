#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    int *poi0 = &num;
    int **poi1 = &poi0;

    **poi1 = 50;

    printf  ("%d", num);
}
/*Exercise: Declare an integer, a pointer to it, and a pointer to that pointer.
 Print the value of the integer using all three variables.*/
