#include <stdio.h>
#include <stdlib.h>


int fact(int num)
{
    int i;
    int result=1;
    if(num<0)
        return -1;
    for (i=1;i<=num;i++)
    {
        result = result * i;
    }
    return result;

}
int main()
{
    int n;
    printf("Enter the num: ");
    scanf("%d",&n);
    printf("factorial of %d = %d\n",n,fact(n));
    return 0;
}
