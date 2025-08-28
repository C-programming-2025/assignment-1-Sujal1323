// Given three variables a, b, and c, write an expression that checks if a is equal to b and b is not equal to c.
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int result;
    printf("enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    result=((a==b)&&(b!=c));
    printf("%d",result);
    return 0;
}