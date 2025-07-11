#include <stdio.h>
#include <stdlib.h>
//"very ascending " or "not vry ascending"
int main()
{
        int currentdigit;
        int num;
        int oddsum=0,evensum=0;
        printf("enter the num :");
        scanf("%d",&num);

        while(num>0)
        {
            currentdigit=num%10;
            if(currentdigit%2==0)
                evensum+=currentdigit;
            else
                oddsum+=currentdigit;
            num=num/10;
        }
        printf("even digit sum-odd digit sum=%d\n",evensum-oddsum);

        return 0;

}
