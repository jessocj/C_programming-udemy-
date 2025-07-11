#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    int totalSum=0, gradesCount=0;



    while(grade!=-1)
    {
       printf("enter the grades or '-1' to stop :");
       scanf("%d",&grade);
       totalSum=totalSum+grade;
       gradesCount++;

    }

    printf("you have entered %d grades ",gradesCount);
    printf("your avg grade is %f",(float)totalSum/gradesCount);
}
