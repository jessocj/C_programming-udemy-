#include <stdio.h>
#include <stdlib.h>


float rectArea(float height,float width)
{
    float area;
    area=height*width;
    return area;

}
int main()
{
    float h,w;
    float area;

    printf("Enter the height: ");
    scanf("%f",&h);

    printf("Enter the width: ");
    scanf("%f",&w);

    area= rectArea(h,w);
    printf("the area of given rect is :%.2f \n",area);
    return area;
}
