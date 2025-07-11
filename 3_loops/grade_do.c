#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;

    do
    {
        printf("pls enter the grade btw 0-100: ");
        scanf("%d",&grade);

    } while(grade<0 || grade>100);
    printf("thanks you've inserted %d ,which is a legit grade! \n",grade);
    return 0;
}
