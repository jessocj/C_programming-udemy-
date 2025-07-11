#include <stdio.h>
#include <stdlib.h>
//'a','b','F','S','+','=','','1','2','0'
//'0'--->48
//...
//'9'---->57

//task:
//function that receives 3 characters
//if all the characters are of digit type ('0'---->'9')
//      an integer which is a decimal represntation  of the 3 digits number
//otherwise,return 0;

//eg:
//   '1','5','7'
           // return 157
//     '2','5','8'
//          return 258
//e;se retun 0;
int toDigit(char a,char b,char c)
{
    int hundreds,tens,units;
    int result;
    if(a>='0'&& a<='9')
        hundreds=a-'0';//1-->49-48--->=1
    else
        return 0;
    if(b>='0'&& b<='9')
        tens=b-'0';
    else
        return 0;
    if(c>='0'&& c<='9')
        units=c-'0';
    else
        return 0;
    return hundreds*100+tens*10+units;

}
int main()
{
    char a1,b1,c1;
    int result;
    printf("enter the characters: ");
    scanf("%c,%c,%c",&a1,&b1,&c1);
    result=toDigit(a1,b1,c1);

    printf("%d is the result",result);
}
