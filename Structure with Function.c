#include <stdio.h>
#include <stdlib.h>

//Array of Structures
typedef struct Student Student;
struct Student
{
    char name[50];
    int age;
    double GPA;
};

int main()
{
   Student stu = {"", 0, 0};
   int i;

       printf   ("Enter your name:");
       scanf    ("%s", stu.name);

       printf   ("Enter your age:");
       scanf    ("%d", &stu.age);

       printf   ("Enter your GPA:");
       scanf    ("%lf", &stu.GPA);

       printStudent(stu.name,stu.age,stu.GPA);
}

void printStudent(char name[], int age, double GPA)
{
    printf("%s, it's %d years old, and his GPA is:%.2lf",name,age,GPA);
}
