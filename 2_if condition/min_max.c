#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2;
    printf("enter the input :");
    scanf("%f",&num1);
    printf("enter the input :");
    scanf("%f",&num2);
    if(num1>num2)
        printf(" max is:%.1f \n min is %.1f",num1,num2);

    else
        printf(" max is :%.1f \n min is %.1f",num2,num1);
    return 0;

}
