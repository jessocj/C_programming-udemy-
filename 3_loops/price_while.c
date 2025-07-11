#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price,totalPrice=0;
    printf("pls enter the price: ");
    scanf("%d",&price);

    while(price!=0)
    {

        totalPrice=totalPrice+price;
        printf("pls enter the price: ");
        scanf("%d",&price);

    }
    printf("total Price of order  =%d \n",totalPrice);
    return 0;
}
