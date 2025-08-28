
#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    int result;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);

    result = (int)round(sqrt(a + b));

    printf("%d", result);
    return 0;
}