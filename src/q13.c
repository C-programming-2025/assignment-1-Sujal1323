
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