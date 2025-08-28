// Write a C expression that calculates the sum of the squares of three different numbers.
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int result;
    printf("enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    result=((a*a)+(b*b)+(c*c));
    printf("%d",result);
    return 0;
    
}