// Write an expression that checks if a number is a multiple of either 3 or 5.
#include<stdio.h>
int main(){
    int a;
    int result;
    printf("enter a number");
    scanf("%d",&a);
    result=(a % 3 == 0 || a % 5 == 0);

    printf("%d",result);
    return 0;

}