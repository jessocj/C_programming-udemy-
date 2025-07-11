#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade[5];
    int i;
    int lowest_grade;

    for(i=0;i<5;i++)
    {
        printf("enter grade no.%d:\n",i+1);
        scanf("%d",&grade[i]);
    }
    lowest_grade=grade[0];
    for(i=0;i<5;i++)
    {
        if(grade[i]<lowest_grade)
            lowest_grade=grade[i];

    }
    printf("your lowest grade is: %d \n",lowest_grade);
    return 0;
}

