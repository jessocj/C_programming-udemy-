#include <stdio.h>
#include <stdlib.h>
//Function name---> toLower
//receive a character
//if this character is a upper acse letterr('A','B','C'......'Z')
//      RETURN THE LOWER CASE LETTER('a','b',.....'z')
//otherwise return -1
//eg:
        //'K'--->'k'
        //'b'--->'B'
        //'4'---->-1
char toLower(char letter)

{
    if(letter >='A' && letter <='Z')//if 'C'--->67,'A'---->65  (according to ascii table)
        return letter-'A'+'a';// 65-63=2->2+35-->37-->'c'
    else return -1;
}
char toUpper(char letter)

{
    if(letter >='a' && letter <='z')//if 'C'--->67,'A'---->65  (according to ascii table)
        return letter-'a'+'A';
    else if (letter=toLower(letter))
        return toLower(letter);
    else return -1;
}

char main()
{
    char l;
    printf("enter the letter: \n");
    scanf(" %c",&l);
    char lower=toLower(l);
    char upper=toUpper(l);
    if(lower!= -1)
        printf("%c is the updated letter  \n",lower);
    else if(upper!=-1)
        printf("%c is the updated letter  \n",upper);
    else
        printf("invalid(not a letter).\n");


    return 0;
}
