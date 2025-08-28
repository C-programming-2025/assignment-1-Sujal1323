#include<stdio.h>
int main(){
    int a;
    int b;
    int temp;
    printf("enter any two numbers");
    scanf("%d %d",&a,&b);
    printf("Before swap: a=%d,b=%d",a,b);
   temp=a;
   a=b;
   b=temp;
    printf("After swap:a=%d,b=%d",a,b);
    return 0;
}