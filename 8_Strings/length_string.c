/*
1.write a function that takes a string and returns its length.
2.write a program that:
* asks the user for a string input
* calls the function at (1) to find the length of the string.
*prints the length to the screen
*/

#include <stdio.h>
#include <stdlib.h>
#define size 10

int strlen(char *str)// inthis char variable str we are goinng to store the variable
{
    int i=0,length=0;
    while(str[i]!='\0')
    {
        i++;
        length++;
    }
    return length;
}
int main()
{
    int strlength;
    char teststr[size];
    gets(teststr);
    strlength=strlen(teststr);
    printf("the length of string '%s' is '%d' \n",teststr,strlength);
    return 0;

}

