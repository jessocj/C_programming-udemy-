#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*
//Devisors
//-------------
a "divisor" of "num" is considered to be a number that <<<"num" % "divisor"=0>>>
for eg:
    6--->1,2,3,6;
    12--->1,2,3,4,6,12;
    15--->1,3,5,15
    */
int sumofdivisors(int num)
{
    int i,sum=0;
    if(num==1)
        return num;
    for(i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }

    }
    return sum;

}

/*
16---->1,2,4,8,16
       |_|_|_|_|-->1*16=16
         |_|_|---->2*8=16
           |----->4*4
*/

int optimizedsumofdivisor(int num)
{
    int i;
    int sum=1;
    if(num==1)
        return 1;
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
            sum=sum+i +(num/i);
    }
    if(i*i==num)
        sum=sum+i;
    return sum+num;
}

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("the divisors are: ");
   // printf("\nthe sum of divisors are %d",sumofdivisors(n));
    printf("\nthe sum of divisors are %d",optimizedsumofdivisor(n));

}
