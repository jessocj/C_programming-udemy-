#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter the input :");
    scanf("%d",&a);
  //  printf("enter the input :");
    //scanf("%d",&b);
  //  printf("enter the input :");
    //scanf("%d",&c);

    if(a<60)
        printf("oh..you didn't pass");
    else if(a>=60 && a<80)
        printf("Not bad...");
    else
        printf("Excellent Job!");



    return 0;

}
