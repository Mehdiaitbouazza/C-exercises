#include <stdio.h>
#include <stdlib.h>

//Calculate Simple Interest
int main()
{
   float principal, rate, time, Interest;

   //take the information from the users.

   printf   ("Enter the principal:");
   scanf    ("%f", &principal);

   printf   ("Enter the rate:");
   scanf    ("%f", &rate);

   printf  ("Enter the time:");
   scanf    ("%f", &time);

    //Interest formula.
   Interest = (principal * rate * time) / 100;

   printf("Interest:%.2f", Interest);
}
