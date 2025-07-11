#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("enter the grade(A-F):");
    scanf("%c",&grade);
    switch(grade)
    {
        case 'A':
            printf("Grade btw 90-100 \n");
            break;
         case 'B':
            printf("Grade btw 80-89 \n");
            break;
         case 'C':
            printf("Grade btw 70-79 \n");
            break;
         case 'D':
            printf("Grade btw 60-69 \n");
            break;
         default:
            printf("error..try again! \n");
            break;
    }


    return 0;

}
