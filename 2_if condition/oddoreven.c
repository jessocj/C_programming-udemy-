#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("enter the input :");
    scanf("%d",&num1);
   // printf("enter the input :");
   // scanf("%d",&num2);
    if(num1%2!=0) //if num div by 2 and remainder not equal to zero is odd
        printf(" %d is an odd num \n",num1);
    else  //if num divide by 2 and rem= 0 then even
        printf("%d is an even num \n",num1);
    return 0;

}
