#include<stdio.h>
int main(){
    int num1=4;
    int num2=5;
    double result;
    result=(double)num1/num2; // here the cast is done to num1 from int to double so that the output is in decimal form
    printf("result=%lf\n",result);

}