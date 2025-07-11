#include <stdio.h>
#include <stdlib.h>

int main()
{
    int my2Darray[2][3]={{5,2,1},{4,6,5}};

    for(int i=0;i<2;i++)  //go over all the rows (one-by-one)
        {
        for(int j=0;j<3;j++) //go over all the columns
        {
            printf("%d  ",my2Darray[i][j]);
        }printf("\n");// to go to next line to look like an array
    }return 0;
}
