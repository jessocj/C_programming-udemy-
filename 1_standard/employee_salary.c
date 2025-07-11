#include <stdio.h>
#include <stdlib.h>

int main()
{
   double sal_hr,hr_month,month_sal;
   printf("enter the salary per hour :");
   scanf("%lf",&sal_hr);
   printf("enter the total hours worked in a month:");
   scanf("%lf",&hr_month);
   month_sal=sal_hr*hr_month;
   printf("the total monthly salary is :%.2lf",month_sal);
}
