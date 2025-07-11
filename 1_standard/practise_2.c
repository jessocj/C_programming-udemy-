#include<stdio.h>
int main(){
    float r,h;
    printf("Enter the radius :");
    scanf("%d",&r);
    printf("Enter the height :");
    scanf("%d",&h);
    printf("Area of circle is : %.2f",3.14*r*r);
    printf("Area of cylinder is : %.2f",2*(3.14*r*r)+2*3.14*r*h);

}