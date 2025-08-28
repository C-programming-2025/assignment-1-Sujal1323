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