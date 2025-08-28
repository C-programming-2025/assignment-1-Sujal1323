// Create an expression that swaps the values of two variables x and y without using a temporary variable.
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter any two numbers");
    scanf("%d %d",&a,&b);
    printf("Before swap: a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap:a=%d,b=%d",a,b);
    return 0;
}