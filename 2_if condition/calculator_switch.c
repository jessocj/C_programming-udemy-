#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;


    printf("enter the num1:");
    scanf("%d",&a);
    char mathoperator;
    printf("enter the operator(+,-,*,/,....): \n");
    scanf(" %c",&mathoperator);//space(_%c) to clear any unwanted values from previous line

    printf("enter the num2:");
    scanf("%d",&b);
    switch(mathoperator)
    {
        case '+':
            printf("%d",a+b);
            break;
         case '-':
            printf("%d",a-b);
            break;
         case '*':
            printf("%d",a*b);
            break;
         case '/':
            if(b==0)
                printf("cannot divide by zero!");
            else
                printf("%d",a/b);
            break;
         case '%':
            if(b==0)
                printf("cannot divide by zero!");
            else
                printf("%d",a%b);
            break;
         default:
            printf("syntax error..try again! \n");
            break;
    }


    return 0;

}
