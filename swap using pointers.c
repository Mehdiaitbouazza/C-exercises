#include <stdio.h>
#include <stdlib.h>

void    swap(int *a, int *b);
int main()
{
    int a = 5, b = 8;

    printf  ("before:\na = %d\nb = %d\n", a, b);
    swap    (&a, &b);
    printf  ("after:\na = %d\nb = %d\n", a, b);
}

void    swap(int *a, int *b)
{
    int m = 0;

    m = *a;
    *a = *b;
    *b = m;
}
