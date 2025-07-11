#include <stdio.h>
#include <stdlib.h>
//"very ascending " or "not vry ascending"
int main()
{
        int currentdigit;
        int num,i;
        int oddsum=0,evensum=0;
        printf("enter the num :");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
            printf("enter the values");
            scanf("%d",&currentdigit);
            if(currentdigit%2==1)
                oddsum+=currentdigit;

        }

        printf(" odd digit sum=%d\n",oddsum);

        return 0;

}
