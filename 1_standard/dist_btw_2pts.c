#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int x1,y1,x2,y2,dist;
    printf("enter the point x1y1 :");
    scanf("%d,%d",&x1,&y1);
    printf("enter the point x2y2 :");
    scanf("%d,%d",&x2,&y2);
    dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("the dis between points %d,%d and %d,%d is %d",x1,y1,x2,y2,dist);
}
