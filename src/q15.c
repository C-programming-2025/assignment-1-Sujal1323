// Write an expression that checks if a number is both positive and even.
#include<stdio.h>
int main(){
    int a;
    int result;
    printf("enter a number");
    scanf("%d",&a);
    result=((a>0)&&(a%2==0));
    printf("%d",result);
    return 0;

}