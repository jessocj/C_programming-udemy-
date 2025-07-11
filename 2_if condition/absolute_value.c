#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter the digit :");
    scanf("%d",&a);
  //  printf("enter the num2:");
    //scanf("%d",&b);
   // printf("enter the num3:");
    //scanf("%d",&c);
    if (a<0)
        printf("absolute value is |%d| ",a*-1);
    else
        printf("abs value is |%d|",a);
    

    return 0;

}
