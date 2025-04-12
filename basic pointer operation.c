#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    int *poinum = &num;

    printf  ("%d\n", num);//The value of the integer.
    printf  ("%p\n", &num);//The address of the integer.
    printf  ("%d\n", *poinum);//The value the pointer is pointing to.
    printf  ("%p\n", poinum);//The address stored in the pointer.
}
/*Exercise: Write a program that declares an integer variable and a pointer to that integer.
Assign the address of the integer to the pointer and print:

The value of the integer.

The address of the integer.

The value the pointer is pointing to.

The address stored in the pointer.*/
