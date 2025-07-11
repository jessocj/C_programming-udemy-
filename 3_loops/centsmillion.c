#include <stdio.h>
#include <stdlib.h>
/*n=3
1
12
123
*/
int main()
{
    int i,j,num;
    float cent= 0.01;
    printf("enter the num :");
    scanf("%d",&num);

    for(i=1;i<=30;i++)// i<=30 ---coz 30 days
    {
        printf("DAy: %d : amount %.2f \n",i,cent);
        cent = cent * 2;
    }
    printf("total amounts after 30 days is : %f \n",cent);

    return 0;
}
