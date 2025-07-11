#include <stdio.h>
#include <stdlib.h>
#define size 5
/*
work with neighbours!

write a program that creates an array of integers.
The program should check and print if the array has at least one element with "good neighbours".
    -An element with good neighbours has a value that equals to the multiplication of both its neighbours (right,left).

    eg #1:-[1,3,2,6,3]---->array has "good neighbours"
    eg #2:-[4,4,7,4,9]---->array doesn't have "good neighbours"
*/
int main()
{
    int myarr[size];
    int i;
    int hasgoodneighbours=0;//assumption array doesnt have good neighbours
    for(i=0;i<size;i++)
    {
        printf("enter the value %d: ",i+1);
        scanf("%d",&myarr[i]);
    }
    for(i=1;i<size-1;i++)
    {
        if(myarr[i]==myarr[i-1]*myarr[i+1])
        {
            printf("this array has good neighbours!!\n");
            hasgoodneighbours=1;
            return 0;
        }
    }
   // if(hasgoodneighbours==0)
    printf("this array doesn't have any good neighbours!!\n");
   // else if(hasgoodneighbours==1)
    //printf("this array has good neighbours!!\n");
    return 0;
}
