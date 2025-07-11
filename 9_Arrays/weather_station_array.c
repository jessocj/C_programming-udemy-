#include <stdio.h>
#include <stdlib.h>

#define day 7
//1.avg temp
//2.hottestday
//3.coldestday
int main()
{
    float temp[day];
    int i,hottestDay=0;
    int coldestDay=0;
    float sum=0.0;
    float avg_temp;

    for(i=0;i<day;i++)
    {
        printf("temperature on %d st day is :",i+1);
        scanf("%f",&temp[i]);
        sum+=temp[i];
    }
    avg_temp=sum/day;
    printf("avg temp of %d days is %f \n",day,avg_temp);


    for(i=1;i<day;i++)
    {
        if(temp[i]>temp[hottestDay])
        {
            hottestDay=i;//represent day which is hottest

        }
        if(temp[i]<temp[coldestDay])
        {
            coldestDay=i;
            continue;//when find the day it skips

        }
    }

    printf("hottest day of week is %d th day \n",hottestDay+1);
    printf("coldest day of week is %d th day \n",coldestDay+1);
}
