#include <stdio.h>
#include <stdlib.h>

//Basic Structure Usage
typedef struct Student Student;
struct Student
{
    char name[50];
    int age;
    float GPA;
};

int main()
{
   Student first = {"", 0, 0};

   printf   ("Enter your name:");
   scanf    ("%s", first.name);

   printf   ("Enter your age:");
   scanf    ("%d", &first.age);

   printf   ("Enter your GPA:");
   scanf    ("%f", &first.GPA);

   printf   ("%s is a %d years old and his GPA is %.2f", first.name,first.age,first.GPA);
}
