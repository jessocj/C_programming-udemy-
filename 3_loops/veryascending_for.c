#include <stdio.h>
#include <stdlib.h>

int main()
{
        int size,i,num;
        int previous;
        int isveryascending=1;
        printf("enter the size :");
        scanf("%d",&size);
        for (i=0;i<size;i++){
            printf("enter the nums :");
            scanf("%d",&num);

            if(i>0 && num<previous){
                isveryascending=0;

            }
            previous=num;

        }
        if(isveryascending)
            printf(" very ascending");
        else
            printf("not very ascending");


        return 0;
}
