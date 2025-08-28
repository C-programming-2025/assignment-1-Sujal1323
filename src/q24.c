
#include <stdio.h>
#include <math.h>
int main() {
    int a;
    int result;
    int root;

    printf("Enter a number: ");
    scanf("%d", &a);

    root = (int)sqrt(a); 
    result = (root * root == a);

    printf("%d", result);
    return 0;

}