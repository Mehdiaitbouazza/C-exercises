#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 10, tmp;

    tmp = a;
    a = b;
    b = tmp;

    printf("a=%d\nb=%d", a, b);
}
//program that swaps the values of two variables.
