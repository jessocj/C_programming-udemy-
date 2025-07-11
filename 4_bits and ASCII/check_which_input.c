#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("enter the character: ");
    scanf("%c",&character);
    if(character>='A' && character <='Z')
        printf("uppercase! \n");
    else if (character>='a'&& character <='z')
        printf("lowercase!\n");
    else if (character>='0' && character <='9')
        printf("digit!\n");
    else
        printf("other..!\n");

    return 0;
}


