
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