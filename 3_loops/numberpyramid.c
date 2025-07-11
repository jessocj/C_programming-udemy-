#include <stdio.h>
#include <stdlib.h>
/*
  1
 2 3
 4 5 6
 */
int main()
{
    int i,j,k,num,spaces;
    printf("enter the num of rows :");
    scanf("%d",&num); //n=3
  //  printf("enter the multiplicator :");
    //scanf("%d",&multiplicator);
    spaces=num-1; //n=2
    int currentvalue=1;

    for(i=1;i<=num;i++)// iterate over all of the rovws
    {
        for (k=spaces;k>=1;k--){
             printf(" ");
        }

        for (j=1;j<=i;j++){
            printf("%d ",currentvalue);
            currentvalue+=1;
        }
        printf("\n");
        spaces--;


    }
    return 0;
}
