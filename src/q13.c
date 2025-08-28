// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator).
#include<stdio.h>
int main(){
    int a;
    int result;
    printf("enter a number");
    scanf("%d",&a);
    result=((a/2)*2==a&&(a/3)*3==a);
    printf("%d",result);
    return 0;

}