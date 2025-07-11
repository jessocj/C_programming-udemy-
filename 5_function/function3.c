//no parameters &  returned

// return  max and min btw 3  numbers
//-------------------------------------
#include<stdio.h>

int maxbtw3()
{
    int num1,num2,num3;
    printf("enter num1,num2,num3 :");
    scanf("%d,%d,%d",&num1,&num2,&num3);

    if(num1>num2)
        if(num1>num3)
            return num1;
        else
            return num3;
    else if (num2>num3)
        return num2;
    else return num3;
}

int main()
    {

        int max;
        max=maxbtw3();
        printf("max btw 3 is =%d: ",max);
        return 0;
    }

