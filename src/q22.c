// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
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