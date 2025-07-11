#include <stdio.h>
#include <stdlib.h>
/* 531
units=1     remainder of num by 10
tens=3   ----> 531/10=53 then 53 remainder by 10 we get 3
hundreds=5 divide num by 100
*/
int main()
{

   int num,sum;
   int units,tens,hundreds;
   printf("enter the 3digit  num :");
   scanf("%d",&num);

   units=num % 10;
   tens=(num/10)%10;
   hundreds=num/100;
   sum=units+tens+hundreds;
   printf("the sum of %d + %d+ %d is %d",hundreds,tens,units,sum);


}
