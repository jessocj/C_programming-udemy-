#include <stdio.h>
#include <stdlib.h>

int main()
{

    float data,decimal;
    printf("enter the data :");
    scanf("%f",&data);
    decimal=data-(int)data;
    printf("the decimal part is :%.2f",decimal);

}
