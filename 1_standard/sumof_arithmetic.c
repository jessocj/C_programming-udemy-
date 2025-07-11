#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a_1,a_n,d,n;
   float sum;
   printf("enter the number of terms :");
   scanf("%d",&n);
   printf("enter the first term :");
   scanf("%d",&a_1);
   printf("enter the difference :");
   scanf("%d",&d);
   a_n=a_1+(n-1)*d;
   printf("%d is the nth term\n",a_n);
   printf("the sum of %d num is %f",n,(float)(a_1+a_n)*n/2);
}
