#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int result;
    printf("enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    result=((a>b)&&(c!=0));
    printf("%d",result);
    return 0;
}
