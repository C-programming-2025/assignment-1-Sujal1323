// Write a C program to prompt the user for their name and display a personalized greeting message.

#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name");
    scanf("%49s",&name);
    printf("Hello,%s! Welcome to the program.\n");
    return 0;
}