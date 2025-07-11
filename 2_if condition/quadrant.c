#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("enter the x :");
    scanf("%d",&x);
    printf("enter the y:");
    scanf("%d",&y);
   // printf("enter the num3:");
    //scanf("%d",&c);
    if (x>0 && y>0)
        printf("1st quadrant");
    else if(x<0 && y>0)
        printf("2nd quadrant");
    else if (x<0 && y<0)
        printf("3rd quadrant");
    else if(x==0 && y==0)
        printf("origin");
    else
        printf("4th quadrant");


    return 0;

}
