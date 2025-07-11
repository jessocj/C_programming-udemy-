#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price,totalPrice=0;
    printf("pls enter the price: ");
    scanf("%d",&price);

    do
    {
        printf("pls enter the price: ");
        scanf("%d",&price);

        totalPrice=totalPrice+price;


    } while(price!=0);
    printf("total Price of order  =%d \n",totalPrice);
    return 0;
}
