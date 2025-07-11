//yes parameters & nothing returned

// Find max and min numbers
//-------------------------
#include<stdio.h>

void printminmax(int num1,int num2)
{
    if(num1>num2)
    {
        printf("max is %d: \n",num1);
        printf("min is %d: \n",num2);
    }
    else
    {
        printf("max is %d: \n",num2);
        printf("min is %d: \n",num1);
    }
}
    int main()
    {

        int a,b;
        printf("enetr number 1: ");
        scanf("%d",&a);
        printf("enetr number 2: ");
        scanf("%d",&b);
        printminmax(a,b);
    }

