
#include <stdio.h>
int main() {
    char a; 
    int result;

    printf("Enter a character: ");
    scanf("%c", &a);
    result = (a >= 'A' && a <= 'Z');

    printf("%d", result);
    return 0;
}