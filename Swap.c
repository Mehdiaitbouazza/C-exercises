#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 15, b = 30;

    a = a + b;//a = 15 + 30 = 45;
    b = a - b;//b = 45 - 30 = 15;
    a = a - b;//a = 45 - 15 = 30;

    printf  ("a = %d\nb = %d",a ,b);
}

