// find maximum value number in a given phone number
//---------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[]={1,4,0,2,9,4,5};
    int i;
    int max_value;
   // printf("enter phone num no.%d:\n");
    //scanf("%d",&num);

    max_value=num[0];//assumptions
    for(i=1;i<7;i++)
    {
        if(num[i]>max_value)
            max_value=num[i];

    }
    printf("your max value in your  is: %d \n",max_value);
    return 0;
}
