/*
For loop
---------

'initialization"
"loop condition"
"update" statement


loop body 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;

    printf("enter a num :");
    scanf("%d",&num);

    for(i=1;     i<=num;  i=i+2)
/*      ----      ----- ----
          |        |      |
initialization    loop   update
phase           condition   statement

----------
          |      -loop body       */
    {
        printf("%d \n",i);
    }


    return 0;
}
