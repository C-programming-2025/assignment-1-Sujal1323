#include <stdio.h>
int main() {
    int totalDays, weeks, days;

    printf("Enter number of days: ");
    scanf("%d", &totalDays);

    weeks = totalDays / 7; 
    days = totalDays % 7;  

    printf("%d week%s and %d day%s\n", 
           weeks, (weeks == 1 ? "" : "s"), 
           days, (days == 1 ? "" : "s"));

    return 0;
}


