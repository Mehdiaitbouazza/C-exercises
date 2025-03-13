#include <stdio.h>
#include <stdlib.h>

//the largest number betwen 3 numbers.
int main()
{
    int num1, num2, num3;

    //take the 3 numbers from the user.
    printf  ("Enter 3 numbers:");
    scanf   ("%d %d %d", &num1, &num2, &num3);


    if (num1 > num2 && num1 > num3)
    {
        printf  ("the largest number is %d", num1);
    }

    if (num2 > num1 && num2 > num3)
    {
        printf  ("the largest number is %d", num2);
    }

    if (num3 > num2 && num3 > num1)
    {
        printf  ("the largest number is %d", num3);
    }
}
