//reads didgit from user(representing your number)

//here find the "index" of the "max digit" and print

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[10];
   int i,maxindex;
   printf("enter the number %d :");
   for(i=0;i<10;i++)
   {
       printf("enter the numbers %d :",i+1);
       scanf("%d",&arr[i]);

   }
   maxindex=0;
   for(i=0;i<10;i++)
   {
       if(arr[i]>arr[maxindex])
            maxindex=i;
   }
   printf("index of maxx digit is : %d \n",maxindex);
}
 //-----------------------------------------------------
 //version were we cassualy enter the number
 #include <stdio.h>

int main()
{
    char num[11]; // 10 digits + 1 for null terminator
    int arr[10];
    int i, maxindex;

    printf("Enter a 10-digit number: ");
    scanf("%10s", num); // read as a string

    // Convert each character to an integer
    for (i = 0; i < 10; i++)
    {
        arr[i] = num[i] - '0'; // convert char to int
    }

    maxindex = 0;
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > arr[maxindex])
            maxindex = i;
    }

    printf("Index of maximum digit is: %d\n", maxindex);
    printf("Maximum digit is: %d\n", arr[maxindex]);

    return 0;
}
