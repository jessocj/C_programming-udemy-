#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("enter the input :");
    scanf("%d",&num1);
    printf("enter the input :");
    scanf("%d",&num2);
    if(num1>num2)
        printf("max=%d! \n",num1);
    else
        printf("max=%d \n",num2);
    return 0;

}
