#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int units,tens,hundreds;
    printf("enter the 3 digit num:");
    scanf("%d",&a);
  //  printf("enter the num2:");
    //scanf("%d",&b);
   // printf("enter the num3:");
    //scanf("%d",&c);
    units=a%10;
    tens=(a/10) %10;
    hundreds=a/100;
    if (hundreds<tens && tens<units)
        printf("ASCENDING");
    else
        printf("NOT ASCENDING");


    return 0;

}
