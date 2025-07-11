#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pullupsarray[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("enter number of pull ups on day %d: ",i+1);
        scanf("%d",&pullupsarray[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%d days ago you did %d pullups\n",10-i-1,pullupsarray[i]);
    }
    return 0;
}
