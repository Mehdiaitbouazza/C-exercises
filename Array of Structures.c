#include <stdio.h>
#include <stdlib.h>

//Array of Structures
typedef struct Student Student;
struct Student
{
    char name[50];
    int age;
    float GPA;
};

int main()
{
   Student stu[4] = {"", 0, 0};

   for (i = 0; i <= 4;i++)
   {
       printf   ("Enter your name:");
       scanf    ("%s", stu[i].name);

       printf   ("Enter your age:");
       scanf    ("%d", &stu[i].age);

       printf   ("Enter your GPA:");
       scanf    ("%f", &stu[i].GPA);
   }
   //the highest GPA in the class.
   if(stu[0].GPA > stu[1].GPA && stu[0].GPA > stu[2].GPA && stu[0].GPA > stu[3].GPA && stu[0].GPA > stu[4].GPA)
   {
       printf("the highest GPA reward is for %s, it's %d years old, and his GPA is:%f",stu[0].name,stu[0].age,stu[0].GPA);
   }

    if(stu[1].GPA > stu[0].GPA && stu[1].GPA > stu[2].GPA && stu[1].GPA > stu[3].GPA && stu[1].GPA > stu[4].GPA)
   {
       printf("the highest GPA reward is for %s, it's %d years old, and his GPA is:%f",stu[1].name,stu[1].age,stu[1].GPA);
   }

   if(stu[2].GPA > stu[0].GPA && stu[2].GPA > stu[1].GPA && stu[2].GPA > stu[3].GPA && stu[2].GPA > stu[4].GPA)
   {
       printf("the highest GPA reward is for %s, it's %d years old, and his GPA is:%f",stu[2].name,stu[2].age,stu[2].GPA);
   }

   if(stu[3].GPA > stu[0].GPA && stu[3].GPA > stu[1].GPA && stu[3].GPA > stu[2].GPA && stu[3].GPA > stu[4].GPA)
   {
       printf("the highest GPA reward is for %s, it's %d years old, and his GPA is:%f",stu[3].name,stu[3].age,stu[3].GPA);
   }

   if(stu[4].GPA > stu[0].GPA && stu[4].GPA > stu[1].GPA && stu[4].GPA > stu[2].GPA && stu[4].GPA > stu[3].GPA)
   {
       printf("the highest GPA reward is for %s, it's %d years old, and his GPA is:%f",stu[4].name,stu[4].age,stu[4].GPA);
   }
}
