#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,i;
    int b,j;

    printf("enter the no.of rows :");
    scanf("%d",&a);
    printf("enter the no.of coloumns :");
    scanf("%d",&b);
    printf("the matrix is %d x %d",a,b);

    int my2Darray[a][b];
    printf("Enter the elements :\n");

    for(int i=0;i<a;i++)  //go over all the rows (one-by-one)
    {
        for(int j=0;j<b;j++) //go over all the columns
        {
            printf("[%d][%d] =",i,j);
            scanf("%d",&my2Darray[i][j]);

        }
    }
    printf("\nthe matrix is : \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d  ",my2Darray[i][j]);
        }printf("\n");
    }
    return 0;
}
