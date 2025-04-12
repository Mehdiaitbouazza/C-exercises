#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 100;
    int *ptr = &num;

    printf("%d\n", ptr);
    ptr++;
    printf("%d", ptr);
}
