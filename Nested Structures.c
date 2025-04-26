#include <stdio.h>
#include <stdlib.h>

//Nested Structures
typedef struct
{
    int day;
    int month;
    int year;

}Date;

typedef struct
{
    char name[50];
    int salary;
    Date hire_date;

}Employee;

int main()
{
    Employee emp = {"",0,0};

    printf   ("Enter your name:");
   scanf    ("%s", emp.name);

   printf   ("Enter your salary:");
   scanf    ("%d", &emp.salary);

   printf   ("Enter your hire date:");
   scanf    ("%d %d %d", &emp.hire_date.day,&emp.hire_date.month,&emp.hire_date.year);

   printf("%s hired in %d/%d/%d and his salary is %d", emp.name, emp.hire_date.day, emp.hire_date.month, emp.hire_date.year, emp.salary);
}
