#include <stdio.h>
#include <stdlib.h>
//isEven (name f function)
//this function will receive an integer.
//return "1",if this given number is "Even".
//otherwise,this function should return "0".Odd ---->"0"
int isEven(int num)
{
    if(num%2==0)
        //printf("the number is even");
        return 1;
       // printf("the number is odd");
    return 0;
}






int main()
{
    int n;
    printf("enter the number: \n");
    scanf("%d",&n);
    return isEven(n);
}
