// Given two variables x and y, write an expression that calculates the average of their values.
#include<stdio.h>
int main(){
    int a,b;
    float avg;
    printf("enter any 2 numbers");
    scanf("%d %d",&a,&b);
    avg=(a+b)/2.0;
    printf("avgerage=%.2f", avg);
    return 0;

}