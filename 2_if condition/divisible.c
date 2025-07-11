#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("enter the nums :");
    scanf("%d,%d,%d",&x,&y,&z);
   // printf("enter the y:");
   // scanf("%d",&y);
   // printf("enter the num3:");
    //scanf("%d",&c);
    if ((x%y==0 || y%x==0) && (y%z==0 || z%y==0))
        printf("divisible");

    else
        printf("not divisible");


    return 0;

}
