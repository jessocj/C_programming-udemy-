#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,pow;
    int result=1;
    printf("enter the num: ");
    scanf("%d",&num);
    printf("enter the power: ");
    scanf("%d",&pow);
    while(pow>0)//condition-true of false
    {
        result=result*num;//loop body
        pow-=1;
    }
    printf("%d",result);
    return 0;
}


