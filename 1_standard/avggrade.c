#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade1,grade2,grade3;
    double avg;
    printf("grade1: ");
    scanf("%d",&grade1);
    printf("grade2: ");
    scanf("%d",&grade2);
    printf("grade3: ");
    scanf("%d",&grade3);
    avg=(grade1+grade2+grade3)/3.0;
    printf("the avg of grades are :%.2lf",avg);
}
