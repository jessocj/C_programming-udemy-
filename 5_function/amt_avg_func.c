#include <stdio.h>
#include <stdlib.h>
//write a function that gets some "num"(not an integer type , and a "digit");
//the function should:
//  1:print the total amount of digits in num which are less than "digit"
//  2:return average of those digitd(that are less than "digit")

//eg:
//#1:"num"=13572,"digit"=3==>print(2).return (1+2)/2.return 1.5
//#1:"num"=123123,"digit"=3==>print(4).return (4+2)/2.return 1.5


float lowerthanDigit(int num,int digit)
{
    int counter=0;
    int totalSum=0;
    int digits;
    if(num<0)
        num=num*(-2);

    while(num!=0)
    {
        if(num % 10<digits)
        {
            counter++;
            totalSum +=num %10;
        }
        num=num/10;
    }
    printf("total amt of digits in %d : \n",num,counter);
    return (float)totalSum/counter;
}
int main()
{
    int n,d;
    int result;
    printf("enetr the number , digit :");
    scanf("%d,%d",&n,&d);
    result=lowerthanDigit(n,d);
    printf("%d is the avg result : %.2lf",d,result);
}
