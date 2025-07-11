#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    int max,min;
    printf("enter the input :");
    scanf("%d",&num1);
    printf("enter the input :");
    scanf("%d",&num2);
    printf("enter the input :");
    scanf("%d",&num3);
    max=num1;
    min=num2;
    if(num1<num2)
    {
        max=num2;
        min=num1;
    }
    if(max<num3)
        max=num3;
    if(num3<min)
        min=num3;
    printf("max btw 3 nums is %d\n",max);
    printf("min btw 3 nums is %d\n",min);



    return 0;

}
