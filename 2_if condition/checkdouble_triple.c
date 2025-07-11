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
    if (a>=10 &&a<=99)
        printf("double digit");
    else if(a >= 100 && a <= 999)
        printf("triple digit");
    else
        printf("neither");


    return 0;

}
