#include <stdio.h>
#include <stdlib.h>
#define size 11
int main()
{
    int mult[size][size];
    int i,j;
    //tep1-feel the values in the table
    for(i=1;i<size;i++)  //go over all the rows (one-by-one)
    {
        for(j=1;j<size;j++) //go over all the columns
        {
            mult[i][j]=i*j;
        }
    }
        //step2-print multipplication table
    for(i=1;i<size;i++)  //go over all the rows (one-by-one)
    {
        for(j=1;j<size;j++) //go over all the columns
        {
            printf("%5d  ",mult[i][j]);

        }printf("\n");
        // to go to next line to look like an array
    }

}
