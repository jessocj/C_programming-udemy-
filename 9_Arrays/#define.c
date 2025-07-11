#include <stdio.h>
#include <stdlib.h>

#define size 10 //helpd to change the const. value
int main()
{

    int arr[size]; //static apporoach
    int i,maxindex;

    for(i=0;i<size;i++)
    {
        printf("enter the num %d: ",i+1);
        scanf("%d",& arr[i]);
    }
    maxindex=0;

    for(i=1;i<size;i++)
    {
        if(arr[i]>arr[maxindex])
            maxindex=i;

    }
    printf("index of max digit is :%d \n",maxindex);
}
