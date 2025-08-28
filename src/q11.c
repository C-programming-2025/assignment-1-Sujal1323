// Write a C expression that performs the following operations in a single line: increment a variable by 1, multiply it by 3, and subtract 10.
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    printf("enter a number");
    scanf("%d",&a);
    b=++a,c=b*3,d=c-10;
    printf("%d",d);
    return 0;

}