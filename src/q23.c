
#include <stdio.h>
int main() {
    int num;
    int result;
    printf("Enter a number");
    scanf("%d", &num);
    result=((num > 0) && ((num & (num - 1)) == 0));
    printf("%d",result);

    return 0;
}