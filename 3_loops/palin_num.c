#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num;
    printf("enter the num :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)// i<=30 ---coz 30 days
    {
        printf("%d ",i);

    }
    for(i=(num-1);i>=1;i--)
    {
                printf("%d ",i);

    }

    return 0;
}
