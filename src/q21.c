
#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    int temp;
    printf("enter any three numbers");
    scanf("%d %d %d",&x,&y,&z);
    printf("Before swap: x=%d,y=%d,z=%d",x,y,z);
   temp=x;
   x=y;
   y=z;
   z=temp;
    printf("After swap:x=%d,y=%d,z=%d",x,y,z);
    return 0;
}