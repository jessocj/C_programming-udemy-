#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,temp;
    printf("enter the num a : ");
    scanf("%f",&a);
    printf("enter the num b : ");
    scanf("%f",&b);
    temp=a;// store a to temp
    a=b;//store b to a
    b=temp;//store temp to b

    printf("the swapped nums are a=%f and b=%f",a,b);
    return 0;


}
