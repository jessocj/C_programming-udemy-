#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,pow,i,result=1;

    printf("enter a num :");
    scanf("%d",&num);
    printf("enter a pow :");
    scanf("%d",&pow);

    for(i=1; i<=pow ;i++ )
    {
        result=result*num;
    }

    printf("%d in power of %d is %d",num ,pow,result);
    return 0;
}
